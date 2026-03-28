#include <iostream>
using namespace std;
int main () {
    int size;
    cout<<"Enter the size you want: ";
    cin >> size;
    int numbers[size];
    for(int i=0; i<size; i++){
        cout<<"Enter the numbers you want: ";
        cin >> numbers[i];
        int largest;
        for(int i=1; i<size; i++){
            if(numbers[i] > largest){
                largest=numbers[i];
            }
        }
        cout<<"Largest number is: "<<largest<<endl;
    }
}