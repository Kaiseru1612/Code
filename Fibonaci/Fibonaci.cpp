#include <iostream>

using namespace std;

int main()
{
	int n;
	int i,a, b, c;
	cout << "How many Fibonacci number you want to display?\n";
	cin >> n;
	a = 0;
	b = 1;
	cout << a << " " << b << " ";
	for ( i = 3; i <= n; i++)
	{
		c = a + b;
		a = b;
		b = c;
		cout << c << " ";
	}
	return 0;
}