#include <iostream> 
using namespace std;
main () {
cout<<" Enter the student's name: ";
string name;
cin >> name;

cout<<" Enter matriculation marks (out of 1100): ";
float matriculation;
cin >> matriculation;

cout<<" Enter intermediate marks (out of 550): ";
float intermediate;
cin >> intermediate;

cout<<" Enter ECAT marks (out of 400): ";
float ECAT;
cin >> ECAT;

float Aggregate;
Aggregate = (((matriculation/1100) * 0.1) + ((intermediate/550) * 0.4) +(( ECAT/400) * 0.5)) * 100 ;

cout<<" Aggregate score for "<<name<<" is "<<Aggregate;
}

