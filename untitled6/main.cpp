#include <iostream>
#include <string>
#include <cmath>
#include <cerrno>
#include "lol.h"
using namespace std;
bool lessthan(int &a, int &b){
    return a < b;
}
bool greaterthan(int &a, int &b){
    return a > b;
}
int calculateNoOfWaitingDays(const string input7Str, const string input7Matrix[], const int k)
{
    string V, I, J;
    string N7;
    int last = 0;
    int count = 0;
    string tmp="";
    for (int i = 0; i <= input7Str.size(); i++) {
        tmp="";
        if (input7Str[i]==' ' || input7Str[i]=='\0'){
            if (count == 0){
                for (int j = last; j < i; j++) {
                    tmp+=input7Str[j];
                }
                N7 = tmp;
                count++;
                last = i;
            }
            else if (count == 1){
                for (int j = last + 1; j < i; j++) {
                    tmp+=input7Str[j];
                }
                V = tmp;
                count++;
                last = i;
            }
            else if (count == 2){
                for (int j = last + 1; j < i; j++) {
                    tmp+=input7Str[j];
                }
                I = tmp;
                count++;
                last = i;
            }
            else if (count == 3){
                for (int j = last+1; j < i; j++) {
                    tmp+=input7Str[j];
                }
                J = tmp;
                count++;
                last = i;
            }
        }
    }
    int n= stoi(N7);
    int ar[n][n];
    int tmpmatrix[n][n];
    int resultmatrix[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if  (i==j) ar[i][j]=1;
            else ar[i][j]=0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            resultmatrix[i][j] = 0;
        }
    }
    tmp = "";
    for (int i = 0; i < k; i++) {
        int col = 0;
        int row =0;
        for (int j = 0; j <= input7Matrix[i].size(); j++) {
            if (input7Matrix[i][j]==' ' || input7Matrix[i][j]=='\0'){
                tmpmatrix[row][col] = stoi(tmp);
                if (col == n-1){
                    row++;
                    col=0;
                }
                else col++;
                tmp = "";
            }
            else tmp+=input7Matrix[i][j];
        }
        for (int m = 0; m < n; m++) {
            for (int l = 0; l < n; l++) {
                for (int j = 0; j < n; ++j) {
                    resultmatrix[m][l] += ar[m][j] * tmpmatrix[j][l];
                }
            }
        }
        for (int j = 0; j < n; ++j) {
            for (int l = 0; l < n; ++l) {
                ar[j][l] = resultmatrix[j][l];
            }
        }
        for (int m = 0; m < n; m++) {
            for (int j = 0; j < n; j++) {
                resultmatrix[m][j] = 0;
            }
        }
    }
/*    cout << '\n';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ar[i][j] << ' ';
        }
        cout << endl;
    }*/
    int result;
    result = ar[stoi(I)][stoi(J)] % stoi(V);
    return result;
}
string removestr(string str, int idx){
    string result="";
    for (int i = 0; i < str.size(); i++) {
        if (i == idx) continue;
        else{
            result += str[i];
        }
    }
    return result;
}
int toint(string str){
    int num = 0, size = str.size();
    for (int i = 0, j = size-1; i < size; i++) {
        if (str[j]=='-') return 0-num;
        num+= (str[j]-'0')*pow(10,i);
        j--;
    }
    return num;
}
int main() {
/*    int B = 8;
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
    cout << S;*/
    LLItem<int> * pList = nullptr;
    for (int i = 0; i < 8; i++) {
        insertLL(pList, 0, rand()%100 );
    }
    printLL(pList);
    reversetLL(pList);
    printLL(pList);
    sortLL(pList, greaterthan);
    printLL(pList);
    sortLL(pList, lessthan);
    printLL(pList);
/*    string s = "-1";
    cout << stoi(s)<<'\n';
    cout << toint(s)<<'\n';
    cout << toint("123")<<'\n';
    cout << toint("-123")<<'\n';*/
    cout << removestr("hello", 1);
    return 0;
}
