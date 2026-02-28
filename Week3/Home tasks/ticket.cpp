#include <iostream> 
using namespace std;
main () {

cout<<" Enter the movie name: ";
string movie;
cin >> movie;

cout<<" Enter the adult ticket price: $";
float adult;
cin >> adult;

cout<<" Enter the child ticket price: $";
float child;
cin >> child;

cout<<" Enter the number of adult tickets sold: ";
float adult1;
cin >> adult1;

cout<<" Enter the number of child tickets sold: ";
float child1;
cin >> child1;

cout<<" Enter the percentage of the amount to be donated to charity: ";
float percentage;
cin >> percentage;

float amount;
amount= (adult * adult1) + (child * child1);

cout<<" Movie: "<<movie<<endl;
cout<<" Total amount generated from ticket sales: $"<<amount<<endl;

float donation;
donation= amount *(percentage/100);

cout<<" Donation to charity: $"<<donation<<endl;

float remaining;
remaining= amount-donation;

cout<<" Remaining amount after donation: $"<<remaining<<endl;
} 
 

 
