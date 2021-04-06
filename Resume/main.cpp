#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    string Sex,Name;
    int Age,Height,Weight;
    cout << "_____________________________________________________________________"<<endl;
    cout << "|" << setw(21) <<"[Name] : "; getline( cin, Name);
    cout << "|" <<setw(21)<<"[Age] : ";cin>>Age;
    cout << "|" <<setw(21)<<"[Sex](M/F) : ";cin>>Sex;
    cout << "|"<<endl;
    cout << "|" <<setw(21)<<"[Height](cm) : ";cin>>Height;
    cout << "|" <<setw(21)<<"[Weight](kg) : ";cin>>Weight;
    cout << "_____________________________________________________________________"<<endl;
    return 0;

}
