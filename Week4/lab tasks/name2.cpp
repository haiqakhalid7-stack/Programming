#include <iostream>
using namespace std;
main () {
    cout<<" Please enter your name: ";
    string name;
    cin >> name;

    if (name == "ali"){
        cout<<" Welcome "<< name;
    }
    else{
        cout<<"Try again!";
    }
}