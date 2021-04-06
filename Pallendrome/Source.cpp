#include <iostream>;
using namespace std;

/*bool ispallendrome(int n)
{
	if (n<10)
	{
		return 1;
	}
	else
	{
		if (true)
		{

		}
		return;
	}
	return 0;
}*/
bool isPal(const string& str, int start, int end)
{
	if (start >= end)
		return true;
	if (str[start] != str[end])
		return false;
	return isPal(str, ++start, --end);
}
int main()
{
	int n;
	cout << "Enter n: "; cin >> n;
	cout <<	
}