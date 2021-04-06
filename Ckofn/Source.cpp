#include <iostream>

using namespace std;

void Ckn(int a[], int k, int n, int i, int j);

int main()
{
	int k, n;
	int i, j;
	const int kMax = 100;
	cout << "Input n: "; cin >> n; cout << "\n";
	cout << "Input k: "; cin >> k; cout << "\n";
	int a[kMax];
	Ckn(a, k, n, 0, 0);
}

void Ckn(int a[], int k, int n, int i, int j)
{
	for (j; j < n - k + i + 1; j++)
	{
		a[i] = j + 1;
		if (i == (k - 1))
		{
			int m;
			for (m = 0; m < k; m++)
			{
				cout << a[m];
			}
			cout << endl;
		}
		else
		{
			Ckn(a, k, n, i + 1, j + 1);
		}
	}
}


