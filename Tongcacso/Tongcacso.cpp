#include <iostream>

using namespace std;

int main()
{
	int n,i=1,sum;
	cout << "Nhap so n: "; cin >> n;
	sum = 0;
	for ( i = 1; i <= n; i++)
	{
		sum = sum + i;
	}
	cout << "tong cac so tu 1 toi n la: " << sum;
	return 0;
}
