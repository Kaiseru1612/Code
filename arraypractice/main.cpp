#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
#include <vector>
using namespace std;

#define MAX_ROW 100
#define  MAX_COL 100

/*
std::string highestScoringWord(const std::string &str)
{
    std::cout << str << std::endl;

    std::istringstream stm(str);
    std::string token, maxString;
    long maxValue = 0;

    auto GetValue = [](const std::string& s)
    {
        long r = 0;
        for (auto c : s)
            r += int(c) - int('a') + 1;

        return r;
    };

    while (std::getline(stm, token, ' '))
    {
        long actValue = GetValue(token);
        if (actValue > maxValue)
        {
            maxValue = actValue;
            maxString = token;
        }
    }

    return maxString;
}
*/
int sum_of_minimums(const std::vector<std::vector<int>> &numbers)
{
    int sum = 0;
    int minr = 0;
    for  (int i=0; i < numbers.size(); i++){
        minr = 0;
        for (int j=0; j < numbers.at(i).size(); j++){
            if (numbers[i][j] < minr) minr = numbers[i][j];
        }
        sum+= minr;
    }
    return sum;
}
int main() {
    //Odd Piramid
 /*   int n=0;
    int num = 1;
    int a[MAX_ROW][MAX_COL];
    cout << "input n: "; cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((j == i+2)||((j == i)&&(j>0))||(j == i-2)) {
                a[i][j] = num;
                num +=2;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
           cout << a[i][j] << "\t";
        }
        cout <<'\n';
    }*/
    //cout<< highestScoringWord("take two bintang and a dance please");
    vector<vector<int>> test = {{7,9,8,6,2},{6,3,5,4,3},{5,8,7,4,5}};
    cout << "sum= " << sum_of_minimums(test);
    return 0;
}
