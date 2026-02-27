#include <iostream> 
using namespace std;
main () {

cout<<" Enter Voltage (in volts): ";
float voltage;
cin >> voltage;

cout<<" Enter Current (in Amperes): ";
float current;
cin >> current;

float power;
power= current * voltage ;

cout<<" The power is " <<power<< " watts" ;
} 