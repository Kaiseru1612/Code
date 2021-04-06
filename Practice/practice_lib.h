//
// Created by DELL on 2/1/2021.
//

#ifndef PRACTICE_PRACTICE_LIB_H
#define PRACTICE_PRACTICE_LIB_H

#endif //PRACTICE_PRACTICE_LIB_H

#include <iostream>
#include <iomanip>
using namespace std;

int cal_sum_of_n_element(int n);
int cal_sum_of_n_pow_2(int n);
double cal_sum_of_1_over_n(double n);
double cal_sum_of_1_over_2n(double n);
double cal_sum_of_1_over_2nplus1(double n);
double cal_sum_of_1_over_n_time_nplus1(double n);
double cal_sum_of_n_over_nplus1(double n);

double cal_sum_of_n_over_nplus1(double n){
    if (n == 1){
        return double(1)/double(2);
    }
    else{
        return double(n)/double(n+1) + cal_sum_of_n_over_nplus1(n-1);
    }
}
double cal_sum_of_1_over_n_time_nplus1(double n){
    if (n==1){
        return double(1)/double(2);
    }
    else{
        return double(1)/double(n*(n+1)) + cal_sum_of_1_over_n_time_nplus1(n-1);
    }

//     double sum=0;
//     for (int i = 1; i <= n; i++){
//     sum += double(1)/double(i*(i+1));
//     }
//     return sum;
}
double cal_sum_of_1_over_2nplus1(double n){
    if (n==0){
        return 1;
    }
    else{
        return double(1)/double(2*n+1) + cal_sum_of_1_over_2nplus1(n-1);
    }
}
double cal_sum_of_1_over_2n(double n){
    if (n == 1){
        return double(1)/double (2);
    }
    else{
        return double(1)/double (2*n) + cal_sum_of_1_over_2n(n-1);
    }
}
double cal_sum_of_1_over_n(double n){
    if (n == 1){
        return 1;
    }
    else{
        return double(double(1)/n) + cal_sum_of_1_over_n(n-1);
    }

}
int cal_sum_of_n_pow_2(int n){
    if (n==0){
        return 0;
    }
    else{
        return n*n + cal_sum_of_n_pow_2(n-1);
    }
}
int cal_sum_of_n_element(int n){
    if (n==0){
        return n;
    }
    else{
        return n + cal_sum_of_n_element(n-1);
    }
}
