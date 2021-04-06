#include <iostream>
using namespace std;

int main()
{
	int n, m, i, j;
	const int nMax = 100;
	const int mMax = 100;
	int a[nMax];
	int b[mMax];
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap m: ";
	cin >> m;
	for ( i = 0; i <= n; i++)
	{
		cout << "Nhap mang n a[" << i << "]: ";
		cin >> a[i];
	}
	cout << endl;
	/*for (i = 0; i <= m; i++)
	{
		cout << "Nhap mang m b[" << i << "]: ";
		cin >> b[i];
	}*/
	cout << "Xn= ";
	for ( i = 0; i <= n; i++)
	{
		if (i == 0 )
		{
			if (a[i] == 0) cout << " ";
			else
			{
				cout << a[i];
			}
			
		}
		else
		{
			if (i== 1)
			{
				if (a[i] == 0) cout << " ";
				else
				{
					if (a[i] == 1)
					{
						cout << "X";
					}
					else
					{
						cout << showpos << a[i] << "X";
					}
				}
			}
			else
			{
				switch (a[i])
				{
				case 0: cout << " ";
				case 1: cout << "X^" << i;
					break;
				default: cout << showpos << a[i] << noshowpos << "*X^" << i;
					break;
				}
			}
		}
		
	}
	/*cout << endl << "Xm= ";
	for (i = 0; i <= m; i++)
	{
		/*if (i == 0)
		{
			cout << "X^" << i + 1;
		}
		else
		{
			cout << showpos << b[i] << noshowpos << "*X^" << i + 1;
		}
		switch (i)
		{
		case 0: continue;
			break;
		case 1: cout << "X^" << i ;
			break;
		default: cout << showpos << b[i] << noshowpos << "*X^" << i ;
			break;
		}
	}*/
	return 0;
}