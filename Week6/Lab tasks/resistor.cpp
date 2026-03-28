#include <iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter number of resistance values you want to print: ";
    cin >> n;
    float resistance[n],sum=0;
    for(int i=0; i<n; i++){
        cout<<"Enter the values of resistance in ohm: ";
        cin >> resistance[i];
        sum=sum + resistance[i];
    }
    cout<<"Total resistance: "<<sum;
}