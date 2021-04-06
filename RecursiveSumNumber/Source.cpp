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
	if (n<10)
	{
		return n;
	}
	else
	{
		return (n % 10) + Sum(n/10);
	}
}