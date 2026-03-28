#include <iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter the number of elements: ";
    cin >> n;
    int num[n],max,smallest;
    cout<<"Enter the numbers: "<<endl;
    for(int i=0; i<n; i++){
        cin>>num[i];
    }
    max=num[0];
    smallest=num[0];
    for(int i=0; i<n; i++){
        if(num[i]>max){
            max=num[i];
        }
        if(num[i]<smallest){
            smallest=num[i];
        }
    }
    cout<<"Largest number is: "<<max<<endl;
    cout<<"Smallest number is: "<<smallest;
}