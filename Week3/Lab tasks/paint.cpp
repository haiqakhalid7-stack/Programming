#include <iostream> 
using namespace std;
main () {

cout<<" Enter paint area: ";
float paint;
cin >> paint;

cout<<" Enter width: ";
float width;
cin >> width;

cout<<" Enter height: ";
float height;
cin >> height;

float walls;
walls= paint/ (width * height);                                  

cout<<" Walls painted = "<<walls<<endl;

cout<<" Notes: "<<endl;
cout<<" ~ Don't count a wall if i don't manage to finish painting all of it before i run out of paint. "<<endl;
cout<<" ~ All walls will have the same dimensions. "<<endl;
cout<<" ~ All numbers will be positive integers. "<<endl;
}