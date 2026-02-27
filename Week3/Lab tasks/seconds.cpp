#include <iostream> 
using namespace std;
main () {

cout<<" Enter the number of hours: ";
int hours;
cin >> hours;

int seconds;
seconds= hours * 3600;

cout<<" "<<hours<<" is equivalent to " <<seconds<< " seconds";
}