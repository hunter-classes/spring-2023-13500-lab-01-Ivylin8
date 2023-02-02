//Task D. Number of days in a given month
//Last name: Lin
//First name: Ivy
//Github username: Ivylin8
//Programs askes user to input month and year and outputs the number of days in the month

#include <iostream>

int main() 
{
  int month = 0;
  int year = 0;
  int days;
  std::cout << "Input a month in numbers: ";
  std::cin >> month;
  std::cout << "Input a year: ";
  std::cin >> year;

  if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    days = 31;

  else if (month == 4 || month == 6 || month == 11 || month == 9)
    days = 30;
  else if ( month == 2 && ((year %4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0)))
  {
    return 29;
  }
  else
  {
    return 28;
  }

  std::cout << "There is " << days << " days in the month.";
  
return 0;
  }
