#include <iostream>

using namespace std;

int main()
{
	int i, N, x;
	double power = 1;
	const int n = 100;
	int a[n];
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter exponent N: ";
	cin >> N;
	if (N>0)
	{
		for (i = 0; i < N; i++)
		{
			power *= x;
		}
	}
	else
	{

		for (i = 0; i < -N; i++)
		{
			power *= 1.0 / x;
		}
	}
	cout << x << " power " << N << " = " << power;
	return 0;
}
