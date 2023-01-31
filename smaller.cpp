// Lab : Write a program smaller.cpp that asks the user to input two integer numbers and prints out the smaller of the two.

#include <iostream>
using namespace std;

int main() 
{
int x, y;
cout << "Enter two numbers" << endl;
cin >> x >> y;

if (x > y)
cout << y << " is smaller." << endl;

if (y > x)
cout << x << " is smaller." << endl;
  
return 0;  
}