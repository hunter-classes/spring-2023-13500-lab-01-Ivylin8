// Lab : Write a program smaller.cpp that asks the user to input two integer numbers and prints out the smaller of the two.
//Last name: Lin
//First name: Ivy
//Github username: Ivylin8
//Prints out the smallest number the users input

#include <iostream> //compiler 
using namespace std;

int main() 
{
int x, y; //set variables
cout << "Enter two numbers" << endl; //show output
cin >> x >> y;
//compare the values 
if (x > y)
cout << y << " is smaller." << endl;

if (y > x)
cout << x << " is smaller." << endl;
  
return 0;  
}