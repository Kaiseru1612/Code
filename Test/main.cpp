#include <iostream>

using namespace std;

bool isFibonacci(int n)
{
	/*TODO: add your code here*/
	bool check = 0;
	int a = 1, b = 2, c;
	if (n == 1)
	{
		check = 1;
	}
	if (n == 2)
	{
        check = 1;
	}
	for (int i = 2; i < n; i++)
	{
		c = a + b;
		if (n == c)
        {
            check = 1;
        }
        a = b;
		b = c;
	}
	return check;
}
int main()
{
    int n;
    cout << "nhap n: ";
    cin >> n;
    cout << isFibonacci(n);
}
