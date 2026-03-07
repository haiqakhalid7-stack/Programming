#include <iostream>
using namespace std;
int main () {
    int red_roses, white_roses, tulips;
    cout<<"Enter the number of red roses:";
    cin >> red_roses;
    cout<<"Enter the number of white roses:";
    cin >> white_roses;
    cout<<"Enter the number of tulips:";
    cin >> tulips;
    float price;
    price = red_roses * 2 + white_roses * 4.10 + tulips * 2.5;
    cout<<"Original Price:"<<price<<endl;
    if ( price > 200){
        float discount= price * 20/100;
        float price_after_discount= price - discount;
        cout<<"Price after discount:"<<price_after_discount<<endl;
    }
    
}