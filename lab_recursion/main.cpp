/*
#include<iostream>
#include<vector>
using namespace std;
bool checkDuplicate(vector<int> ar)
{
    for (int i = 0; i < ar.size(); i++) {
        for (int j = i; j < ar.size(); j++) {
            if  (j==i) continue;
            else {
                if (ar[i]==ar[j]) return false;
            }
        }
    }
    return true;
    //TODO
}
int main()
{
    int n;
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++) cin>>ar[i];
    cout<<checkDuplicate(ar);
    return 0;
}


*/
/*#include <iostream>
using namespace std;
int permutation(int n, int m)
{
    if (m==0 || m==n ) return 1;
    else return permutation(n-1, m) + permutation(n-1, m-1);
    //TODO
}
int main()
{
    int m,n;
    cin >> m >> n;
    //TODO
    cout<<permutation(n,m);
    return 0;
}*/
/*
#include<iostream>
using namespace std;
int fibonacci(int n)
{
    if (n==0) return 0;
    else if (n==1) return 1;
    else return fibonacci(n-1) + fibonacci(n-2);
    //TODO
}
int main()
{
    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}*/
/*
#include<iostream>
using namespace std;
int x=-1;
int recursiveSearch(int& n , int m, int arr[], int index)
{
    x++;
    if (arr[x] == m){
        index = x;
        for (int i = index; i < n; i++) {
            arr[i]=arr[i+1];
        }
        n--;
        return index;
    }
    else if (x == (n-1)) {
        return -1;
    } else {
        return recursiveSearch(n,m,arr, index);
    }
}
int n,m;
int main()
{
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<recursiveSearch(n,m,arr,0)<<endl;
    for(int i=0;i<n;i++) cout<< arr[i] <<" ";
    return 0;
}*/

#include <iostream>

using namespace std;

void change (int* a, int n){
    for (int i = 0; i < n; i++) {
        a[i] *=2;
    }
}

int sumarray (int* a, int n){
    if (n==0) return 0; /// n==1 return
    else return a[n-1] + sumarray(a,n - 1);
}
void sumarray (int* a, int n, int &res){
    if (n==1) res += a[0]; /// n==1 return
    else {
        res += a[n-1];
        sumarray(a,n - 1, res);
    }
}
int main(){
    int n, res=0;
    cin >> n;
    int*a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >>  a[i];
    }
    change(a, n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << "  ";
    }
    cout << '\n';
    sumarray(a, n, res);
    delete[]a;
    return 0;
}