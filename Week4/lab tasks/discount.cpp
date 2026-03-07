#include <iostream>
using namespace std;
main () {
  cout<<" Enter your bill:" ;
  float amount, discount;
  cin >> amount;
  if (amount <= 5000){
    discount = amount * 0.05;
  }
  else{
    discount = amount * 0.10;
  }
  float finalAmount;
  finalAmount = amount - discount;
  cout<<" Your discounted bill is:"<< finalAmount; 
}