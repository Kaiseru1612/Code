#include <iostream>

using namespace  std;
int main() {
    int sum=0,n=0;
    while (n!=-1){
        cin >> n;
        if (n%2==0){
            sum+=n;
        }
    }
    cout << sum;
    return 0;
}
