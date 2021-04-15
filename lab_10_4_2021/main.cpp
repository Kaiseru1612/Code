#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;


void process(string fileName)   {
    ifstream ifs;
    ifs.open(fileName);
    char c;
    string str;
    int count=0;
    getline(ifs,str);
    int n = stoi(str);
    double height[n];
    double weight[n];
    for (int i = 0; i < n; i++) {
        height[i]=0;
        weight[i]=0;
    }
    string heighttmp="";
    string weighttmp="";
    int i=0;
    while (ifs.get(c)){

        if (count == 3){
                heighttmp+=c;
        }
        if (count == 4) {
                height[i] = stod(heighttmp);
                weighttmp += c;
        }
        if (c == '\n' || ifs.eof()){
            weight[i]=stod(weighttmp);
            count = 0;
            i++;
            heighttmp = "";
            weighttmp = "";
        }
        if (c == ',') count++;
    }
    double sumh=0, sumw=0;
    double aveh, avew;
    for (int j = 0; j < n; j++) {
        sumh += height[j];
        sumw += weight[j];
    }
    int counth=0,countw=0;
    for (int j = 0; j < n; j++) {
        if (height[j] != 0) counth++;
        if (weight[j] != 0) countw++;
    }
    aveh = sumh / counth;
    avew = sumw / countw;
    cout << setprecision(5) << aveh << " " << avew;
}
int findmaxsubarray(int *A, int N,int* &pSUB,int &nSUB){
    int  Maxacc = 0;
    for (int *pS = A, *pE=pS+N; pS!=pE  ; pS++) {
        int acc = *pS;
        for (int *pSub = pS +1; pSub != pE ; pSub++) {
            if (acc > Maxacc){
             Maxacc = acc;
             pSUB = pS;
             nSUB = pSUB - pS;
            }
            acc += *pSub;
        }
    }
    return Maxacc;
}
int main() {
    /*string str;
    cin >> str;
    int n = str.size();
    int count=1;
    int max=1;
    for (int i = 1; i < n ;i++) {
        if (str[i]==str[i-1] || toupper(str[i])==str[i-1] || tolower(str[i])==str[i-1]) count++;
        else {
            if (count > max) {
                max = count;
            }
            count = 1;
        }

    }
    if (count > max) {
        max = count;
    }
    cout << max;*/
/*    const char *filename = "test.txt";
    process(filename);*/
/*string str;
    string result;
    cin >> str;
    int n = str.size();
    for (int i = 0; i < n; ++i) {

        for (int j = 0; j < n; j++) {
            if (str[i] == str[j]) {
                break;
            }
        }
    }*/
/*    int *pSUB, nSUB;
    int A[]={-2, 3, -2, 3, 4, -3};
    cout << findmaxsubarray(A,6,pSUB,nSUB)<< '\n';
    for (int i = 0; i < nSUB; i++) {
        cout << pSUB[i] << " ";
    }*/
/*    string str;
    string tmp="";
    bool identical=false;
    int count = 0;
    int max = 1;
    cin >> str;
    int n = str.size();
    for (int i = 0; i < n; ++i) {
        int m = tmp.size();
        for (int j = 0; j < m; j++) {
            if (str[i] == tmp[j]){
             identical = true;
             break;
            }
        }
        if (identical) {
            tmp = "";
            if (count >= max) max = count;
            count = 0;
            identical = false;
        }
        else {
            m = tmp.size();
            tmp += str[i];
            count++;
        }
    }
    cout << max;*/
    string a,b;
    string tmp;
    int m,n;
    cin >> m ;
    cin >> n;
    cin.clear();
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a+=tmp;
        tmp="";
    }
    cin.clear();
    for (int i = 0; i < m; i++) {
        cin >> tmp;
        b+=tmp;
        tmp="";
    }
    if (a == b) cout << "true";
    else cout << "false";
    return 0;
}
