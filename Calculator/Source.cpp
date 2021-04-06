#include <iostream> 
#include <iomanip>

using namespace std;
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divide(int a, int b);
int mod(int a, int b);
int main()
{
	int num1, num2, choice;
	char con = 'y';
	cout << "|" << setw(25) <<"MENU" <<setw(29) << "|" << endl;
	cout << "|" << "1- ADD" << setw(48) << "|" << endl;
	cout << "|" << "2- SUBTRACT" << setw(43) << "|" << endl;
	cout << "|" << "3- MULTIPLY" << setw(43) << "|" << endl;
	cout << "|" << "4- DIVIDE" << setw(45) << "|" << endl;
	cout << "|" << "5- MODULUS" << setw(44) << "|" << endl;
	cout << endl;
	while (con == 'y' || con == 'Y')
	{
		cout << "Enter your choice:  "; cin >> choice;

		cout << "Enter two number:  "; cin >> num1 >> num2;
		switch (choice)
		{
		case 1: cout << "Result: " << add(num1, num2) << endl;
			break;
		case 2: cout << "Result: " << sub(num1, num2) << endl;
			break;
		case 3:	cout << "Result: " << mul(num1, num2) << endl;
			break;
		case 4:	cout << "Result: " << divide(num1, num2) << endl;
			break;
		case 5:	cout << "Result: " << mod(num1, num2) << endl;
			break;
		default:
			cout << "Invalid choice" << endl;
			break;
		}
		cout << "Try again? "; cin >> con;
	}

}
int add(int a, int b)
{
	int ADD;
	ADD = a + b;
	return ADD;
}
int sub(int a, int b)
{
	int SUB;
	SUB = a - b;
	return SUB;
}
int divide(int a, int b)
{
	int DIV;
	DIV = a / b;
	return DIV;
}
int mul(int a, int b)
{
	int MUL;
	MUL = a * b;
	return MUL;
}
int mod(int a, int b)
{
	int MOD;
	MOD = a % b;
	return MOD;
}