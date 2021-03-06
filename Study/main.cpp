#include <iostream>
#include "myData.h"
#include <cerrno>
#include <iomanip>
#include <assert.h>
#include <cmath>
#include <string.h>
#include <stdio.h>
#include <cstring>
#include <fstream>
using namespace std;

const int Max = 100;
#define MAX_STRING_LEN 1024
#define MAX_BUFFER_SIZE 2048
#define triangle(A, row, col) A[row * (row+1) / 2 + col]
#define MAX_SIZE 100
#define sub(a, b) a-b
#define printMAt2D(A, nR, nC) {\
                for (int i = 0; i < nR; i++) {\
                    for (int j = 0; j < nC; j++) {\
                        cout << setw(5) << A[i][j];\
                }\
                    cout << endl;\
                }\
}
#define printMAt1D(A, N) {\
                for (int i = 0; i < N; i++) {\
                        cout << setw(5) << A[i];\
                }\
}
int main(int narg /*number of argument*/, char ** argv /*long*/) {
    /*float a = 'n';
    cout << a;*/
    //int arr[MAX_SIZE];
    /*int N = 10;
    for (int i = 0; i < narg; i++) {
        cout << "Param" << i << ": " << argv[i] << endl;
    }
    cout << "Hello, World!" << std::endl;
    do {
        cout << "input a number: " ; cin >> N;
        if (!cin.good()){
            cin.clear();
            cin.ignore(1024, '\n');
        }
        if (N < 0) cout << "Error";
    } while (N<=0);
*/
    /*cout << sub(5,2);*/
    // assert(arr[i])
/*    int nR, nC, N;
    cout << "input nR, nC: "; cin >> nR >> nC >> N;
    assert(nR > 0 && nC >0);
    int A[nR][nC];
    int B[N];*/
/*    for (int i = 0; i < N; i++) {
            B[i] = rand() % 10;
    }*/
    // sort
/*    printMAt1D(B, N);
    for (int i = 0; i < N; i++) {
        if (B[i] < B[i-1]) swap(A[i], B[i-1])
    }*/
    /*for (int i = 0; i <= nR; i++) {
        for (int j = 0; j <= nC; j++) {
            cout << setw(5) << A[i][j];
        }
        cout << endl;
    }*/
    //printMAt2D(A, nR, nC);
/*
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            triangle(A, i, j) = rand() % 100;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            cout << setw(10) << triangle(A, i, j);
        }
        cout << endl;
    }
*/
// Bubble sorting
/*
    for (int j = N - 1; j > 0; j--)
    {
        for (int i = 1; i < N; i++)
        {
            if (A[i] < A[i - 1]) swap(A[i], A[i - 1]);
        }
    }
*/
    // longeest increse
/*/
    int lsLen = 0, lsStart = -1, lsEnd = -1;
    for (int i = 0, j; i < N;)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (A[j] < A[j - 1]) {
                int len = j - i;
                if (len > lsLen) {
                    lsLen = len;
                    lsStart = i;
                }
                break;
            }
        }
        i = j;
        if (j==N)
        {
            int len = j - i;
            if (len > lsLen) {
                lsLen = len;
                lsStart = i;
                break;
            }
        }

    }*/
    // Array of array
/*    char nameList[Max][MAX_STRING_LEN] = {
            "Tran Le Trung Chanh",
            "Konichiwa",
            "Sixty Nine",
            "Ashley",
            "Hilton",
            "Yan LeeCun"
    };
    int nameIdx[] = {0, 1, 2, 3, 4, 5};
    int N;
    cin >> N;
    for (int j = N; j > 1; j--) {
        for (int i = 1; i < j; i++) {
            if (strcasecmp(nameList[nameIdx[i]], nameList[nameIdx[i-1]] ) < 0) swap(nameIdx[i],nameIdx[i-1]);
        }
    }
    for (int i = 0; i < N; i++) {
        char* pC;
        pC = strchr(nameList[nameIdx[i]], 'a');
        cout << nameList[nameIdx[i]] << ". Location of character: " <<
        (pC != nullptr? (int)(pC - nameList[nameIdx[i]]) : -1) << endl;
    }*/
    // Convert string to integer
/*    float x(-1), frac = 0.1;
    bool dot_flag = false;
    cout << "Please input a number ";
    cin.getline(s, MAX_STRING_LEN);
    x = atof(s);
    cout << "The number is: " << x << endl;*/
    //pangram
    /*char sBuf[MAX_STRING_LEN];
    cout<< "input: " ;cin.getline(sBuf, MAX_STRING_LEN);
    int cCount[256];
    memset(cCount, 0, 256);
    int i = 0, pangram = 0;
    while (sBuf[i]) cCount[sBuf[i++]]++;
    for (i = 'a'; i <= 'z'; i++) {
        if (cCount[i] + cCount[i+'A'-'a'] == 0) {pangram = 0; break;}
    }
    if (i >'z') cout << "It is a pangram\n";
    else cout << "It is not a pangram\n";*/
    char inFile[MAX_STRING_LEN] = "DefaultInput.txt";
    char outFile[MAX_STRING_LEN] = "DefaultOutput";
    char buf[MAX_STRING_LEN];

    int width = 640, height = 480;
    float step = 0.1f;
    char charName[MAX_STRING_LEN] = "Noname";
    for (int i = 1; i < narg; i++) {
        if (strcmp(argv[i], "-1") == 0) strcpy(inFile, argv[++i]);
        else if (strcmp(argv[i], "-o")) strcpy(outFile, argv[++i]);
    }
    cin.getline(buf, MAX_BUFFER_SIZE);
    char lowerCase[256], upperCase[256];
    memset(lowerCase, 0, 256);
    memset(upperCase, 0, 256);
    for (int i = 'a'; i < 'z'; i++) {
        lowerCase[i] = upperCase[i+'A' - 'a'] = 1;
    }
    for (int i = 0; buf[i] ; i++) {
        if (lowerCase[buf[i]]) cout << (char)(buf[i] += 'A' - 'a');
        else if (upperCase[buf[i]]) cout << (char)(buf[i] += 'a' - 'A');
        else cout << buf[i];
    }
    //cout << "Input file: " << inFile << '\n';
    //cout << "Output file: " << outFile << '\n';

    /*char* ignoreList[]= {"\"cstring""", "\"string""", "\"string.h"""
                         "<cstring", "string.h", "string"};
    int nTerms = 6, i;*/
    //fstream fs, outFS;

    //fs.open(inFile, ios_base::in | ios_base::binary);
    //outFS.open(outFile, ios_base::out | ios_base::binary);
    /*while (!fs.eof()){
        fs.read(buf, MAX_BUFFER_SIZE);
        outFS.write(buf, fs.gcount());
    }*/
    /*while (!fs.eof()){
        fs.getline(buf, MAX_STRING_LEN);
        *//*if (strstr(buf, "witdth")){
           if (char *p = strchr(buf, '=')){
               width = atoi(p+1);
           }
        }
        else if (strstr(buf, "height")){
            if (char *p = strchr(buf, '=')){
                height = atoi(p+1);
            }
        }
        else if (strstr(buf, "step")){
            if (char *p = strchr(buf, '=')){
                step = atof(p+1);
            }
        }
        else if (strstr(buf, "charName")){
            if (char *p = strchr(buf, '=')){
                strcpy(charName, p+1);
            }
        }*//*
*//*        if (strstr(buf, "#include")){
            for (int i = 0; i < nTerms; i++) {
                if (strstr(buf, ignoreList[i])){
                    //cout << "//" << buf << '\n';
                    fs.seekp((int)fs.tellg() - strlen(buf) - 1, ios_base::beg);
                    fs << "//"; fs.flush();
                    break;
                }
                if  (i == nTerms) cout << buf << '\n';
            }
            cout << buf << '\n';
        }
        else cout << "[" << buf << "]\n";
    }*//*
    *//*cout << "width = " << width << '\n';
    cout << "height = " << height << '\n';
    cout << "step = " << step << '\n';
    cout << "Name = " << charName << '\n';*/
    //fs.close();
    return 0;
}
