#include <iostream>
#include <string>

using namespace std;
int main() {
    int B = 8;
    string S = "LDLRLRDDRLDUUDUUR";
    string tmp1 = "";
    string tmp2 = "";
    int move = abs(B);
    if (B < 0 ){
        for (int i = 0; i < move; i++) {
            tmp1 += S[i];
        }
        for (int i = move; i < S.size(); i++) {
            tmp2 += S[i];
        }
        S = "";
        S = tmp2 + tmp1;
    }
    else if (B > 0 ){
        for (int i = S.size() - move; i < S.size(); i++) {
            tmp1 += S[i];
        }
        for (int i = 0; i < S.size() - move;i++) {
            tmp2 += S[i];
        }
        S = "";
        S = tmp1 + tmp2;
    }
    cout << S;
}
