#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
/*class BuyCar
{

public:
    static vector<int> nbMonths(int startPriceOld, int startPriceNew, int savingperMonth, double percentLossByMonth){
        int monthssave = 0;
        int monthscount = 0;
        double tmoney = startPriceOld;
        double startm = startPriceOld, newm = startPriceNew;
        while (true){
            if (monthscount == 1) {percentLossByMonth += 0.5; monthscount = 0;}
            else monthscount++;
            //if (monthscount == 2) {percentLossByMonth += 0.5; monthscount = 0;}
            //else monthscount++;
            if (tmoney >= newm) {tmoney = tmoney - newm; break;}
            startm = startm - startm*((double )percentLossByMonth/100);
            newm = newm * ((double )1-((double )percentLossByMonth/100));
            tmoney = tmoney - startm*((double )percentLossByMonth/100) + savingperMonth;
            monthssave++;
            if (tmoney >= newm) {tmoney = tmoney - newm; break;}
            cout << "percent: " << percentLossByMonth << '\t' << tmoney - newm << '\n';

        }

        vector<int> result;
        int money = round(tmoney);
        int myints[] = {monthssave, money};
        result.assign (myints,myints+2);
        return result;

    };
};*/
#include <vector>
#include <random>

using namespace std;

class BuyCar
{

public:
    static std::vector<int> nbMonths(int startPriceOld, int startPriceNew, int savingperMonth, double percentLossByMonth);
};

vector<int> BuyCar::nbMonths(int startPriceOld, int startPriceNew, int savingperMonth, double percentLossByMonth)
{
    int mth = 0;
    double priceOld = static_cast<double>(startPriceOld);
    double priceNew = static_cast<double>(startPriceNew);
    double available = static_cast<double>(startPriceOld);
    while (available < priceNew)
    {
        // at the end of this month
        mth += 1;
        if (mth % 2 == 0)
        {
            percentLossByMonth = percentLossByMonth + 0.5;
        }
        priceOld = priceOld * (100 - percentLossByMonth) / 100;
        priceNew = priceNew * (100 - percentLossByMonth) / 100;
        available = mth * savingperMonth + priceOld;
    }
    vector<int> res = {mth, static_cast<int>(available - priceNew + .5)};
    return res;
}
int main() {
    BuyCar a;
    vector<int> r;
    r = a.nbMonths(2000, 8000, 1000, 1.5);
    for (int i = 0; i < r.size() ; i++) {
        cout << r.at(i) <<'\n';
    }
    return 0;
}
