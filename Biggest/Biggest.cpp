#include <iostream>

using namespace std;

int main() 
{
	int a, b, c;
	cout << "Input A: "; cin >> a;
	cout << "Input B: "; cin >> b;
	cout << "Input C: "; cin >> c;
	if (a>b && a>c)
	{
		cout << "The biggest number is A";
	}
	else
	{
		if (b>c)
		{
			cout << "The biggest number is B";
		}
		else
		{
			cout << "The biggest number is C";
		}
	}
	return 0;
}