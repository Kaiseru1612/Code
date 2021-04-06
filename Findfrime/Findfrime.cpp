#include <iostream>

using namespace std;

int main()
{
	int n, i=2, p=0;
	cout << "Enter the number you want to check: "; cin >> n;
	for (i =2 ; i< n ; i++)
	{
		if (n % i == 0)
		{
			p = 1;
		}
		
	}
	if (p == 1)
	{
		cout << "This is not a prime number";
	}
	else
	{
		cout << "This is a prime number";
	}
	return 0;
}