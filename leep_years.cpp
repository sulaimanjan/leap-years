/*
All years which are  perfectly divisible by 4 are leap years except fo century years
(years ending with 00) which is leap only it is perfectly divisible by 400 .
*/

#include <iostream>
using namespace std;
int main() {
int year;
cout << "Enter a year: ";
cin >> year;
if (year % 4 == 0)
{
if (year % 100 == 0)
{
if (year % 400 == 0)
}
cout << year << " is a leap year.";
else
cout << year << " is not a leap year.";
else
else
cout << year << " is a leap year.";
}
cout << year << " is not a leap year.";
return 0;
}
