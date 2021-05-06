#include <iostream>
#include "lol.h"
using namespace std;

char& myString::operator[](int idx) {
    if (idx < nC) return pD[idx];
    char c;
    return c;
}
myString myString::operator+(const myString &s) {
    myString str;
    str.cap = nC + s.nC + 1;
    str.nC = nC + s.nC;
    str.pD = new char [str.cap]; // should not do this
    strcpy(str.pD, pD);
    strcpy(str.pD + nC, s.pD);
    return str;
}
int myString::findStr(myString &s) {
    char *p = strstr(pD, s.pD);
    if (p) return p - pD;
    return -1;
}
long long mod(long long a, long long b){
    long long res=0;
    if (a>0){
        if (b>0) res = a % b;
        if (b<0) res = a % b;
    }
    else{
        if (b>0) res = (a % b + b) % b;
        if (b<0) res = a % b;
    }
}
int main() {
/*    myString s0;
    myString s1("Hello");
    myString s2(" HELL");
    s0 = s1 + s2;
    cout << (s1 + myString(" Heaven")).getStr() << '\n';
    s0 = std::move(s2);*/
    cout << "a>0 b>0 "  << (7 % 3 + 3) % 3 << endl;
    cout << "a>0 b<0 " << 7 % -3 << endl;
    cout << "a<0 b>0 "  << (-7 % 3 + 3) % 3<< endl;
    int a = 7 / -3;
    cout << "a<0 b<0 "  << 7 - (a * -3) << endl;
    return 0;
}
