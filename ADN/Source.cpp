#include <iostream>
using namespace std;

int main()
{
	int n;
	int countA = 0, countC = 0, H = 0;
	int i, j;
	const int Cmax = 100;
	char a[2][Cmax];
	cout << "How many pair of DNA? "; cin >> n;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << " a[" << i << "][" << j << "] : "; cin >> a[i][j];
		}
	}
	system("clS");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << a[i][j];
		}
		cout << endl;
	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[0][j] == 'E')
			{
				switch (a[1][j])
				{
				case 'A':
					a[0][j] = 'T';
					break;
				case 'T':
					a[0][j] = 'A';
					break;
				case 'C':
					a[0][j] = 'G';
					break;
				case 'G':
					a[0][j] = 'C';
					break;
				default:
					break;
				}
			}
			if (a[1][j] == 'E')
			{
				switch (a[0][j])
				{
				case 'A':
					a[1][j] = 'T';
					break;
				case 'T':
					a[1][j] = 'A';
					break;
				case 'C':
					a[1][j] = 'G';
					break;
				case 'G':
					a[1][j] = 'C';
					break;
				default:
					break;
				}
			}
			
		}
	}
	cout << endl;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << a[i][j];
			if (a[i][j] == 'A')
			{
				countA++;
			}
			if (a[i][j] == 'C')
			{
				countC++;
			}
		}
		cout << endl;
	}
	H = 2 * countA + 3 * countC;
	cout << endl;
	cout << "H = 2A + 3C = " << H;
	return 0;
}