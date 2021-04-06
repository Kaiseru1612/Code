#include <iostream>

using	namespace std;

int main()
{
	int h, i, j;
	cout << "Enter the height of the half pyramid:\n"; cin >> h;
	cout << "-------------------------------------------\n";
	for (i = 1; i <= h; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << "* ";
		}
		cout << "\n";
	}
	return 0;
}