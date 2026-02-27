#include <iostream> 
using namespace std;
main () {

cout<<" Enter the name of the person: ";
string name;
cin >> name;

cout<<" Enter the target weight loss in kilograms: ";
float weight;
cin >> weight;

float days;
days= weight * 15;

cout<<""<<name<<" will need "<<days<<" days to lose "<<weight<<" kg of weight by following the doctor's suggestions ";
}

