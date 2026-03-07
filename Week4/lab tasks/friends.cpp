#include <iostream>
using namespace std;
main () {
    cout<<" Are your friends going? (Press Y for yes N for no: )";
    char going;
    cin>> going;

    if (going == 'y'){
        cout<<"You are also going!";
    }
    if (going == 'n'){
        cout<<"You are not going!";
    }
}