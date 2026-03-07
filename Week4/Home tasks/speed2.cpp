#include <iostream>
using namespace std;
int main () {
    int speed;
    cout<<"Enter the speed:";
    cin >> speed;
    if (speed<=10){
        cout<<"The speed is slow";
    }
    if (speed>10 && speed<=50){
        cout<<"The speed is average";
    }
    if (speed>50 && speed<=150){
        cout<<"The speed is fast";
    }
    if (speed>150 && speed<=1000){
        cout<<"The speed is ultra fast";
    }
    if (speed>1000){
        cout<<"The speed is extremely fast";
    }
}