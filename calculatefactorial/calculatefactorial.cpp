#include <iostream>

using namespace std;

int main()
{
	int i = 1, n, f = 1;
	cout << "Enter a number: "; cin >> n;
	for ( i = 1; i <= n; i++)
	{
		f *= i;
	}
	cout << "Factorial of that number : " << f;
	return 0;
}

