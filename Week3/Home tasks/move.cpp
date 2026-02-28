#include <iostream> 
using namespace std;
main () {

cout<<" Enter the person's age: ";
float age;
cin >> age;

cout<<" Enter the number of times they've moved: ";
float moves;
cin >> moves;

float years;
years= age/(moves+1);

cout<<" Average number of years lived in the same house: "<<years;
}