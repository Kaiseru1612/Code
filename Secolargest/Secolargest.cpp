#include <iostream>

using namespace std;

int main()
{
	int i, first = 0, n, second = 0;
	const int k = 100;
	int a [k];
	cout << "Enter the number of element in array: "; cin >> n;
	cout << "Enter elements in array \n";
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (i = 0; i <= n; i++)
	{
		if (first < a[i])
		{
			second = first;
			first = a[i];
		}
		if (first > a[i] && a[i] > second)
		{
			second = a[i];
		}

	}
	cout << "The second largest number: " << second;
	return 0;
}
