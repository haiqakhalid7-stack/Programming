#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    // ALL DATA ARRAYS 
    int totalMembers = 50;
    int index = 0; // total members currently stored

    string nameArray[50];
    int ageArray[50];
    string genderArray[50];
    string contactArray[50];
    string planArray[50];
    float feeArray[50];
    bool feePaidArray[50];
    int attendanceArray[50];
    string trainerArray[50];
    string workoutArray[50];

    // Dynamic plans (max 10)
    int totalPlans = 10;
    int planIndex = 3; // 3 default plans
    string planNameArray[10];
    float planFeeArray[10];
    int planDurationArray[10];

    // Default plans
    planNameArray[0] = "Monthly";
    planFeeArray[0] = 3000;
    planDurationArray[0] = 30;

    planNameArray[1] = "3Month";
    planFeeArray[1] = 7500;
    planDurationArray[1] = 90;

    planNameArray[2] = "Yearly";
    planFeeArray[2] = 25000;
    planDurationArray[2] = 365;

    // History log (last 20 actions)
    string historyArray[20];
    int historyIndex = 0;

    // Admin credentials
    string adminUser = "admin";
    string adminPass = "admin123";

    // MAIN OUTER LOOP
    while (true)
    {
        system("cls");
        cout<<"========================================================" << endl;
        cout<<"                 GYM MANAGEMENT SYSTEM                  " << endl;
        cout<<"========================================================" << endl;
        cout<<"User Menu:" << endl;
        cout<<"1. Admin" << endl;
        cout<<"2. Member Portal" << endl;
        cout<<"3. Exit" << endl;
        cout<<"Choose Option: ";
        string userOption;
        cin >> userOption;
        cin.ignore();

        // ADMIN LOGIN
        if (userOption == "1")
        {
            bool loginSuccess = false;
            for (int attempt = 0; attempt < 3; attempt++)
            {
                system("cls");
                cout<<"Admin Menu: Login Attempt" << attempt+1 << endl;
                cout << "Enter Username: ";
                string username;
                cin >> username;
                cout<<"Enter Password: ";
                string password;
                cin >> password;
                cin.ignore();

                if (username == adminUser && password == adminPass)
                {
                    cout<<"Login Successful!"<<endl;
                    loginSuccess = true;

                     // ADMIN MENU LOOP 
                     while (true)
                     {
                        system("cls");
                        cout<<"===================================================="<<endl;
                        cout<<"                     ADMIN MENU                     "<<endl;
                        cout<<"===================================================="<<endl;
                        cout<<"1. Add Member"<<endl;
                        cout<<"2. View All Members"<<endl;
                        cout<<"3. Search Member"<<endl;
                        cout<<"4. Update Member"<<endl;
                        cout<<"5. Delete Member"<<endl;
                        cout<<"6. Mark Attendance"<<endl;
                        cout<<"7. View All Attendance"<<endl;
                        cout<<"8. Record Payment"<<endl;
                        cout<<"9. View Payment Records"<<endl;
                        cout<<"10. Sort Members"<<endl;
                        cout<<"11. View Activity History"<<endl;
                        cout<<"12. Logout"<<endl;
                        cout<<"Choose Option: ";
                        string adminOption;
                        cin >> adminOption;
                        cin.ignore();

                        // OPTION 1: ADD MEMBER
                        if (adminOption == "1")
                        {
                            if (index >= totalMembers)
                            {
                                cout<<"Member limit reached! cannot add more."<<endl;
                            }
                            else 
                            {
                                system("cls");
                                cout<<"------- Add New Member -------"<<endl;
                                cout<<"Enter Name: ";
                                getline (cin, nameArray[index]);
                                cout<<"Enter Age: ";
                                cin >> ageArray[index];
                                cout<<"Enter Gender: ";
                                getline (cin, genderArray[index]);
                                cout<<"Enter Contact: ";
                                getline (cin, contactArray[index]);

                                // Show available plans
                                cout<<endl<< "Available Plans :"<<endl;
                                for(int p=0; p<planIndex; p++)
                                {
                                    cout << p+1 << "  "<< planNameArray[p]
                                         << "  Rs."<< planFeeArray[p]
                                         << "  ("<<planDurationArray[p]<< " days)"<<endl;
                                } 
                                cout<<"Select plan (1 to " << planIndex << ") : ";
                                int pc;
                                cin >> pc;
                                cin.ignore();
                                
                                if (pc < 1 || pc > planIndex)
                                {
                                    cout<<"Invalid plan choice. Setting to none."<<endl;
                                    planArray[index] = "None";
                                    feeArray[index] = 0;
                                }
                                else
                                {
                                    planArray[index] = planNameArray[pc - 1];
                                    feeArray[index] = planFeeArray[pc - 1];
                                }

                                feePaidArray[index] = false;
                                attendanceArray[index] = 0;
                                trainerArray[index] = "Not assigned";
                                workoutArray[index] = "No workout plan";

                                // Save to history
                                historyArray[historyIndex % 20] = "Admin added member: " + nameArray[index];
                                historyIndex++;

                                cout<<"Member added successfully! Member ID : " <<index<<endl;
                                index++;
                            }
                                
                        }

                        // OPTION 2: VIEW ALL MEMBERS 
                        else if (adminOption == "2")
                        {
                            system("cls");
                            cout<<"------- All Members -------"<<endl;
                            if (index == 0)
                            {
                                cout<<"No members found."<<endl;
                            }
                            else
                            {
                                cout<<"ID\tName\t\tAge\tGender\tContact\t\tPlan\t\tFee\tPaid\tAttend\tTrainer\t\tWorkout"<<endl;
                                for (int i = 0; i < index; i++)
                                {
                                    if (nameArray[i] != "")
                                    {
                                        cout << i << "\t" << nameArray[i] << "\t\t"
                                             << ageArray[i] << "\t"  << genderArray[i] << "\t"  
                                             << contactArray[i] << "\t\t" << planArray[i] << "\t\t"
                                             << feeArray[i] << "\t" << (feePaidArray[i] ? "Yes" : "No") << "\t"
                                             << attendanceArray[i] << "\t" << trainerArray[i] << "\t\t"
                                             << workoutArray[i] << endl;
                                    }
                                }
                            }
                        }

                        // OPTION 3: SEARCH MEMBER
                        else if (adminOption == "3")
                        {
                            system("cls");
                            cout<<"Enter name to search: ";
                            string searchName;
                            getline(cin, searchName);

                            bool found = false;
                            int foundIndex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == searchName)
                                {
                                    found = true;
                                    foundIndex = i;
                                }
                            }
                            if (found == false)
                            {
                                cout<<"Record not found for name: " << searchName <<endl;
                            }
                            else
                            {
                                cout<<"--- Member Found ---"<<endl;
                                cout<<"ID         : " << foundIndex << endl;
                                cout<<"Name       : " << nameArray[foundIndex] << endl;
                                cout<<"Age        : " << ageArray[foundIndex] << endl;
                                cout<<"Gender     : " << genderArray[foundIndex] << endl;
                                cout<<"Contact    : " << contactArray[foundIndex] << endl;
                                cout<<"Plan       : " << planArray[foundIndex] << endl;
                                cout<<"Fee        : Rs." << feeArray[foundIndex] << endl;
                                cout<<"Paid       : " << (feePaidArray[foundIndex] ? "Yes" : "No") << endl;
                                cout<<"Attendance : " << attendanceArray[foundIndex] << " days" << endl;
                                cout<<"Trainer    : " << trainerArray[foundIndex] << endl;
                                cout<<"Workout    : " << workoutArray[foundIndex] << endl;
                            }
                        }

                        // OPTION 4: UPDATE MEMBER
                        else if (adminOption == "4")
                        {
                            system("cls");
                            cout<<"Enter Member ID to update: ";
                            int id;
                            cin >> id;
                            cin.ignore();

                            if (id < 0 || id >= index)
                            {
                                cout<<"Invalid Member ID." <<endl;
                            }
                            else 
                            {
                                 cout<<"--- Old Record ---" << endl;
                                cout<<"Name   : " << nameArray[id] << endl;
                                cout<<"Contact: " << contactArray[id] << endl;
                                cout<<"Plan   : " << planArray[id] << endl;
                                cout<<"Trainer: " << trainerArray[id] << endl;
                                cout<<"Workout: " << workoutArray[id] << endl;

                                cout<< endl << "What to update ?" << endl;
                                cout<< "1.Name" << endl;
                                cout<< "2.Contact" << endl;
                                cout<< "3.Plan" << endl;
                                cout<< "4.Trainer" << endl;
                                cout<< "5.Workout Plan" << endl;
                                cout<<"Choose: ";
                                string upChoice;
                                cin >> upChoice;
                                cin.ignore();

                                if (upChoice == "1")
                                {
                                    cout << "Enter new name: ";
                                    getline(cin, nameArray[id]);
                                    historyArray[historyIndex % 20] = " Admin updated name of ID " + nameArray[id];
                                    historyIndex++;
                                    cout << "Name updated ." << endl;
                                }
                                else if (upChoice == "2")
                                {
                                    cout << "Enter new contact:";
                                    getline(cin, contactArray[id]);
                                    historyArray[historyIndex % 20] = "Admin updated contact of " + nameArray[id];
                                    historyIndex++;
                                    cout << "Contact updated ." << endl;
                                }
                                else if (upChoice == "3")
                                {
                                    cout << "Available Plans :" << endl;
                                    for (int p = 0; p < planIndex; p++)
                                    {
                                        cout << p + 1 << "  " << planNameArray[p]
                                             << "  Rs." << planFeeArray[p] << endl;
                                    }
                                    cout << "Select plan (1 to " << planIndex << ") : ";
                                    int pc;
                                    cin >> pc;
                                    cin.ignore();
                                    if (pc >= 1 && pc <= planIndex)
                                    {
                                        planArray[id] = planNameArray[pc - 1];
                                        feeArray[id] = planFeeArray[pc - 1];
                                        feePaidArray[id] = false;
                                        historyArray[historyIndex % 20] = "Admin updated plan of " + nameArray[id];
                                        historyIndex++;
                                        cout << "Plan updated." << endl;
                                    }
                                    else
                                    {
                                        cout << "Invalid plan choice." << endl;
                                    }
                                }
                                else if (upChoice == "4")
                                {
                                    cout << "Enter trainer name: ";
                                    getline(cin, trainerArray[id]);
                                    historyArray[historyIndex % 20] = " Admin assigned trainer to " + nameArray[id];
                                    historyIndex++;
                                    cout << " Trainer assigned." << endl;
                                }
                                else if (upChoice == "5")
                                {
                                    cout << " Enter workout plan : ";
                                    getline(cin, workoutArray[id]);
                                    historyArray[historyIndex % 20] = " Admin updated workout for " + nameArray[id];
                                    historyIndex++;
                                    cout << " Workout plan updated." << endl;
                                }
                                else
                                {
                                    cout << " Invalid choice." << endl;
                                }
                            }
                        }

                        // OPTION 5: DELETE MEMBER
                        else if (adminOption == "5")
                        {
                            system("cls");
                            cout<<"Enter Member ID to delete : ";
                            int id;
                            cin >> id;
                            cin.ignore();

                            if (id < 0 || id >= index)
                            {
                                cout<<"Invalid Member ID." <<endl;
                            }
                            else
                            {
                                string deletedName = nameArray[id];

                                // Shift all arrays left
                                for (int i = id; i < index - 1; i++)
                                {
                                     nameArray[i]= nameArray[i+1];
                                    ageArray[i]= ageArray[i+1];
                                    genderArray[i]= genderArray[i+1];
                                    contactArray[i]= contactArray[i+1];
                                    planArray[i]= planArray[i+1];
                                    feeArray[i]= feeArray[i+1];
                                    feePaidArray[i]= feePaidArray[i+1];
                                    attendanceArray[i]= attendanceArray[i+1];
                                    trainerArray[i]= trainerArray[i+1];
                                    workoutArray[i]= workoutArray[i+1];
                                }
                                index--;

                                historyArray[historyIndex % 20] = "Amin deleted member: " + deletedName;
                                historyIndex++;
                                cout<<" Record of " << deletedName << " deleted ." <<endl;
                            }
                        }

                        // OPTION 6: MARK ATTENDANCE 
                        else if (adminOption == "9")
                        {
                            system("cls");
                            cout<<"Enter Member ID to mark attendance: ";
                            int id;
                            cin >> id;
                            cin.ignore();

                            if (id < 0 || id >= index)
                            {
                                cout<<"Invalid Member ID."<<endl;
                            }
                            else 
                            {
                                attendanceArray[id]++;
                                historyArray[historyIndex % 20] = "Admin marked attendance for " + nameArray[id];
                                historyIndex++;
                                cout << "Attendance recorded for " << nameArray[id]
                                     << ". Total : " << attendanceArray[id] << " days." <<endl;
                            }
                        }

                        // OPTION 7: VIEW ALL ATTENDANCE
                        else if (adminOption == "10")
                        {
                            system("cls");
                            cout<<" --- Attendance Report ---" <<endl;
                            cout<<"Name\t\tDays Attended"<<endl;
                            cout<<" -------------------------"<<endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout<< nameArray[i] << "\t\t" << attendanceArray[i] <<endl;
                                }
                            }
                        }

                        // OPTION 8: RECORD PAYMENT 
                        else if (adminOption == "11")
                        {
                            system("cls");
                            cout<<"Enter Member ID: ";
                            int id;
                            cin >> id;
                            cin.ignore();

                            if (id < 0 || id >= index)
                            {
                                cout<<"Invalid Member ID." <<endl;
                            }
                            else if (planArray[id] == "None")
                            {
                                cout<<"Member has no plan selected."<<endl;
                            }
                            else
                            {
                                feePaidArray[id] = true;
                                historyArray[historyIndex % 20] = "Payment received from " + nameArray[id];
                                historyIndex++;
                                cout << "Payment of Rs." << feeArray[id]
                                     << " recorded for " << nameArray[id] << "." <<endl;
                            }
                        }

                        // OPTION 9: VIEW PAYMENT RECORDS
                        else if (adminOption == "12")
                        {
                               system("cls");
                            cout<<"--- Payment Records ---" <<endl;
                            cout<<" Name\t\tPlan\t\tFee\t\tStatus " <<endl;
                            cout<<"-----------------------------------------------" << endl;
                            int paidCount=0;
                            int unpaidCount=0;
                            for (int i=0; i<index; i++)
                            {
                                if ( nameArray [i] != "")
                                {
                                    cout << nameArray [i] << "\t\t" << planArray[i] << "\t\tRs."
                                         << feeArray [i] << "\t\t"
                                         << (feePaidArray [i] ? "PAID" : "UNPAID") << endl;
                                    if (feePaidArray [i] == true)
                                        paidCount++;
                                    else
                                        unpaidCount++;
                                }
                            }
                            cout << "-----------------------------------------------" << endl;
                            cout << "Total Paid  : " << paidCount << endl;
                            cout << "Total Unpaid: " << unpaidCount << endl;
                        }

                        // OPTION 10: SORT MEMBERS
                        else if (adminOption == "13")
                        {
                            system("cls");
                            cout<<" Sort by :" << endl;
                            cout<<"1. Name" << endl;
                            cout<<"2. Fee" << endl;
                            cout<<"3. Attendance" << endl;
                            cout<<"Choose: ";
                            string sortBy;
                            cin >> sortBy;
                            cout<<" Order :" << endl;
                            cout<<"1. Ascending" << endl;
                            cout<<"2. Descending" << endl;
                            cout<<"Choose: ";
                            string order;
                            cin >> order;
                            cin.ignore();

                            // Bubble sort on parallel arrays
                            for (int i=0; i<index-1; i++)
                            {
                                for (int j=0; j<index-i-1; j++)
                                {
                                    bool doSwap = false;

                                    if (sortBy == "1") // sort by name
                                    {
                                        if (order == "1" && nameArray[j] > nameArray[j + 1])
                                            doSwap = true;
                                        if (order == "2" && nameArray[j] < nameArray[j + 1])
                                            doSwap = true;
                                    }
                                    else if (sortBy == "2") // sort by fee
                                    {
                                        if (order == "1" && feeArray[j] > feeArray[j + 1])
                                            doSwap = true;
                                        if (order == "2" && feeArray[j] < feeArray[j + 1])
                                            doSwap = true;
                                    }
                                    else if (sortBy == "3") // sort by attendance
                                    {
                                        if (order == "1" && attendanceArray[j] > attendanceArray[j + 1])
                                            doSwap = true;
                                        if (order == "2" && attendanceArray[j] < attendanceArray[j + 1])
                                            doSwap = true;
                                    }

                                    if (doSwap == true)
                                    {
                                        // Manual swap of all parallel arrays
                                        string tempName=nameArray[j];
                                        nameArray[j]=nameArray[j+1];
                                        nameArray[j+1]=tempName;

                                        int tempAge=ageArray[j];
                                        ageArray[j]=ageArray[j+1];
                                        ageArray[j+1]=tempAge;

                                        string tempGender=genderArray[j];
                                        genderArray[j]=genderArray[j+1];
                                        genderArray[j+1]=tempGender;

                                        string tempContact=contactArray[j];
                                        contactArray[j]=contactArray[j+1];
                                        contactArray[j+1]=tempContact;

                                        string tempPlan=planArray[j];
                                        planArray[j]=planArray[j+1];
                                        planArray[j+1]=tempPlan;

                                        float tempFee=feeArray[j];
                                        feeArray[j]=feeArray[j+1];
                                        feeArray[j+1]=tempFee;

                                        bool tempPaid=feePaidArray[j];
                                        feePaidArray[j]=feePaidArray[j+1];
                                        feePaidArray[j+1]=tempPaid;

                                        int tempAttend=attendanceArray[j];
                                        attendanceArray[j]=attendanceArray[j+1];
                                        attendanceArray[j+1]=tempAttend;

                                        string tempTrainer=trainerArray[j];
                                        trainerArray[j]=trainerArray[j+1];
                                        trainerArray[j+1]=tempTrainer;

                                        string tempWorkout=workoutArray[j];
                                        workoutArray[j]= workoutArray[j+1];
                                        workoutArray[j+1]=tempWorkout;
                                    }
                                }
                            }

                            historyArray[historyIndex % 20]=" Admin sorted member list";
                            historyIndex++;
                            cout << " Members sorted successfully." << endl;
                        }

                        // OPTION 11: VIEW ACTIVITY HISTORY
                        else if (adminOption == "11")
                        {
                            system("cls");
                            cout << " ----- Activity History -----"<<endl;
                            int show = historyIndex;
                            if (show > 20)
                                show = 20;
                            if (show == 0)
                            {
                                cout << "No history recorded yet." << endl;
                            }
                            else
                            {
                                for (int i = 0; i < show; i++)
                                {
                                    cout << i + 1 << ". " << historyArray[i] << endl;
                                }
                            }
                        }

                        // OPTION 12: LOGOUT
                        else if (adminOption == "12")
                        {
                            cout << "Loggong out from Admin..." << endl;
                            break;
                        }
                        else 
                        {
                            cout << "Wrong option selected." << endl;
                        }

                        cout << endl << "Press any key to continue..."<<endl;
                        getch();
                    } // end admin while loop

                    cout << "Press any key to continue..."<< endl;
                    getch();
                    break;
                }
                else
                {
                    cout << "Incorrect username or password." << endl;
                }

                cout << "Press any key to continue..." << endl;
                getch();
            } // end login for loop

            if (loginSuccess == false)
            {
                cout << "Too many failed attempts. Returning to main menu." << endl;
                cout << "Press any key to continue..." << endl;
                getch();
            }
        }
    }
}