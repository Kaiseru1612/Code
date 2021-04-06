#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int days,day, week, month, year;
    cout << "Enter the number of day: ";
    cin >> day;
    days = day;
    year = day / 365;
    day = day % 365;
    week = day / 7;
    day = day % 7;
    cout <<days <<" day(s) = "<< year << " year(s)" <<" + " 
        << week << " week(s)" << " + " << day << " day(s)";
    return 0;
}

