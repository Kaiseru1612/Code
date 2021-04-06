#include <iostream>

using namespace std;
int main(){
    bool b_var = true;
    char c_var = 75;
    short s_var = 5;
    int i_var = 10;
    long l_var = 10000;
    long long ll_var = 1000000000;
    float f_var = 3.14;
    double d_var = 3.14159;
    long double ld_var = 3.1415926535;
// Size
    cout<<"Kich co cua b_var la: "<< sizeof(b_var) <<endl;
    cout<<"Kich co cua c_var la: "<< sizeof(c_var) <<endl;
    cout<<"Kich co cua i_var la: "<< sizeof(i_var) <<endl;
    cout<<"Kich co cua s_var la: "<< sizeof(s_var) <<endl;
    cout<<"Kich co cua l_var la: "<< sizeof(l_var) <<endl;
    cout<<"Kich co cua ll_var la: "<< sizeof(ll_var) <<endl;
    cout<<"Kich co cua f_var la: "<< sizeof(f_var) <<endl;
    cout<<"Kich co cua d_var la: "<< sizeof(d_var) <<endl;
    cout<<"Kich co cua ld_var la: "<< sizeof(ld_var) <<endl;

return 0;
}
