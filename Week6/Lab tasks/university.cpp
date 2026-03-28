#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
    string password [100] ;
    int age ;
    string username [100] ;
    char name [100] ;
    bool login = false ;
    cout<<"_______Management Of University________" <<endl;
    for ( int i=1; i<=3; i++){
         cout<<"Enter username: ";
         getline ( cin, username [i] ) ;
         cout<<"Enter password: ";
         cin >> password [i] ;
        if ( password [i] == "1234" && username [i] == "admin" ){
           cout<<" Login successful " << endl;
           login = true;
           break;
        }
        else{
              cout<<"Try again "<<endl;
         }
        if (i == 3 && !(username [i] == "admin" && password [i] == "1234" )){
                cout<<"Too many attempts. Program ends ";
               return 0;
         }
        }
        if ( login==true ){
        for ( int i=1; i<=100; i++){
     string userask;
     char studentcourse [100];
     cout<<"1. Add student. " << endl;
     cout<<"2. View student. " << endl;
     cout<<"3. Add course. " << endl;
     cout<<"4. Exit. " << endl;
     cout<<"Enter choice: ";
     cin >> userask;
     if (userask == "1")
     {
        cout<<"Enter student name: ";
        cin.ignore ();
        cin.getline (name,100);
        cout<<"Enter student age: ";
        cin >> age;
        cout<<"Student added successfully. " <<endl;
    
     }
     else if (userask == "2")
    {
        cout<<"Student name: " << name <<endl;
        cout<<"Student age: "<< age <<endl;
    }
     else if (userask == "3")
     {
        cout<<"Enter student course: ";
        cin.ignore();
        cin.getline (studentcourse,100);
        cout<<"Course added successfully. "<<endl;
     }
     else if(userask == "4"){
     cout<<"Program Exit. "<<endl;
     break; }
     else
     cout<<"Invalid Choice. ";
    }}
}