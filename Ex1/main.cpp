#include<iostream>
#include<math.h>

using namespace std;
int main(){

int units = 5;
float price = 12.5;
int idnumber = 12583;
float cost = price*units;
cout <<"id number: "<< idnumber <<" price: " << price << " cost: " << cost << endl;
float tax = cost*0.06;
float total = cost + tax;
cout <<"tax: "<< tax << " total: " << total<< endl;
return 0;
}
