#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cin >> str;
    int n = str.size();
    int count=1;
    int max=1;
    for (int i = 1; i < n ;i++) {
        if (str[i]==str[i-1] || toupper(str[i])==str[i-1] || tolower(str[i])==str[i-1]) count++;
        else {
            if (count > max) {
                max = count;
            }
            count = 1;
        }

    }
    if (count > max) {
        max = count;
    }
    cout << max;
    return 0;
}
