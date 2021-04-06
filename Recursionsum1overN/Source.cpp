#include <iostream>
using namespace std;

float sumn(int n);

int main()
{
	int n;
	cin >> n;
	cout << sumn(n);
	return 0;
}

float sumn(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return 1/n + sumn(n-1);
	}
}