#include <iostream> 
using namespace std;
main () {

cout<<" Enter size of the fertilizer bag in pounds: ";
float pounds;
cin >> pounds;

cout<<" Enter the cost of the bag: $";
float bag;
cin >> bag;

cout<<" Enter the area in square feet that can be covered by the bag: ";
float area;
cin >> area;

float cost;
cost= bag / pounds;

cout<<" Cost of fertilizer per pound: $"<<cost<<endl;

float cost1;
cost1= bag / area;

cout<<" Cost of fertilizing per square foot: $"<<cost1;
}



 