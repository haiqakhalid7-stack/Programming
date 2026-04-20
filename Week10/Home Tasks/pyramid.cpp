#include <iostream>
#include <string>
using namespace std;

string pyramidVolume(double length, double width, double height, string unit) {
    double volume = (length * width * height) / 3.0;

    if (unit == "millimeters") {
        volume *= 1000000000;
    }
    else if (unit == "centimeters") {
        volume *= 1000000;
    }
    else if (unit == "meters") {
        volume *= 1;
    }
    else if (unit == "kilometers") {
        volume /= 1000000000;
    }

    return to_string(volume) + " cubic " + unit;
}

int main() {
    double l, w, h;
    string unit;

    cout << "Enter length: ";
    cin >> l;

    cout << "Enter width: ";
    cin >> w;

    cout << "Enter height: ";
    cin >> h;

    cout << "Enter unit: ";
    cin >> unit;

    cout << pyramidVolume(l, w, h, unit) << endl;

    return 0;
}