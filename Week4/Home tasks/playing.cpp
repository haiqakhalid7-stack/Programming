#include <iostream>
using namespace std;
int main () {
    int holidays;
    cout<<"Holidays: ";
    cin >> holidays;
    int total_days = 365;
    int norm_minutes = 30000;
    int mins_working = 63;
    int mins_holidays = 127;
    int working_days = total_days - holidays;
    int play_time = working_days * mins_working + (holidays * mins_holidays);
    int difference = abs(norm_minutes - play_time);
    int hours = difference / 60;
    int minutes = difference % 60;
    if (play_time < norm_minutes){
        cout<<"Tom sleeps well"<<endl;
        cout<<hours<< " hours and "<<minutes<<" minutes for play";
    }
    else{
        cout<<"Tom will run away"<<endl;
        cout<<hours<< " hours and "<<minutes<<" minutes for play";
    }
}