#include <iostream>
using namespace std;
int main () {
    int size;
    cout<<"Enter the size of the array: ";
    cin >> size;
    int num[size];
    cout<<"Enter numbers: "<<endl;
    bool special=true;
    for(int i=0; i<size; i++){
        cin >> num[i];
    }
    for(int i=0; i<size; i++){
        if(i%2==0&&num[i]%2!=0){
            special = false;
            break;
        }
        if(i%2!=0&&num[i]%2==0){
            special = false;
            break;
        }
    }
    if(special){
        cout<<"The array is special. ";
    }
    else{
        cout<<"Array is not special. ";
    }
}