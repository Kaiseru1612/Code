#include <iostream>

using namespace std;


int main()
{
	int n, m, i, j, l;
	const int nMax = 100;
	const int mMax = 100;
	const int sMax = 100;
	int a[nMax];
	int b[mMax];
	int s[sMax];
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap m: ";
	cin >> m;
	for (i = 0; i <= n ; i++)
	{
		cout << "Nhap mang n a[" << i << "]: ";
		cin >> a[i];
	}
	cout << endl;
	for (i = 0; i <= m ; i++)
	{
		cout << "Nhap mang m b[" << i << "]: ";
		cin >> b[i];
	}
	cout << "Xn= ";
	for (i = 0; i <=n ; i++)
	{
		
		if (i == n) 
		{
			cout << a[i];
			break;
		}
		else
		{
			cout << a[i] << "*X^" << n - i << "+";
		}
		
	}
	cout << endl << "Xm= ";
	for (i = 0; i <= m; i++)
	{

		if (i == m)
		{
			cout << b[i];
			break;
		}
		else
		{
			cout <<b[i] << "*X^" << m - i << "+";
		}

	}
	cout << endl;
	cout << "X(m+n) = ";
	if (n < m)
	{
		l = m - n;
		for (i = 0; i <= m; i++)
		{
			s[i] = 0;
		}
		for ( i = l; i < m; i++)
		{
			s[i] += a[i];
		}
		for ( i = 0; i < m; i++)
		{
			b[i] += s[i];
		}
	}
	return 0;
}