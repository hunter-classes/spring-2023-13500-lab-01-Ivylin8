//Task B. Find the smaller of three integers.

#include <iostream>
using namespace std;

int main() 
{
int x, y, z;
cout << "Enter a number: ";
cin >> x;
cout << "Enter a number: ";
cin >> y;
cout << "Enter a number: ";
cin >> x;

if (x <= y && x <= z)
    cout << x << " is the smallest";
if (y <= x && y <= z)
    cout << y << " is the smallest"; 
if (z <= x && z <= y)
    cout << z << " is the smallest";

return 0;
}