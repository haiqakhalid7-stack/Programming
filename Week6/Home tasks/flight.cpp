#include<iostream>
using namespace std;
main() {
    int n;
    cout<<"Enter number of Flights: ";
    cin >> n;
    int seats [1000], number [100];
    string destination ;
    for (int i=0; i<n; i++) {
       cout<<"Enter number for Flight: "<<i+1<<" ";
       cin >> number [i];
       cout<<"Enter destination of Flight: "<<number[i]<<" ";
       cin.ignore();
       getline (cin,destination);
       cout<<"Enter seats available for Flight: "<<i+1<<" ";
       cin >> seats [i];
       cout<<endl;
    }
    cout<<" Flight information "<<endl;
    cout<<"____________________________"<<endl;
    for (int i=0; i<n; i++){
        cout<<" Flight "<< number[i] <<" to "<< destination <<" has "<< seats[i] <<" available "<<endl;
        cout<<endl;
    }
    cout<<"Flight with less than the 5 seats. "<<endl;
    cout<<"____________________________"<<endl;
    for (int i=0; i<n; i++){
      if(seats [i] < 5){
          cout<<"Flight "<< number[i] <<" to "<< destination <<" has only "<< seats[i] <<" seats available"<<endl;
      }
    }
}