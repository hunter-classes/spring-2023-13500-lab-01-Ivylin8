/*
Author: Ivy Lin
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Task A. Input validation

Ask users to input an intger thats between 0-100. Will ask user to re-enter if out if range. Square the input after. 
*/

#include <iostream>
using namespace std;

int main() 
{
  int num;
  cout << "please enter an integer from 0 to 100: ";
  cin >> num;
  
  while(num <= 0 || num >=100){
    cout << "Please re-enter: ";
    cin >> num;
    }

  int result = num * num;
  cout << "Square of " << num << " is " << result;
    
  return 0;
  }
