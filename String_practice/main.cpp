#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <typename T>
T sum(T m, T n)
{
    return m + n;
}
int main() {
    // constructors used in the same order as described above:
    vector<int> first;                                // empty vector of ints
    vector<int> second (4,100);                       // four ints with value 100
    vector<int> third (second.begin(),second.end());  // iterating through second
    vector<int> fourth (third);                       // a copy of third

    // the iterator constructor can also be used to construct from arrays:
    int myints[] = {16,2,77,29};
    vector<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );

    cout << "The contents of fifth are:";
    for (vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';
    cout << "random sum: " << sum(12.3, 23.4);
    return 0;
}
