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

    // ======= MAIN OUTER LOOP =======
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

        // ------- ADMIN LOGIN -------
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

                     // ------- ADMIN MENU LOOP -------
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
                        cout<<"6. Add New Plan"<<endl;
                        cout<<"7. Update Plan"<<endl;
                        cout<<"8. Delete Plan"<<endl;
                        cout<<"9. Mark Attendance"<<endl;
                        cout<<"10. View All Attendance"<<endl;
                        cout<<"11. Record Payment"<<endl;
                        cout<<"12. View Payment Records"<<endl;
                        cout<<"13. Sort Members"<<endl;
                        cout<<"14. View Activity History"<<endl;
                        cout<<"15. Logout"<<endl;
                        cout<<"Choose Option: ";
                        string adminOption;
                        cin >> adminOption;
                        cin.ignore();

                        //------- OPTION 1: ADD MEMBER -------
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

                        // ------- OPTION 2: VIEW ALL MEMBERS -------
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
                    }
                }
            }
        }
    }
}