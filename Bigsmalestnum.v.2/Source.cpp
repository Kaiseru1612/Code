#include <iostream>

using namespace std;

int main()
{
	const int Max = 3;
	int big, small, i;
	int inte[Max];
	cout << "Enter " << Max << " integer value: " << endl;
	for (  i = 0; i < Max; i++)
	{
		cin >> inte[i];
	}
	big = inte[0];
	small = inte[1];
	for (  i = 0; i < Max; i++)
	{
		if (big < inte [i])
		{
			big = inte[i];
		}
		if (small > inte [i])
		{
			small = inte[i];
		}
	}
	cout << "The largest number :" << big << endl;
	cout << "The smallest number:" << small << endl;
	return 0;
}

