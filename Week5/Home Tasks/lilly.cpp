#include <iostream>
using namespace std;
int main () {
    int age, machinePrice, toyPrice;
    cout<<"Enter Lilly's age:";
    cin >> age;
    cout<<"Enter price of machine:";
    cin >> machinePrice;
    cout<<"Enter unit price of each toy:";
    cin >> toyPrice;
    int giftMoney=10, saving=0, toy=0;
    for(int i=1; i<=age; i++){
        if(i%2==0){
        saving+=(giftMoney - 1);
        giftMoney+=10;
        }
        else{
            toy = toy + 1;
        }
    }
    int toyEarn = toyPrice * toy;
    int tot_money = toyEarn + saving;
    if(tot_money> machinePrice){
        cout<<" YES!!! "<<endl;
        int remaining = tot_money - machinePrice;
        cout<<" "<<remaining;
    }
    else{
        cout<<" NO!!! "<<endl;
        int insufficient = machinePrice - tot_money;
        cout<<" "<<insufficient;
    }
}