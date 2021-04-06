#include <iostream>

using namespace std;

int main()
{
	double C, F;
	int choice;
	cout << "Welcome to my temperature converting program\n";
	cout << "Please chose one of the options below\n";
	cout << "1- Convert Fahrenheit to Celsius\n";
	cout << "2- Convert Celsius to Fahrenheit\n";
	cout << "3- Quit\n";
	choice: cout << "Enter your choice: "; cin >> choice;
	if (choice == 1)
	{
		cout << "Enter a temperature in Fahrenheit: "; cin >> F;
		C = (5.0 / 9) * (F - 32);
		cout << "The corresponding temperature in Celcius: " << C;
	}
	else
	{
		if (choice == 2)
		{
			cout << "Enter a temperature in Celcius: "; cin >> C;
			F = (9.0 / 5) * (C + 32);
			cout << "The corresponding temperature in Fahrenheit: " << F;
		}
		else
		{
			if (choice == 3)
			{
				cout << "Thank you for using my program\n";
				cout << "----------See you again---------";
			}
			else
			{
				cout << "Invalid choice\n";
				cout << "Please try again";
				goto choice;
			}
		}
	}
	
	return 0;
}