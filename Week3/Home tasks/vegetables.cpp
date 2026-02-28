#include <iostream> 
using namespace std;
main () {

cout<<" Enter vegetable price per kilogram (in coins): ";
float vegetable;
cin >> vegetable;

cout<<" Enter fruit price per kilograms (in coins): ";
float fruit;
cin >> fruit;

cout<<" Enter total kilograms of vegetables: ";
int vegetables;
cin >> vegetables;

cout<<" Enter total kilograms of fruits: ";
int fruits;
cin >> fruits;

float rupees;
rupees=(( vegetable * vegetables ) + ( fruit * fruits ))/1.94;

cout<<" Total earnings in Rupees (Rps): "<<rupees;
}
 



