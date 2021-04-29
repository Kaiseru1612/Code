//
// Created by DELL on 4/26/2021.
//
#include <iostream>
#include <string>
#include <string.h>
using namespace std;
#ifndef STUDY_26_4_2021_LOL_H
#define STUDY_26_4_2021_LOL_H
/*class Rectangle
{
private:
    double width;
    double height;
public:
    Rectangle(double , double );
    void setWidth(double a){
        width=a;
    };
    void setHeight(double a){
        height = a;
    };
    double getWidth(){
        return width;
    };
    double getHeight(){
        return height;
    };
    double getArea();
};*/
struct myString{
private:
    int cap, nC;
    char *pD;
public:
    myString() {
        cap=nC=0;
        pD= nullptr;
    };
    myString(myString& s) : nC(s.nC), cap(s.cap), pD(new char[s.cap]){//copy constructor
        strcpy(pD, s.pD);
    }
    myString(myString && s) : nC(s.nC), cap(s.cap), pD(s.pD){// move constructor (steal data) move s put to current object trying to create
        s.pD = nullptr;
    }
/*    myString& operator=(myString && s){// copy
        delete [] pD;
        nC = s.nC;
        cap = s.cap;
        pD = new char[s.cap];
        strcpy(pD, s.pD);
        return *this;
    }*/
    myString& operator=(myString && s){// move assignment
        delete [] pD;
        nC = s.nC;
        cap = s.cap;
        pD = s.pD;
        s.pD = nullptr;
        s.cap = s.nC = 0;
        return *this;
    }
    myString(char* s) {
        nC = strlen(s);
        pD = new char[nC +1];
        cap = nC + 1;
        strcpy(pD, s);
    };
    ~myString() {delete  [] pD;};
    char& operator[](int idx);
    myString operator+(const myString& s);
    int findStr(myString& s);
    myString * foo(){
        if (pD && nC){nC--;
            return foo()->foo()->foo()->foo();
        } else return this;
    }
    const char* getStr() {
        return pD;
    };
};
#endif //STUDY_26_4_2021_LOL_H
