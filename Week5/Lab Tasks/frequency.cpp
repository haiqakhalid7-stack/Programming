#include <iostream>
using namespace std;
int main () {
    int number, digit;
    int count=0;
    cout<<" Enter number: ";
    cin >> number;

    cout<<" Enter digit to check: ";
    cin >> digit;

    while(number > 0){
        int remainder = number % 10;
        if(remainder == digit)
        {
            count++;
        }
        number = number / 10;
    }
    cout<<" Frequency of "<<digit<<" is: "<<count<<endl;
}