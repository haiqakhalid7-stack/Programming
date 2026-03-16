#include <iostream>
using namespace std;
int main () {
    char ch = 'y';
    while(ch != 'N' && ch != 'n'){
        cout<<"I am Happy !"<<endl;
        cout<<"Enter your choice: ";
        cin >> ch;
    }
}