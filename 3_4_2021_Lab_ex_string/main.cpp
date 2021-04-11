#include <iostream>
#include <string>
//#include <string.h>
//#include <cstring>
#include <fstream>
using namespace std;

string revstr(string str){
    int i,  n=str.size();
    string result;
    for ( i = 0; i < n; i++){
        result += str[n -1 - i];
    }
    return result;
}

void process(string fileName) {
    /*fstream myfile(fileName);
    string data="";
    int countalphabet=0;
    int countchar=0;
    int countspace=0;
    if (myfile.is_open())
    {
        string *tmp = new string;
        while (!myfile.eof()){
            getline(myfile, *tmp);
            data +=  *tmp;
        }
        delete tmp;
    }
    int n = data.size();
    for (int i = 0; i < n; i++) {
        if (data[i] ==' ') countspace++;
        if (((data[i] >= 'a') && (data[i] <='z')) || ((data[i] >= 'A') && (data[i] <='Z'))) countalphabet++;
        countchar++;
    }*/
    ifstream ifs;
    ifs.open(fileName);
    char c;
    int countalphabet=0;
    int countchar=0;
    int countspace=0;
    while (ifs.get(c)){
        if (c ==' ') countspace = countspace +1;
        if (((c >= 'a') && (c <='z')) || ((c >= 'A') && (c <='Z'))) countalphabet = countalphabet +1;
        countchar++;
    }
    cout << countspace << " " << countchar << " " << countalphabet;
}
void process2(string fileName)   {
    ifstream ifs;
    ifs.open(fileName);
    string tmp="";
    int i=0;
    int M[100];
    double maxrow;
    char c;
//    getline(ifs,tmp);
//    int m = tmp.size();
//    for (int j = 0; j < m; j++) {
//
//    }
    while (ifs.get(c)){
        if (c == '\n'){
            double n = stod(tmp);
            if (n > maxrow) maxrow = n;
            M[i] = maxrow;
            i++;
            tmp = "";
            maxrow = -999;
        }
        else if (c == ' ') {
            double n = stod(tmp);
            if (n > maxrow) maxrow = n;
            tmp = "";
        }
        else{
            tmp+=c;
        }
        for (int j = 0; j <= i; j++) {
            cout << M[j] << '\n';
        }

    }
}
int main() {
/*    string input="";
    while (input!="***"){
        getline(cin,input);
        if (input == "***") break;
        if (input[0]>input[1]){cout << "false"<< endl;}
        else if (input[1]>input[2]){cout << "false"<<endl;}
        else cout << "true" << endl;
    }*/
/*    string a,b;
    cin >> a;
    cin >> b;
    string tmp="";
    string result="";
    string rem="";
    string sum="";
    string prevtmp="";
    int n;
    if (a.size()<b.size()){
        n=b.size();
        for (int i = a.size(); i < n; i++) {
            a+='0';
        }
        a=revstr(a);
    }
    else {
        if (b.size()<a.size())
        {
            n=a.size();
            for (int i = b.size(); i < n; i++) {
                b+='0';
            }
            b=revstr(b);
        } else n = a.size();
    }


    for (int i = n-1;i >=0; i--) {
        if (a[i]=='1' && b[i]=='1'){
            sum = '0';
            tmp = '1';
        }
        else {
            if(a[i]=='0' && b[i]=='0'){
                sum+='0';
                tmp='0';
            }
            else
            {
                sum='1';
                tmp='0';
            }
        }
        if(sum== "1" && prevtmp== "1"){
            sum='0';
            tmp='1';
        }
        else{
            if(sum=="0" && prevtmp=="0")
            {
                sum='0';
            }
            else
            {
                if (sum == "0" && prevtmp=="1"){
                    sum = '1';
                }
            }
        }
        result+=sum;
        if (i==0 && tmp =="1") result += tmp;
        prevtmp = tmp;
        sum="";
        tmp="";
    }
    result=revstr(result);
    while (result[0]=='0')
    {
        result=result.erase(0,1);
    }
    if (result==""){
        result = "0";
    }
    cout << result;*/
    const char *filename = "testcase.txt";
    process2(filename);
/*    string str;
    cin >> str;
    int n = str.size();
    bool pal;
    int maxLength = 1, start = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            pal = true;
            for (int k = 0; k < (j - i + 1) / 2; k++){
                if (str[i + k] != str[j - k]) pal = false;
            }
            if (pal && (j - i + 1) > maxLength) {
                start = i;
                maxLength = j - i + 1;
                }
            }
    }
    for (int i = start; i < start+maxLength; i++) {
        cout << str[i];
    }*/
    return 0;
}
