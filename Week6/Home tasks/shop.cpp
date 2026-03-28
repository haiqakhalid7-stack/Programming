#include <iostream>
#include <string>
using namespace std;
int main(){
   string productname [4] = {"apple" , "banana" , "orange" , "mango"};   
   int prices [4] = {10, 5, 8, 12};
   int quantity [4] = {50,100,30,20};
   cout<<"Enter number of products you want to buy: ";
   int n;
   cin >> n;
   for(int i=0; i<n; i++){ 
      string name;
      cout<<"Enter name of the product: ";
      cin >> name;
      float price;
      cout<<"Enter the price of the product: ";
      cin >> price;
      cout<<"Enter the quantity of the products: ";
      int q;
      cin >> q;
      cout<<"Product inventory report "<<endl;
      cout<<"______________________________"<<endl;
      float total = price * q;
      cout<< name <<" : "<< price <<", "<< q <<" in stock," << "Total value: "<< total <<endl;
   }
}