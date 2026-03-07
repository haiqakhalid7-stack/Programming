#include <iostream>
using namespace std;
main () {
    cout<<" Please Enter the number: ";
    int number, even;
    cin >> number;
    even = number%2;
    if (even == 0){
        cout<<" The number is even";
    }
    else{
        cout<<" The number is odd";
    }
}