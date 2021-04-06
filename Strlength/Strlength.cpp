#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1, str2, str3;
    cout << "Enter string 1: ";
    getline(cin, str1);
    cout << "Enter string 2: ";
    getline(cin, str2);
    cout << "Enter string 3: ";
    getline(cin, str3);
    cout << "size of string 1: " << str1.length() <<endl;
    cout << "size of string 2: " << str2.length() <<endl;
    cout << "size of string 3: " << str3.length() <<endl;
    return 0;
}


