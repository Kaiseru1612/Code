#include <iostream>

using namespace std;

int main()
{
    int A,B,X;
    cout<<"Enter the first integer A: ";cin>>A;
    cout<<"Enter the second integer B: ";cin>>B;
    X=A;
    A=B;
    B=X;
    cout<<endl;
    cout<<"A="<<A<<endl;
    cout<<"B="<<B<<endl;
    return 0;
}
