#include <iostream>
using namespace std;
int main () {
    int multiple;
    int num;
    cout<<" Mutliplication Table of 24,50 and 29:"<<endl;
    
    for (int num=1; num<=10; num=num+1)
    { 
        int table = 24;
        multiple = table * num;
        cout<<table<< "x" <<num<< "="<<multiple <<endl;
    }

    for (int num=1; num<=10; num=num+1)
    {
        int table = 50;
        multiple = table * num;
        cout<<table<< "x" <<num<< "="<<multiple <<endl;
    }

    for (int num=1; num<=10; num=num+1)
    {
        int table = 29;
        multiple = table * num;
        cout<<table<< "x" <<num<< "="<<multiple <<endl;
    }
}