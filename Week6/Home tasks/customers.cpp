#include <iostream>
using namespace std;
int main () {
    char letter;
    int n, count=0;
    cout<<"Enter the number of customers: ";
    cin >> n;
    string name[n];
    cout<<"Enter the name of the customers: "<<endl;
    for(int i=0; i<n; i++){
        cin.ignore();
        getline(cin,name[i]);
    }
    cout<<"Enter a letter to check: ";
    cin >> letter;
    for(int i=0; i<n; i++){
        if(name[i][0]==letter){
            count++;
        }
    }
    cout<<"Total customers whose name starts with "<<letter<<" are "<<count;
}