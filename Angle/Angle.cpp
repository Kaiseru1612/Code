#include <iostream>

using namespace std;

int main()
{
	double A,Amax;
	Amax = 360;
	cout << "Enter an angle: "; cin >> A;
	if (A>=0 && A<360)
	{
		if (A >= 270) 
		{
			cout << "The given angle lies in the Fourth quadrant";
		}
		else
		{
			if (A >= 180)
			{
				cout << "The given angle lies in the Third quadrant";
			}
			else
			{
				if (A >= 90)
				{
					cout << "The given angle lies in the Second quadrant";
				}
				else
				{
					cout << "The given angle lies in the First quadrant";
				}
			}
		}
	}
	else
	{
		cout << "Invalid angle";
	}

	return(0);
}