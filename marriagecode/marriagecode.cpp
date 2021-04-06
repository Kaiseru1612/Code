#include <iostream>

using namespace std;

int main()
{
	char m;
	cout << "Enter a marriage code: "; cin >> m;
	if (m=='M' || m=='m')
	{
		cout << " Individual is married";
	}
	else
	{
		if (m == 'D' || m == 'd')
		{
			cout << "Individual is divorced";
		}
		else
		{
			if (m == 'W'|| m=='w')
			{
				cout << "Individual is widowed";
			}
			else
			{
				cout << "An invalid code was entered";
			}
		}
	}
	return 0;
}