#include <iostream>

using namespace std;

int main()
{
	int n, i, j;
	cout << "Enter a number: \n"; cin >> n;
	cout << "All factors of previous number: ";
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			cout << i << " ";
		}
	}
	return 0;
}