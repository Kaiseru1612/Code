#include <iostream>
#include <string>
using namespace std;

struct Book
{
	char	name[3];
	int		year[3];
};
Book creat_book(char name, int year)
{
	
}

int main()
{
	struct Book book1;
	cout << "Enter book 1's name: ";
	cin >> book1.name;
	cout << book1.name;
	return 0;
}