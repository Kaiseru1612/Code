#include <iostream>
#include <string>
#include <string.h>
#include <cstring>
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
    // This function is used to read the input file,
    // DO NOT MODIFY THIS FUNTION
    // Because you do not need to submit this main file.
    ifstream myfile(fileName);
    if (myfile.is_open())
    {
        string *tmp = new string;
        getline(myfile, *tmp);

        delete tmp;
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

    return 0;
}
