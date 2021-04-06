#include <iostream>

using namespace std;

int Sum(int n);
int main()
{
	int n;
	cout << "Enter number: "; cin >> n;
	cout << "Sum= " << Sum(n);
}
int Sum(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{
		return n + Sum(n-1);
	}
}