#include <iostream> 
using namespace std;
main () {

cout<<" Enter the number of sides of the polygon: ";
int n;
n>=3;
cin >> n;

int angles;
angles= (n-2)*180;

cout<<" The total sum of internal angles of a :"<<n<<"-sided polygon is : "<<angles<<" degrees";
}