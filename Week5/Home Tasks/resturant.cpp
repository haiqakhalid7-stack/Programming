#include<iostream>
using namespace std;
main () {
    while ( true ) {
        cout<<" -------- Restaurant Management System --------"<<endl;
        cout<<"1. View the food menu"<<endl;
        cout<<"2. Place your order"<<endl;
        cout<<"3. View order status"<<endl;
        cout<<"4. Generate the bill"<<endl;
        cout<<"5. Contact staff"<<endl;
        cout<<"6. Exit"<<endl;
        int choice;
        cout<<" Enter your choice:"<<endl;
        cin >> choice;    
        if ( choice == 1 ){
            cout<<" You selected: View food menu"<<endl;
        }
        else if ( choice == 2 ){
            cout<<" You selected: place order"<<endl;
        }
        else if ( choice == 3 ){
            cout<<" You selected: view order status"<<endl;
        }
        else if ( choice == 4 ){
            cout<<" You selected: generate bill"<<endl;
        }
        else if ( choice == 5 ){
            cout<<" You selected: contact staff"<<endl;
        }
        else if ( choice == 6 ){
            cout<<" Exiting Restaurant Management System Thank you!"<<endl;
            break;
        }
        else {
              cout<<" Invalid choice"<<endl;
        }

    }
}