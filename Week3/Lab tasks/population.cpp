#include <iostream> 
using namespace std;
main () {

cout<<" Enter the current world population: ";
int population;
cin >> population;

cout<<" Enter the monthly birth rate (number of births per month): ";
int births;
cin >> births;

int FuturePopulation;
FuturePopulation = population + (births * 360);

cout<<" Population in three decades will be:"<<FuturePopulation;
} 




  