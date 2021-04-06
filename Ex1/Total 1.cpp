#include<iostream>

#include<math.h>

using namespace std;
int main(){

int units = 5;
int price = 12.5;
int idnumber = 12583;
int cost = price*units;
cout << idnumber <<" " << price << " " << cost << endl;
int tax = cost*0.06;
int total = cost + tax;
cout << tax << " " << total<< endl;
return 0;
}
