#include <iostream>

using namespace std;

int main()
{
	int i, N, sum = 0;
	double ave;
	const int n = 100;
	int a[n];
	cout << "Enter the number of elements: ";
	cin >> N;
	for (i = 0; i < N; i++)
	{
		cout << "Enter a[" << i << "]: "; cin >> a[i];
		sum += a[i];
	}
	ave = sum / N;
	cout << "Average of inputed number: " << ave;
	return 0;
}