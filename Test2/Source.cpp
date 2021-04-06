
//
//bool isFriendnum(int first, int second){
//    int sum1=0,sum2=0;
//    for(int i=1; i<=first/2 ; i++)
//    {
//        if(first%i==0)
//            sum1=sum1+i;
//    }
//
//    for(int i=1; i<=second/2 ; i++)
//    {
//        if(second%i==0)
//            sum2=sum2+i;
//    }
//
//    float temp1 = float(sum1) / first;
//    float temp2 = float(sum2) / second;
//
//    //ckecking for friendly pair
//    if(temp1 == temp2)
//        return true;
//    else
//        return false;
//}
//double damage(int i, int levelO, int eventcode)
//{
//    double basedam=0;
//    switch(eventcode){
//        case 1: basedam = 1;
//        break;
//        case 2: basedam = 1.5;
//        break;
//        case 3: basedam = 4.5;
//        break;
//        case 4: basedam = 6.5;
//        break;
//        case 5: basedam = 8.5;
//        break;
//    }
//    return (basedam*levelO*10);
//}
//bool isdragonknight(int n)
//{
//    int sum = 0;
//    int c;
//    for (int a = 1; a < n; a++) {
//        for (int b = 1; b < n ; b++) {
//            c = n-a-b;
//            if (c*c==b*b+a*a){return  true;}
//        }
//    }
//    return false;
//}
///*bool issquarenumb
///*bool issquarenumber(double a)
//{
//    bool check = ((double)sqrt(a) - (int)sqrt(a)) ;
//    if (check == 0){return true;}
//    else {return false;}
//}
//bool isdragonKnight(int HP) {
//    for (int i = 2; i < HP; i++)
//        for (int j = i; j < HP; j++) {
//            if (sqrt(i * i + j * j) > 500) break;
//            if (issquarenumber(i * i + j * j)) { return true; }
//        }
//    return false;
//}*/
//int sumdigit(int a)
//{
//    int sum = 0, digit = 0;
//    while (a > 0)
//    {
//        digit = a % 10;
//        sum = sum + digit;
//        a = a / 10;
//    }
//    return sum;
//}
//int sumPrimeFactor(int n)
//{
//    int i=2, sum=0;
//    while(n>1)
//    {
//        if(n%i==0)
//        {
//            sum=sum+sumdigit(i);
//            n=n/i;
//        }
//        else
//            i++;
//    }
//    return sum;
//}
//bool isCompositenumber(int n)
//{
//    int c=0;
//    for(int i=1; i<=n; i++)
//    {
//        if(n%i==0)
//        {
//            c++;
//        }
//    }
//    if(c>2)
//        return true;
//    else
//        return false;
//}
//bool isSmithnumber (int n)
//{
//    if(isCompositenumber(n) && (sumdigit(n) == sumPrimeFactor(n))){return true;}
//    else {return false;}
//}
//bool isPrimenum(int a){
//    int i = 2;
//    while ((a % i != 0) && (i <= a))
//        i++;
//    if (a == i)
//        return true;
//    else return false;
//}
//bool isfibonacci (int n)
//{
//    int a= 0, b =1;
//    int c = 0;
//    for (int i = 1; i < n; i++) {
//        if (i==1){if (n==0) {return true;} else continue;}
//        if (i==2){if (n==1) {return true;} else continue;}
//        c = a + b;
//        a = b;
//        b = c;
//        if (n==c){return true;}
//    }
//    return false;
//}
//int hash(int eventCode)
//{
//    return eventCode+1;
//}
//int levelO (int i){
//    i = i + 1;
//    int b = i % 10;
//    int levelO = i > 6?(b > 5? b:5):b;
//    return levelO;
//}
//int main(){
//    int i=0, j=0;
//    int Devilwing;
//    cin >> i >> j >> Devilwing;
//    if (Devilwing){
//        for (int k = 0; k < 5; k++) {
//            cout << i << j << endl;
//            if (i == 0){if (j > 0) {i = 5; j--;}else {break;}}
//            else {i--;}
//        }
//    }

#include <iostream>
using namespace  std;

#define ROWS 100
#define COLUMNS 100
int main(){
    int **myArray= 0;

    myArray= new int *[ROWS] ;

    for( int i = 0 ; i < ROWS ; i++ )
        myArray[i] = new int[COLUMNS];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            myArray[i][j] = rand() %10;
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << myArray[i][j] << '\t';
        }
        cout << endl;
    }
    cout << "a= " << myArray[3][4] << endl;
    cout << "b= " << myArray[myArray[][4]];
    for( int i = 0 ; i < ROWS ; i++ )
        delete [] myArray[i] ;
    delete [] myArray;
 return 0;
}