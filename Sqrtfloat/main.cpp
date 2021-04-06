#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    float f;//input - floating-point number
    float s;//output - sqrt of the floating-point number
    cout<<"Enter a floating-point number: "; cin>>f;
    s = sqrt(f);
    cout<<"square root of the given number: "
        << setprecision(4) << fixed << s;
    return 0;
}
