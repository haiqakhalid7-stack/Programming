#include<iostream>
using namespace std;
main()
{
    int numOfThings[100];
    float amountDue;
    cout<<"Enter quartes: ";
    cin >> numOfThings[0];
    cout<<"Enter dimes: ";
    cin >> numOfThings[1];
    cout<<"Enter nickels: ";
    cin >> numOfThings[2];
    cout<<"Enter pennies: ";
    cin >> numOfThings[3];
    float amount = numOfThings[0] * 0.25 + numOfThings[1] * 0.10 + numOfThings[2] * 0.05 + numOfThings[3] * 0.01;
    cout<<"Total amount in dollars: " <<amount<<endl;
    cout<<"Enter the amount due: ";
    cin >> amountDue;
        if ( amount >= amountDue )
        {
            cout<<" Can you pay the amount? YES! " ;
        }
        else
        {
            cout<<" Can you pay the amount? NO! " ;
        }
}