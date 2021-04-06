#include <iostream>

using namespace std;

void backing(int n, int k, int a[], int j, int i)
{
	for (j; j < n - k + i + 1; j++)
	{
		a[i] = j + 1;
		if (i == (k - 1))
		{
			int m;
			for ( m = 0; m < (k); m++)
			{
				cout << a[m] << " ";
			}
			cout << endl;

		}
		else
		{
			backing(n, k, a, j + 1, i + 1);
		}
	}
}

int main()
{
	int n, i, j, k;
	int a[1000];
	cout << "Enter n ";
	cin >> n;
	cout << "Enter k ";
	cin >> k;
	backing(n, k, a, 0, 0);
}