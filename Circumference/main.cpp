#include <iostream>
#include <math.h>
#include<iomanip>

using namespace std;

int main()
{
    float r;//input - radius
    float C;//output - circumference
    cout<<"Enter radius: "; cin>>r;//input radius from keyboard
    C = 2*3.14*r;
    //Display the circumference
    cout<<"Circumference: "<<setprecision(2)<<fixed<<C <<endl;
    return 0;
}
