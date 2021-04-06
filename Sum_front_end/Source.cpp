#include <iostream>
using namespace std;

int main()
{
	int n;
	const int nMax = 1000;
	int a[nMax];
	int sum[nMax];
	bool chanle;
	cout << "Enter n"; cin >> n;
	chanle = n % 2;// 1 le, 0 chan
	for (int i = 0; i < n; i++)
	{
		cout << "Enter a[" << i << "]= ";
		cin >> a[i];
	}
	if (chanle)
	{
		cout << a[n / 2];
		for (int i = 0; i <= n / 2; i++)
		{
			for (int j = n - 1; j > i; j--)
			{
				cout << a[i] + a[j] << endl;
			}
		}
	}
	else
	{
		for  (int i = 0; i <= n/2; i++)
		{
			for (int j = n-1; j > i; j--)
			{           
				cout << a[i] + a[j] << endl;
			}
		}
	}
	return 0;
}