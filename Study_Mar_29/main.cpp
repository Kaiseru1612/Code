#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <string.h>

#define MAX 1000
#define MAX_STRING_LEN 1000
#define MAX_NAME_LEN 64
#define MAX_BUFFER_SIZE 1024

using namespace std;

struct StudentInfo{
    int     ID;
    char    name[MAX_NAME_LEN];
    struct  BDay{
            int day,month,year;
    }       birthday; // Element/ Fields of the struct// Birth day have the type of the struct
    //Bday birthday;
    int     nCourse;
    struct  CourseInfo{
            int     ID;
            float   grade;
    }       courses[100];
};
template <typename T, class U, typename V>
V add (T a, U b ){
    return (V) (a+b);
}
struct ProgConfig{
    char inFile[MAX_STRING_LEN] ;
    char outFile[MAX_STRING_LEN] ;
};

void parsingArgument(int numberofArgument, char**, ProgConfig &);//all default argument have to be on the right
void invertstring(char *);
char* cpstr(char* s){
    char str[10];
#ifdef __MSC_VER
    strcpy_s(str, 10, s);
#else
    strcpy(str, s); //strcpy_s(str, 10, s)
#endif
    return str;
}


/*typedef int Array2D[3][3];*/
int main(int narg /*number of argument*/, char ** argv /*long*/) {
/*    char buf[MAX_STRING_LEN];
    ProgConfig config{"DefaultInput.txt", "DefaultOutput"};
    parsingArgument(narg, argv, config);
//    cin.getline(buf, MAX_BUFFER_SIZE);
//    char* s= cpstr(buf);
//    cout << buf << '\n';
    cout << add<float, float, double>(1.0f,2.5);*/
    //StudentInfo::BDay bd; change scope to call struct BDay. if remove name of struct, we cant call it but it still a member
/*    Array2D a;
    Array2D *pa = nullptr;
    for (int i = 0; i < 3 ;i++) {
        for (int j = 0; j < 3; ++j) {
            a[i][j]=rand()%10;
        }
    }
    pa = &a;
    for (int i = 0; i < 3 ;i++) {
        for (int j = 0; j < 3; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 3 ;i++) {
        for (int j = 0; j < 3; ++j) {
            cout << *pa[i][j] << " ";
        }

        cout << endl;
    }*/
/*    int n = 2;
    int a[n][n];
    int *pa[2] ;

    for (int i = 0; i < n; i++) {
        pa[i] = &a[i];
    }
    for (int i = 0; i < 2; i++) {
        ppa[i]= &pa[i];
    }
    for (int i = 0; i < ; ++i) {
        
    }*/
int n =2, k=2;
    int a[k][n][n];
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            for (int l = 0; l < n; l++) {
                a[i][j][k] = rand()%10;
            }
        }
    }
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            for (int l = 0; l < n; l++) {
                a[i][j][k] = rand()%10;
            }
        }
    }
    return 0;
}






void parsingArgument(int narg, char** argv, ProgConfig &config){
    for (int i = 1; i < narg; i++) {
        if (strcmp(argv[i], "-1") == 0) strcpy(config.inFile, argv[++i]);
        else if (strcmp(argv[i], "-o")) strcpy(config.outFile, argv[++i]);
    }
};

void invertstring(char * buf){
    static int  init = false;
    static char lowerCase[256], upperCase[256];

    if (!init){
        memset(lowerCase, 0, 256);
        memset(upperCase, 0, 256);
        for (int i = 'a'; i < 'z'; i++) {
            lowerCase[i] = upperCase[i+'A' - 'a'] = 1;
        }
        init = true;
        //clog << "This is first init\n";
    }

    for (int i = 0; buf[i] ; i++) {
        if (lowerCase[buf[i]]) buf[i] += 'A' - 'a';
        else if (upperCase[buf[i]]) buf[i] += 'a' - 'A';
    }
}