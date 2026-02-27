#include <iostream> 
using namespace std;
main () {

cout<<" Enter imposters: ";
float imposters;
cin >> imposters;

cout<<" Enter players: ";
float players;
cin >> players;

cout<<" The player limit is 10 and the imposter count can only go up to 3. "<<endl;

float chance;
chance= 100 * ( imposters / players );

cout<<" Chance = "<<chance<< "%";
}
