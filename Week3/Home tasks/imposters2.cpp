#include <iostream> 
using namespace std;
main () {

cout<<" Enter Imposter Count: ";
float imposters;
cin >> imposters;

cout<<" Enter Player Count: ";
float players;
cin >> players;

float chance;
chance= 100 * ( imposters / players );

cout<<" Chance of being an imposter: "<<chance<<"%";
}