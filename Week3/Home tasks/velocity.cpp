#include <iostream> 
using namespace std;
main () {

cout<<" Enter initial velocity (m/s): ";
float InitialVelocity;
cin >> InitialVelocity;

cout<<" Enter acceleration (m/s^2): ";
float acceleration;
cin >> acceleration;

cout<<" Enter time (s): ";
float time;
cin >> time;

float FinalVelocity;
FinalVelocity = acceleration * time + InitialVelocity;

cout<<" Final velocity (m/s): "<<FinalVelocity;
}