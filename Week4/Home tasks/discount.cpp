#include <iostream>
using namespace std;
int main () {
  cout<<"Country:";
  string country;
  cin >> country;
  cout<<"Ticket Price:";
  float ticketPrice;
  cin >> ticketPrice;
  float discount;
  if (country == "Ireland"){
    discount = ticketPrice * 0.10;
  } 
  else{
    discount = ticketPrice * 0.05;
  }
  float finalPrice;
  finalPrice = ticketPrice - discount;
  cout<<"Discounted Price:"<<finalPrice; 
}