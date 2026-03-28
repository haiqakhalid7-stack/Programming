#include <iostream>
using namespace std;
int main () {
    int n, sum=0;
    cout<<"Enter the number of elements: ";
    cin >> n;
    cout<<"Enter the numbers: ";
    for(int i=1; i<=n; i++){
        int num[n];
        cin >> num[i];
        sum=sum+num[i];
    }
    cout<<"Sum of the numbers is: "<<sum;
}