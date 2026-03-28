#include <iostream>
using namespace std;
int main () {
    int n, k, i;
    cout<<"Enter number of digits you want to print: ";
    cin >> n;
    int num[n];
    bool found=false;
    for(int i=0; i<n; i++){
        cout<<"Enter numbers: ";
        cin >> num[i];
    }
    for(int i=0; i<n; i++){
        for(int k=i+1; k<n; k++){
            if(num[i]==num[k]){
                found=true;
                break;
            }
        }
    }
    if(found){
        cout<<"Already exist";
    }
}