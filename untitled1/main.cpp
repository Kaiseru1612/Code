#include <iostream>
#include <string>
#include <utility>
using namespace std;
class uni{
public:
    int _numclass;
};
class SV : uni{
    int _mssv;
    string _name;
    int _year;
public:
    SV(){_mssv =0; _year = 0;};
    SV(int MSSV, string name, int year, int numclass){_mssv = MSSV; _name = move(name); _year = year; _numclass = numclass;}
    ~SV(){cout << "Your life end here;";}
    SV(SV &b){ _mssv = b._mssv; _name = b._name; _year = b._year;}
    void inputyear(){cout << "Enter year: "; cin >> _year;}
    void displayyear() const{cout << _year << '\n';}
    void displayname(){cout << _name << '\n';}
    void displayMSSV() const{cout << _mssv << '\n';}

};

int main() {
    SV SV1(1952493,"Tran Vinh Tien",2019, 12);
    SV SV2[10];
    SV2[1] = {1952493,"Tran Vinh Tien",2019, 20};
    SV2[1].displayyear();
    SV2[1].displayMSSV();
    SV2[1].displayname();

    return 0;
}
