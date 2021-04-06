#include <iostream>
#include <cmath>

using namespace std;


int sumofsquare(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return (n * n) + sumofsquare(n - 1);
	}
}

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	cout << "\n" << sumofsquare(n);
}