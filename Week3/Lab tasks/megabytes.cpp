#include <iostream> 
using namespace std;
main () {

cout<<" Enter the size in megabytes (MB): ";
int megabytes;
cin >> megabytes;

float bits;
bits = megabytes * 1024 * 1024 * 8;

cout<<" "<<megabytes<<" MB is equivalent to "<<bits<< "bits ";
}





