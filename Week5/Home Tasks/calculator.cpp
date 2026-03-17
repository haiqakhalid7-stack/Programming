#include<iostream>
using namespace std;
main (){
    while ( true ) {
         cout<<" -------- Simple Calculator -------- " <<endl;
         cout<<" 1.Addition " <<endl;
         cout<<" 2.Subtraction " <<endl;
         cout<<" 3.Multiplication " <<endl; 
         cout<<" 4.Division " <<endl;
         cout<<" 5.Clear Screen " <<endl;
         cout<<" 6.Exit " <<endl;
         int choice ;
         float num1, num2, result ;
         cout<<" Enter your Choice: " ;
         cin >> choice ;
         if ( choice == 1 ){
            cout<<" Enter First Number: " ;
         cin >> num1 ;
         cout<<" Enter Second Number: " ;
         cin >> num2 ;
            result = num1 + num2 ;
            cout<<" Result: " <<result<<endl;
         }
         else if ( choice == 2 ) {
            cout<<" Enter First Number: " ;
         cin >> num1 ;
         cout<<" Enter Second Number: " ;
         cin >> num2 ;
            result = num1 - num2 ;
            cout<<" Result: "<<result<<endl ;
         }
         else if ( choice == 3 ) {
            cout<<" Enter First Number: " ;
         cin >> num1 ;
         cout<<" Enter Second Number: " ;
         cin >> num2 ;
            result = num1 * num2 ;
            cout<<" Result: "<<result<<endl ;
         }
         else if ( choice == 4 ) {
            cout<<" Enter First Number: " ;
         cin >> num1 ;
         cout<<" Enter Second Number: " ;
         cin >> num2 ;
         if ( num2 == 0  ){
            cout<<" Syntax error! "<<endl ;
         }
         else {
            result = num1 / num2 ;
            cout<<" Result: "<<result<<endl ;
         }
         }
         else if ( choice == 5 ) {
            cout<<" Screen cleared."<<endl ;
         }
         else if ( choice == 6 ) {
            cout<<"Program end. Thank you for using Calculator."<<endl ;
            break ;
         }
         else{
            cout<<" Invalid Choice."<<endl ;
         }
    }

}