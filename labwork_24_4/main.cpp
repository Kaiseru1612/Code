#include <iostream>

using namespace std;
// implement calculate factorial function in here
long factor(int n){
    if  (n==1) return 1;
    else return n * factor(n-1);
}
void sortedSquares(int * nums, int size)    {
    int t=0;
    for (int i = 0; i < size; i++) {
        nums[i]= nums[i]*nums[i];
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (nums[j] > nums[j + 1] && (j!= size -1)) {
                t = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = t;
            }
        }
    }
}
bool completeNum(int N)
{
    int sum=0;
    for (int i = 1; i <= N/2; i++) {
        if (N%i==0){
            sum += i;
        }
    }
    if (N==sum) return true;
    return false;
}
void printCan (int can) {
    // TODO
    switch (can) {
        case 0:
            cout << "Canh ";
            break;
        case 1:
            cout << "Tan ";
            break;
        case 2:
            cout << "Nham ";
            break;
        case 3:
            cout << "Quy ";
            break;
        case 4:
            cout << "Giap ";
            break;
        case 5:
            cout << "At ";
            break;
        case 6:
            cout << "Binh ";
            break;
        case 7:
            cout << "Dinh ";
            break;
        case 8:
            cout << "Dau ";
            break;
        case 9:
            cout << "Ky ";
            break;
        default:
            break;
    }
}

void printChi (int chi) {
    // TODO
    switch (chi) {
        case 0:
            cout << "Ti";
            break;
        case 1:
            cout << "Suu";
            break;
        case 2:
            cout << "Dan";
            break;
        case 3:
            cout << "Meo";
            break;
        case 4:
            cout << "Thin";
            break;
        case 5:
            cout << "Ti";
            break;
        case 6:
            cout << "Ngo";
            break;
        case 7:
            cout << "Mui";
            break;
        case 8:
            cout << "Than";
            break;
        case 9:
            cout << "Dau";
            break;
        case 10:
            cout << "Tuat";
            break;
        case 11:
            cout << "Hoi";
            break;
        default:
            break;
    }
}

int calCan (int year) {
    year %= 10;
    return year;
}

int calChi (int year) {
    // TODO
    year %= 100;
    year %= 12;
    return year;
}

void calCanChi (int year) {
    // TODO
    printCan(calCan(year));
    printChi(calChi(year));
}
int main(int narg, char** argv)
{
    /*int N;
    cin >> N;
    long result;
    // call function calculateFactorial in here and assign value to the variable result
    result = factor(N);
    cout << result << endl;*/
    calCanChi(1996);
    return 0;
}