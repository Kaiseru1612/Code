#include <iostream>

using namespace std;

int main()
{
	int n, sum = 0, remain = 0;
	cout << "Enter the number you want to calculate: "; cin >> n;
	while (n > 0)
	{
		remain = n % 10;
		sum = sum + remain;
		n = n / 10;
	}
	cout << "sum all digits of previous number = " << sum;
	return 0;
}