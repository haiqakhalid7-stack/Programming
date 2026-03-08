#include <iostream>
using namespace std;
int main () {
    string shape;
    cout<<"Enter Shape:";
    cin >> shape;
    if (shape == "square"){
        float side, area;
        cout<<"Enter side length:";
        cin >> side;
        area = side * side;
        cout<<"Area: "<<area;
    }
    if (shape == "rectangle"){
        float side1, side2, area;
        cout<<"Enter length:";
        cin >> side1;
        cout<<"Enter width:";
        cin >> side2;
        area = side1 * side2;
        cout<<"Area: "<<area;
    }
    if (shape == "circle"){
        float pi=3.14;
        float r, area;
        cout<<"Enter radius:";
        cin >> r;
        area = (r*r) * pi;
        cout<<"Area: "<<area;
    }
    if (shape == "triangle"){
        float b, h, area;
        cout<<"Enter base:";
        cin >> b;
        cout<<"Enter height:";
        cin >> h;
        area = (b*h)*(0.5);
        cout<<"Area: "<<area;
    }
}