#include <iostream>

using namespace std;

int main()
{
	int n, i, check = 0, ans = 0;
Start :
	cout << "Enter the number you want to check:" << endl;
	cin >> n;
	for (  i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			check = 1;
		}
		
	}
	if (check == 1)
	{
		cout << n << " is not a prime number";
	}
	else
	{
		cout << n << " is a prime number" << endl;
	}
	cout << "Try again? " << endl;
	cout << "1 = yes" << endl;
	cout << "else no" << endl;
	cin >> ans;

	if (ans == 1)
	{
		goto Start;
	}

	return 0;
}
