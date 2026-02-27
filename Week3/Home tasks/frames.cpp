#include <iostream> 
using namespace std;
main () {

cout<<" Number of minutes: ";
int minutes;
cin >> minutes;

cout<<" Frames per second: ";
int fps;
cin >> fps;

int frames;
frames= minutes * fps * 60;

cout<<" Total number of frames : "<<frames;
}

