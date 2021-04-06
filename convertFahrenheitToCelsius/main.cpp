#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    float F;//input - Fahrenheit temperature
    float C;//output - Celsius temperature
    cout<<"Enter the Fahrenheit temperature: ";cin>>F;
    C = (5.0/9)*(F-32);
    cout<<"The temperature in Celsius: " <<setprecision(2)<<fixed<<C<<endl;
    return 0;
}
