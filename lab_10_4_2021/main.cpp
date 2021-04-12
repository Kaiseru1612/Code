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
    const char *filename = "test.txt";
    process(filename);
    return 0;
}
