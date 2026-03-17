#include <iostream>
using namespace std;
int main () {
    int num;
    cout<<" Enter a Number:"<<endl;
    cin >> num;
    
    for (int i=1; i<=10; i++)
    { 
        cout<<num<< "x" <<num<< "="<<num*i <<endl;
    }
}