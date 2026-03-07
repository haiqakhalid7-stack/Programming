#include <iostream>
using namespace std;
int main () {
    int city1, city2;
    cout<<"Temperature City 1:";
    cin >> city1;
    cout<<"Temperature City 2:";
    cin >> city2;
    int difference = city1 - city2;
    if (difference>10){
        cout<<"Difference is too Big";
    }
    else {
        cout<<"Program Ends";
    }
}