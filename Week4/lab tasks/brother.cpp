#include <iostream>
using namespace std;
int main () {
    string brother1, brother2, brother3 ;
    int brother1age, brother2age, brother3age;

    cout<<"Enter the first brother name:";
    cin>>brother1;
    cout<<"Enter the age of first brother:";
    cin>>brother1age;

    cout<<"Enter the second brother name:";
    cin>>brother2;
    cout<<"Enter the age of first brother:";
    cin>>brother2age;

    cout<<"Enter the third brother name:";
    cin>>brother3;
    cout<<"Enter the age of first brother:";
    cin>>brother3age;

    if ( brother1age<brother2age && brother1age<brother3age ){
        cout<<"Youngest brother is:"<<brother1;
    }
    else if ( brother2age<brother1age && brother2age<brother3age ){
        cout<<"Youngest brother is:"<<brother2;
    }
     else if ( brother3age<brother1age && brother3age<brother2age ){
        cout<<"Youngest brother is:"<<brother3;
    }


}