/*
#include<iostream>
using namespace std;
int calcSum(int*ar, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum+= ar[i];
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int *ar= new int[n];
    for(int i=0;i<n;i++) cin>>ar[i];
    cout<< calcSum(ar, n);
    delete[] ar;
    return 0;
}*/

/*#include<iostream>
using namespace std;
int findMax(int*ar, int n)
{
    int max=ar[0];
    for (int i = 0; i < n; i++) {
        if (ar[i]>max){
            max = ar[i];
        }
    }
    return max;
}
int main()
{
    int n;
    cin>>n;
    int *ar= new int[n];
    for(int i=0;i<n;i++) cin>>ar[i];
    cout<< findMax(ar, n);
    delete[] ar;
    return 0;
}*/
/*#include<iostream>
using namespace std;
int * getValueAtIndex(int * arr, int n, int k)
{
    int*p=NULL;
    for (int i = 0; i < n; i++) {
        if (i==k){
            p=&arr[i];
        }
    }
    return p;
}
int main()
{
    int n;
    cin>>n;
    int *ar = new int[n];
    for(int i=0;i<n;i++) cin>>ar[i];
    int k;
    cin>>k;
    int *p = getValueAtIndex(ar,n,k);
    if(p== NULL) cout<<"NULL pointer";
    else cout<< *p;
    delete[] ar;
    return 0;
}*/
/*#include<iostream>
using namespace std;
int* readArray()
{
    int n;
    cin >> n;
    n++;
    int*a = new int[n];
    for (int i = 0; i < n-1; i++) {
        cin >> a[i];
    }
    a[n-1] = -1;
    int* p = &a[0];
    return p;
}
int main()
{
    int *p= readArray();
    int *q = p;
    while(*p !=-1)
    {
        cout<<*p<<" ";
        p = p + 1;
    }
    delete[] q;
    return 0;
}*/
/*
#include<iostream>
using namespace std;
struct POINT
{
    float x;
    float y;
};
void display(POINT* p)
{
    if (p!=NULL)
    {
        cout << p->x<<endl;
        cout << p->y<<endl;
        delete p;
    }
}
POINT * readPoint()
{
    POINT*p = new POINT;
    float a,b;
    cin >> a >> b;
    p->x=a;
    p->y=b;
    return p;
}
int main()
{
    POINT* p = readPoint();
    display(p);
    delete p;
    return 0;
}*/
/*#include <iostream>
using namespace std;
void swap(int *p, int *q)
{
    int* x = p;
    p = q;
    q = x;
}
int main()
{
    int *a= new int, *b= new int;
    cin>>*a>>*b;
    swap(a,b);
    cout<<*a<<" "<<*b;
    delete a;
    delete b;
    return 0;
}*/
#include<iostream>
using namespace std;
void transposeMatrix(int** ar, int n)
{
    int x;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i=j) break;
            x = ar[i][j];
            ar[i][j] = ar[j][i];
            ar[j][i]=x;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int **ar= new int*[n];
    for(int i=0;i<n;i++) ar[i] = new int[n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) cin>>ar[i][j];
    transposeMatrix(ar,n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) cout<<ar[i][j]<<" ";
        cout<<endl;
    }
    for(int i=0;i<n;i++) delete[] ar[i];
    delete[] ar;
    return 0;
}
/*#include<iostream>
using namespace std;
int** readArray()
{
    int** a= new int*[10];
    for (int i = 0; i < 10; i++) {
        a[i] = new int[10];
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            int n;
            cin >> n;
            if (n==0){
                for (int k = j; k < 10; k++) {
                    a[i][k]=0;
                }
                break;
            }
            else {
                a[i][j]=n;
            }
        }
    }
    return a;
}
int main()
{
    int** ar = readArray();
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++) cout<<ar[i][j]<<" ";
        cout<<endl;
    }
    for(int i=0;i<10;i++) delete[] ar[i];
    delete[] ar;
    return 0;
}*/

