#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int printSequence(string str)
{
	int n = str.length();
	int check = 0, count = 0;
	int countword = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (str[i] == str[j])
			{
						count++;
			}
		}
		
		if (count % 2 == 0)
		{
			countword++;
		}
			if (count % 2 == 1)
			{
				return -1;
			}
		count = 0;
	}
	return countword;
}
int main()
{
	string word;
	cin >> word;
	cout << printSequence(word);
	return 0;
}