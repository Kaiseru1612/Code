#include <iostream>

using namespace std;

int BtoD(int number);
int DtoB(int number);
int main()
{
	int n, c1, c2;

	cout << "MENU" << endl;
	cout << "1/ Convert Binary to Decimal" << endl;
	cout << "2/ Convert Decimal to Binary" << endl;
	cout << "3/ Exit" << endl;
	cin >> c1;
		if (c1 == 1)
		{
			cout << "input the number: "; cin >> n;
			cout << BtoD(n) << endl;
		}
		else
		{
			if (c1 == 2)
			{
				cout << "Input the number: "; cin >> n;
				cout << DtoB(n) << endl;
			}
			else
			{
				if (c1 == 3)
				{
					return 0;
				}
				else
				{
					cout << "invalid choice, try again" << endl;
				}
			}
		}
	cout << "try again?(Y/N)" << endl;
	cin >> c2;


		return 0;
}
int BtoD(int number)
{
	int rem, i = 0;
	int dec = 0;
	while (number != 0)
	{
		rem = number % 10;
		dec = dec + rem * pow(2, i);
		number /= 10;
		i++;
	}
	return dec;
}
int DtoB(int number)
{
	int rem, bin = 0, i = 1;
	while (number != 0)
	{
		rem = number % 2;
		bin = bin + rem * i;
		i *= 10;
		number = number / 2;
	}
	return bin;
}
