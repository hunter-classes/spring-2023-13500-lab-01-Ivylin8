//Task B. Find the smaller of three integers.

#include <iostream>

int main() 
{
int x, y, z;
std::cout << "Enter a number: ";
std::cin >> x;
std::cout << "Enter a number: ";
std::cin >> y;
std::cout << "Enter a number: ";
std::cin >> x;

if (x <= y && x <= z)
    std::cout << x << " is the smallest";
if (y <= x && y <= z)
    std::cout << y << " is the smallest"; 
if (z <= x && z <= y)
    std::cout << z << " is the smallest";

return 0;
}