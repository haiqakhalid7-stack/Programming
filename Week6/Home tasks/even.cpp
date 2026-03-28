#include <iostream>
using namespace std;
int main () {
    int n, count=0;
    cout<<"Enter the number of elements:";
    cin >> n;
    int num[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the number "<<i+1<<":";
        cin >> num[i];
        if(num[i]%2==0){
            count++;
        }
    }
    cout<<"Total even numbers are: "<<count;
}