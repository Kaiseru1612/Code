#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1,s2;
    cout << "Enter a string: ";
    getline(cin, s1);
    s2 = s1;
    cout << "The copied string: " << s2;
    return 0;
}
