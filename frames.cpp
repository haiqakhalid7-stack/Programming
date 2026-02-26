#include <iostream> 
using namespace std;
main () {

cout<<" Enter minutes: ";
int minutes;
cin >> minutes;

cout<<" Enter fps: ";
int fps;
cin >> fps;

int frames;
frames= minutes * 60 * fps;

cout<<" Total frames = "<<frames;
}