#include <iostream>

using namespace std;

bool trinumcheck(int n)
{
	int i, trinum;
	bool check = 0;
	for (i = 1; i <= n; i++)
	{
		trinum = (i*(i + 1)) / 2;
		if (n == trinum)
		{
			check = 1;
		}
	}
	return check;
}
int main() 
{
	int n;
	cin >> n;
	cout << endl;
	cout << trinumcheck(n);
	return 0;
}