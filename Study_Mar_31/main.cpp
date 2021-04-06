#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

string revstr(string str){
    int i,  n=str.size();
    string result;
    for ( i = 0; i < n; i++){
        result += str[n -1 - i];
    }
    return result;
}
string word(string code){
    int count=1;
    string result="";
    int i=1;
    while (code[i]){
        while (code[i] == code[i-1] && code[i] != ' ' && code[i]){
            count++;
            i++;
        }
        //count = count %7;
        switch (code[i-1]) {
            case '0':{
                if (count > 7){
                    count %= 7;

                }
                if (count==1){result +="E";}
                else if (count==2){result +="F";}
                else if (count==3){result +="G";}
                else if (count==4){result +="H";}
                else if (count==5){result +="I";}
                else if (count==6){result +="J";}
                else if (count==7){result +="K";}
                else break;
                break;}
            case '1':{
                if (count > 7){
                    count %= 7;
                }
                if (count==1){result +="L";}
                else if (count==2){result +="M";}
                else if (count==3){result +="N";}
                else if (count==4){result +="O";}
                else if (count==5){result +="P";}
                else if (count==6){result +="Q";}
                else if (count==7){result +="R";}
                else break;
                break;}
            case '2':{
                if (count > 7){
                    count %= 7;

                }
                if (count==1){result +="#";}
                else if (count==2){result +="T";}
                else if (count==3){result +="U";}
                else if (count==4){result +="V";}
                else if (count==5){result +="W";}
                else if (count==6){result +="X";}
                else if (count==7){result +="Y";}
                else break;
                break;}
            case '3':{
                if (count > 7){
                    count %= 7;

                }
                if (count==1){result +="@";}
                else if (count==2){result +="A";}
                else if (count==3){result +="S";}
                else if (count==4){result +="Z";}
                else if (count==5){result +="B";}
                else if (count==6){result +="C";}
                else if (count==7){result +="D";}
                else break;
                break;}
            default:{
                break;}
        }
        count = 1;
        i++;
    }
    return result;
}
string DecodeBinary(const string binary){
    string num;
    string result="";
    int i=0;
    string letter;
    int count=0;
    while (binary[i]) {
        while (binary[i] != ' ' && binary[i]) {
            if(count < 1) {
                letter += binary[i];
                count++;
            } else {
                letter += binary[i];
                num = num + to_string(stoi(letter, nullptr, 2));
                count = 0;
                letter = "";
            }
            i++;
        }
        num += " ";
        i++;
        letter = "";
    }
    result = word(num);
    return result;
}
string removeHashTag(string str){
    string result="",tmp="";
    int count=0;
    int atLocation=0;
    int n = str.size();
    for (int i = 0; i < n; i++) {
        if (str[i]=='#'){
            atLocation=i;
            i++;
            for (int j = 0;; j++) {
                count++;
                i++;
                if (str[i]=='#' || str[i]=='\0') break;
            }
            i=atLocation;
            if (str[i+count] =='Z') str.insert((i+count+1),"A");
            else {
                tmp+= (char)((int)str[i+count]+1);
                str.insert((i+count+1),tmp);
            }
            str.erase(str.begin()+i);
            tmp="";
        }
    }
    return str;
}
string removeAt(string str){
    string result="";
    int n = str.size();
    int location = str.find('@');
    if (str.find('@')!=-1){
            for (int i = location; i < n; i++) {
                result += str[i+1];
            }
        result = revstr(result);
        }
    else return str;
    return result;
}
string removeAt_ver2(string str){
    string result="",tmp="";
    int count=0;
    int atLocation=0;
    int n = str.size();
    for (int i = 0; i < n; i++) {
        if (str[i]=='@'){
            atLocation=i;
            i++;
            for (int j = 0;; j++) {
                count++;
                i++;
                if (str[i]=='@' || str[i]=='\0') break;
            }
            i=atLocation+1;
            for (int j = 0; j < count; j++) {
                 tmp+= str[i];
                 i++;
            }
            i=atLocation;
            for (int j = 0; j < count; j++) {
                str[i+count-j]=tmp[j];
            }
            str.erase(str.begin()+i);
            count=0;
            tmp="";
        }
    }
    return str;
}
bool checkVUA(string str){
    string king ="VUA";
    string temp="";
//    for (int i = 0,j; i <= str.size()-king.size(); i++){
//        for (j = 0; j < king.size(); j++)
//            if (str[i+j] != king[j]) break;
//        if (j == king.size())
//        {
//            return true;
//            j = 0;
//        }
//    }
    temp+=str[0];
    temp+=str[1];
    temp+=str[2];
    if (temp == king) return true;
    return false;
};
bool checkTHD(string str){
    if (str.find("THD") > 0 && str.find("THD") < str.size()-3){
        return true;
    }
    else return false;
}
string THDstyle(string str){
    string tmp="";
    for (int i = 0; i < str.size(); i++) {
        if (i%3!=0){
            tmp +=str[i];
        }
    }
    str=tmp;
    return str;
}
string THDstyle_ver2(string str){
    string tmp="";
    int count = 0;
    for (int i = 0; i < str.size(); i++) {
            if (count<3 && count !=0) {
                tmp +=str[i];
            }
            if (count==3) count=0;
            else count++;

    }
    str=tmp;
    return str;
}
string bubble_sort(string str){
    string tmp="";
    for (int i = 0; i < str.size(); i++) {
        for (int j = 0; j < str.size(); j++) {
            if (str[j]>str[j+1] && str[j+1]!= '\0'){
                tmp=str[j];
                str[j]=str[j+1];
                str[j+1]=tmp[0];
            }
            tmp="";
        }
    }
    return str;
}
string  compare2String_VUA(string str1, string str2){
    string result="";
    for (int i = 0; i < str1.size(); i++) {
        if (str1[i] >= str2[i])  result+= str1[i];
        else if (str2[i] > str1[i]) result += str2[i];
    }
    return result;
}
string findRoute(const string input3[])
{
    string tmp1="";// change accordign to B
    string tmp2 = input3[2];// inpu3 move value
    int move = abs(stoi(input3[1])); // move how many
    if (stoi(input3[1]) < 0 ){
        for (int i = 0; i < move; i++) {
            tmp1+=input3[2][i];
            tmp2.erase(0,1);
            tmp2 += tmp1;
            tmp1="";
        }
    }
    else if (stoi(input3[1]) > 0 ){
        for (int i = 0; i < move; i++) {
            tmp1+=input3[2][input3[2].size()-i-1];
            tmp2.erase(tmp2.size()-1,1);
            tmp1+=tmp2;
            tmp2=tmp1;
            tmp1="";
        }
        cout<<tmp2;
    }
    return "You can remove this return";
}
string moveset (const string input3[]) {
    string tmp1="";// change accordign to B
    string tmp2 = input3[2];// inpu3 move value
    int move = abs(stoi(input3[1])); // move how many
    int change = 0;
    for (int i = 0; i < tmp2.size(); i++) {
        change = abs(stoi(input3[0])-2*i);
        change = change % 4;
        for (int j = 0; j < change; j++) {
            switch (tmp2[i]) {
                case 'U':
                    tmp2[i] = 'D';
                    break;
                case 'D':
                    tmp2[i] = 'L';
                    break;
                case 'L':
                    tmp2[i] = 'R';
                    break;
                case 'R':
                    tmp2[i] = 'U';
                    break;
                default:
                    break;
            }
        }
    }
    return tmp2;
}
string movexy(const string str, string N) {
    string tmp1="";// change accordign to B
    string tmp2 = str;// inpu3 move value
    string result="";
    int move = abs(stoi(N)); // move how many
    int change = 0;
    int x=0,y=0;
    for (int i = 0; i < tmp2.size(); i++) {
        switch (tmp2[i]) {
            case 'U':
                y++;
                break;
            case 'D':
                y--;
                break;
            case 'L':
                x--;
                break;
            case 'R':
                x++;
                break;
            default:
                break;
        }
    }
    result = "(" + to_string(x) + "," + to_string(y) +")";
    return result;
}
string findBetrayals(const string input5[], const int N5)
{
    int alphabet[26];
    string letter;
    int top=0,sec=0,third=0;
    string toplet="",seclet="",thirdlet="";
    string result="";
    letter = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < 26; ++i) {
        alphabet[i]=0;
    }
    for (int i = 0; i < N5; i++) {
        for (int j = 0; j < input5[i].size(); j++) {
            switch (input5[i][j]) {
                case 'A':
                    alphabet[0] += 6-j;
                    break;
                case 'B':
                    alphabet[1]+= 6-j;
                    break;
                case 'C':
                    alphabet[2]+= 6-j;
                    break;
                case 'D':
                    alphabet[3]+= 6-j;
                    break;
                case 'E':
                    alphabet[4]+= 6-j;
                    break;
                case 'F':
                    alphabet[5]+= 6-j;
                    break;
                case 'G':
                    alphabet[6]+= 6-j;
                    break;
                case 'H':
                    alphabet[7]+= 6-j;
                    break;
                case 'I':
                    alphabet[8]+= 6-j;
                    break;
                case 'J':
                    alphabet[9]+= 6-j;
                    break;
                case 'K':
                    alphabet[10]+= 6-j;
                    break;
                case 'L':
                    alphabet[11]+= 6-j;
                    break;
                case 'M':
                    alphabet[12]+= 6-j;
                    break;
                case 'N':
                    alphabet[13]+= 6-j;
                    break;
                case 'O':
                    alphabet[14]+= 6-j;
                    break;
                case 'P':
                    alphabet[15]+= 6-j;
                    break;
                case 'Q':
                    alphabet[16]+= 6-j;
                    break;
                case 'R':
                    alphabet[17]+= 6-j;
                    break;
                case 'S':
                    alphabet[18]+= 6-j;
                    break;
                case 'T':
                    alphabet[19]+= 6-j;
                    break;
                case 'U':
                    alphabet[20]+= 6-j;
                    break;
                case 'V':
                    alphabet[21]+= 6-j;
                    break;
                case 'W':
                    alphabet[22]+= 6-j;
                    break;
                case 'X':
                    alphabet[23]+= 6-j;
                    break;
                case 'Y':
                    alphabet[24]+= 6-j;
                    break;
                case 'Z':
                    alphabet[25]+= 6-j;
                    break;
                default:
                    break;
            }
        }
    }
    toplet = " ";
    seclet = " ";
    thirdlet = " ";
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] >= top) {
            if (to_string(letter[i]) > toplet){
                top = alphabet[i];
                toplet = letter[i];
            }
        }
        else if (alphabet[i] >= sec) {
            if (to_string(letter[i]) > seclet){
                sec = alphabet[i];
                seclet = letter[i];
            }
        }
        else if (alphabet[i] >= third) {
            if (to_string(letter[i]) > thirdlet){
                third = alphabet[i];
                thirdlet = letter[i];
            }
        }
    }
    result += (toplet + seclet + thirdlet);
    return result;
}

