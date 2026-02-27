#include <iostream> 
using namespace std;
main () {
cout<<" Enter the charge (Q) in Coulombs: ";
int charge;
cin >> charge;

cout<<" Enter the time (t) in seconds: ";
int time;
cin >> time;

int current;
current= charge / time;

cout<<" The current (I) is = " <<current;
}