#include <iostream>
#include <cmath>

using namespace std;

double over2topowern(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return ((double)1) / pow(2, n) + over2topowern(n - 1);
	}
}

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	cout << over2topowern(n);
	return 0;
}