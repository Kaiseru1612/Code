#include <iostream>

/*Write a program to calculate S using the following estimation formula:

n is a positive integer, n>=0.

Requirement: Using loop to calculate S and stop when two consecutive values' difference is smaller than 1.0E-6.

Input:
Integer n>=0.
Output:
First line display the value of S, round the result to 10 numbers after the decimal point.
Second line display the right side of estimation famula, round the result to 10 numbers after the decimal point.
For example:

Test	Input	Result
1
2
0.6137051389
0.6666666667
Answer:(penalty regime: 0 %)*/
#include <iostream>
#include<iomanip>
#include <math.h>
#define MAX 100000
using namespace std;

double cal(double n){
    if (n==0) {return (double)1 ;}
    else return (double) pow(-1,n)/double(n*(n+1)) + cal(n-1);
}
string revstr(string str){
    int i,  n=str.size();
    string result;
    for ( i = 0; i < n; i++){
        result += str[n -1 - i];
    }
    return result;
}
bool isPrime(int n) {
    if (n < 2) return false;
    bool answer = true;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            answer = false;
        }
    }
    return answer;
}

int main() {
/*       double S = 0;
    double i=1;
    int n;
    int count=0;
    cin >> n;
    double a = 1;
    double b = (double) pow(-1,i)/double((i)*(i+1));
    while ( abs((double) pow(-1,i)/double((i)*(i+1))) >= 1.0E-6){
        S+=a;
        a = b;
        i++;
        b = (double) pow(-1,i)/double((i)*(i+1));
    }
    cout << setprecision(10)<< fixed << S<<endl;
    cout << cal(n);*/
/*int a;
    int n;
    int pow=1;
    cin >> a >> n;
    if ((a == 0 && n==0) || n==0) {
        cout << pow;
        return 0;
    }
    for (int i = 0; i < n; i++) {
        pow *= a;
    }
    cout << pow;*/
/*    int n;
    int a, b, c;
    cin >> n;
    a = 0;
    b = 1;
    for (int i = 0; i < n; i++)
    {
        if (i==0){cout<<0<<" ";}
        else if (i==1){cout<<1;}
        else {
            c = a + b;
            a = b;
            b = c;
            cout <<" " <<c;
        }
    }*/
/*        int n;
        cin >> n;
        int* ar= new int[n];
        for (int i = 0; i < n; i++)
        {
            if (i==0){ar[i]=0;}
            else if (i==1){ar[i]=1;}
            else {
                ar[i] = ar[i-1] + ar[i-2];
            }
        }
        for (int j = 0; j < n; j++) {
                cout << ar[j] << " ";
        }
        delete []ar;*/
/* double input;
    int poscount = 0;
    double min;
    bool first = false;
    do {
        cin >> input;
        if (!first) {
            min = input;
            first = true;
        }
        else if (input < min) min = input;
        if (input >= 0) poscount++;

    } while (input != 0);
    cout << poscount << " " << min;*/
/*   double a[MAX];
   int n;
   double max;
   cin >> n;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    max = a[0];
    for (int i = 0; i < n; ++i) {
        if (a[i]> max) max = a[i];
    }
    cout << setprecision(10) << fixed << max;*/
    /*int tmp1=0;
    int tmp2=0;
    int n;
    cin >> n;
    if (n<0){

    }
    tmp2 = n;
    for (int i = 0; tmp2 > 0 ; i++) {
        tmp1 = tmp1 * 10 + tmp2%10;
        tmp2 = tmp2/10;
    }
    if (tmp1 == n) cout << 1;
    else cout << -1;*/
/*
    string a;
    string b;
    string n;
        getline(cin, n);
        if (n[0] == '-') {
            n.erase(0, 1);
        }
        a = n;
        b = revstr(n);
        cout << a << endl;
        cout << b << endl;
        if (a == b) cout << 1;
        else cout << -1;
*/
 /*   int n;
    cin >> n;
    bool pr;
    int prime=0;
    if (n==2) pr = true;
    else {
        for (int i = 2; i < n; i++) {
            pr = isPrime(i);
        }
    }
    int count=1;
    for(int i=0;i<1000000;i++){
        if(isPrime(i)){
            if(count==n){
                prime = i;
                break;
            }
            count++;
        }
    }
    if (pr) cout << n << " is a prime number" << endl;
    else cout << n << " is not a prime number" << endl;
    if (n>1) cout << prime;
    else cout << -1;*/

/*    int n,m;
    int tmp;
    cin >> m >> n;
    int**a= new int*[m];
        for (int i = 0; i < m; i++) {
            a[i]= new int[n];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            tmp = a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=tmp;
            if (i==j) break;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < m; i++) {
        delete[] a[i];
    }
    delete[] a;*/
    int n,m;
    int min;
    int minlocy;
    int saddle;
    bool found=false;
    cin >> m >> n;
    int**a= new int*[m];
    for (int i = 0; i < m; i++) {
        a[i]= new int[n];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        min = a[i][0], minlocy = 0;
        for (int j = 1; j < n; j++)
        {
            if (min > a[i][j])
            {
                min = a[i][j];
                minlocy = j;
            }
        }
        int k;
        for (k = 0; k < n; k++)
            if (min < a[k][minlocy]) break;
        if (k == n)
        {
            found = true;
            saddle = min;
        }
    }
    if (found) cout << saddle;
    else cout << -1;
    for (int i = 0; i < m; i++) {
        delete[] a[i];
    }
    delete[] a;
    return 0;
}
