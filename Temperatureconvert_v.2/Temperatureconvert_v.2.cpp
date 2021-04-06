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
	cout << "Enter your choice: "; cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "Enter a temperature in Fahrenheit: "; cin >> F;
		C = (5.0 / 9) * (F - 32);
		cout << "The corresponding temperature in Celcius: " << C;
		break;
	case 2:
		cout << "Enter a temperature in Celcius: "; cin >> C;
		F = (9.0 / 5)*(C + 32);
		cout << "The corresponding temperature in Fahrenheit: " << F;
		break;
	case 3:
		cout << "Thank you for using my program\n";
		cout << "----------See you again---------";
		break;
	default:
		cout << "Invalid choice\n";
		cout << "Please try again";
		break;
	}
	return 0;
}