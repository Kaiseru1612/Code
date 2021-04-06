#include <iostream>

using namespace std;

int main()
{
	int i, N, max = 0;
	const int n = 100;
	int a[n];
	cout << "Enter the number of elements: ";
	cin >> N;
	for (i = 0; i < N; i++)
	{
		cout << "Enter a[" << i << "]: "; cin >> a[i];
	}
	for ( i = 0; i < N; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	cout << "The largest value in the array: " << max;
	return 0;
}