string VMulFunc(string A, string B){
    int countbracket=0;
    bool openbracket1 = false;
    string cal="";
    string tmp = "";
    int openbracketlocation;
    int lastbracketlocation;
    for (int i = 0; i < B.size(); i++) {
        if (B[i]=='(' && !openbracket1)  {
            countbracket=1;
            openbracketlocation = i;
            openbracket1 = true;
        }
        if (B[i]==')') lastbracketlocation = i;
    }
    if (countbracket == 0){
        return "0";
    }
    for (int i = openbracketlocation+1; i<lastbracketlocation ; i++) {
            tmp += B[i];
    }
    cal += VMulFunc(A, tmp) + '+' + A;
    return cal;
}
string VPlusFunc(string A, string B){
    int countbracket=0;
    bool openbracket1 = false;
    string cal="";
    string tmp = "";
    int openbracketlocation;
    int lastbracketlocation;
    for (int i = 0; i < B.size(); i++) {
        if (B[i]=='(' && !openbracket1)  {
            countbracket=1;
            openbracketlocation = i;
            openbracket1 = true;
        }
        if (B[i]==')') lastbracketlocation = i;
    }
    if (countbracket == 0){
        return A;
    }
    for (int i = openbracketlocation+1; i<lastbracketlocation ; i++) {
        tmp += B[i];
    }
    return "V("+VPlusFunc(A,tmp)+")";
}
/*//    const int N=3;
//    string a[3];
//    a[0]="ABCDEF";
//    a[1]="GHEABC";
//    a[2]="HGCBAE";
//    cout << findBetrayals(a,N)<<'\n';
//    if (" " < "C")
//    cout <<1;
//    else cout <<0;*/
int main(){
    string A = "V(V(0))";
    string B = "V(0)";
    string tmp="";
    string tmpA="";
    string tmpB="";
    string remain="";
    bool plus = false;
    bool condition = false;
    int pluslocation=0;
    int pluscount = 0;
    tmp = VMulFunc(A, B);
    again:
    tmpA="";
    tmpB="";
    remain="";
    plus = false;
    for (int i = 0; i < tmp.size(); i++) {
        if (tmp[i] == '+') pluscount++;
        if (tmp[i] == '+' && !plus){
                plus = true;
        }
        if (tmp[i] == '+' && pluscount == 2){
           pluslocation = i;
           for (int j = i; j < tmp.size(); j++) {
               remain+=tmp[j];
           }
           break;
        }
        if (!plus) tmpA+=tmp[i];
        if (plus && tmp[i] != '+') tmpB+= tmp[i];
    }
    tmp = VPlusFunc(tmpA,tmpB) + remain;
    for (int i = 0; i < tmp.size(); i++) {
        if (tmp[i]=='+') {
            condition = true;
        }
    }
    if (condition) {
        condition = false;
        goto again;
    }
    cout << tmp;
    return 0;
}