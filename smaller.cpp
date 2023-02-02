// Lab : Write a program smaller.cpp that asks the user to input two integer numbers and prints out the smaller of the two.
//Last name: Lin
//First name: Ivy
//Github username: Ivylin8
//Prints out the smallest number the users input

#include <iostream> //compiler 

int main() 
{
int x, y; //set variables
std::cout << "Enter two numbers: "; //show output
std::cin >> x >> y;
//compare the values 
if (x > y)
std::cout << y << " is smaller.";

if (y > x)
std::cout << x << " is smaller.";
  
return 0;  
}
