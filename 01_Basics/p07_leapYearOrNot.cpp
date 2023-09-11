#include<iostream>

using namespace std;

void leapYear(int year)
{
    if((year %400 == 0) ||  (year%4==0 && year%100!=0))
    cout << year << " is leap Year\n";

    else 
    cout << year << " is not a leap year\n";
}
int main()
{
    int year;
    cin >> year;

    leapYear(year);

}