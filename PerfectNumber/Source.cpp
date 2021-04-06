#include <iostream>
using	namespace std;

int main() {
	int n;
	int i, j;
	int sum = 0;
	cout << "Enter N: ";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
			cout << sum;
		}

	}
	return 0;
}