//Task B. Find the smaller of three integers.
//Last name: Lin
//First name: Ivy
//Github username: Ivylin8

#include <iostream>

int main() 
{
int x, y, z; //setup variables
std::cout << "Enter a number: "; //input from user
std::cin >> x;
std::cout << "Enter a number: ";
std::cin >> y;
std::cout << "Enter a number: ";
std::cin >> x;
//create if else statements 
if (x <= y && x <= z)
    std::cout << x << " is the smallest";
  //update the input 
if (y <= x && y <= z)
    std::cout << y << " is the smallest"; 
if (z <= x && z <= y)
    std::cout << z << " is the smallest";

return 0;
}