#include <iostream>

using namespace std;

int i, N, countpos = 0, countneg = 0, zeros = 0;
const int x = 100;
float a[x];

void Num()
{
	for (i = 0; i < N; i++)
	{
		cout << "Enter a[" << i << "]: ";
		cin >> a[i];
	}
}
void count()
{
	for (i = 0; i < N; i++)
	{
		if (a[i] > 0)
		{
			countpos++;
		}
		else
		{
			if (a[i] < 0)
			{
				countneg++;
			}
			else
			{
				zeros++;
			}
		}
	}
}
int main()
{
	cout << "How many number do you want to enter?\n ";
	cin >> N;
	Num();
	cout << "===================================================" << endl;
	count();
	cout << "Positive number: " << countpos << endl;
	cout << "Negative number: " << countneg << endl;
	if (zeros != 0)
	{
		cout << "Values equal zero: " << zeros;
	}
	return 0;
}