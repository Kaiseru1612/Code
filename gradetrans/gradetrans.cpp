#include <iostream>

using namespace std;

int main() 
{
	double g;
	cout << "Input grade in number: "; cin >> g;
	if (g<=100 && g>=0)
	{
		if (g>=90)
		{
			cout << "The equivalent grade: A";
		}
		else
		{
			if (g>=80)
			{
				cout << "The equivalent grade: B";
			}
			else
			{
				if (g>=70)
				{
					cout << "The equivalent grade: C";
				}
				else
				{
					if (g>=60)
					{
						cout << "The equivalent grade: D";
					}
					else
					{
						cout << "The equivalent grade: F";
					}
				}
			}
		}
	}
	else
	{
		cout << "Invalid grade";
	}
	return 0;
}
