#include <iostream>

using namespace std;

int main()
{
    // TODO
    int m=0,n=0;

    cin >> m >> n;

    int greattest{};
    int x{};
    if (m<=n) x=m;
    else x=n;
    for (int i=x;i>0;i--){
        if (m%i == 0 && n%i == 0){ greattest = i; break;}
    }
    if (greattest != 1) cout << -1;
    else cout << 1;
    return 0;
}
