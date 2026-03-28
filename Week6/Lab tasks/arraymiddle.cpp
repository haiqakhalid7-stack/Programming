#include <iostream>
using namespace std;
int main () {
    int m;
    int ar1[2],ar2[m],ary3[100];
    cout<<"Enter two numbers for first array: "<<endl;
    for(int i=0; i<2; i++){
        cin >> ar1[i];
    }
    cout<<"Enter the element for the second array: "<<endl;
    cin >> m;
    cout<<"Enter numbers of second array: "<<endl;
    for(int i=0; i<m; i++){
        cin >> ar2[i];
    }
    cout<<"Resulting array: [ "<<ar1[0];
    for(int i=0; i<m; i++){
        cout<<" "<<ar2[i]<<" ";
    }
    cout<<ar1[1]<<" ]";
}