#include <iostream>
using namespace std;
int main () {
    string name[5];
    cout<<"Enter the names of students: "<<endl;
    for(int i=0; i<5; i++){
        getline(cin,name[i]);
    }
    cout<<"Name of the students are: "<<endl;
    for(int i=0; i<5; i++){
        cout<<name[i]<<endl;
    }
}