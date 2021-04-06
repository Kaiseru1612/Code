#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <string.h>

using namespace std;



struct book {
      book() {
          _author = " ";
          _year = 0;
          next = nullptr;
      }
    string _author;
    int _year;
    book *next;
    };
    void createbook(book* &pHead, string _author, int _year)
    {
        book *p = new book;
        p->_year = _year;
        p->_author = _author;
        p->next = pHead; //address of bookX
        pHead = p; //

    }
    void printbook(book * pHead)
    {
        while (pHead){
            cout << pHead->_author << '\n';
            cout << pHead->_year << '\n';
            pHead = pHead->next;
        }
    }
    void insertbook(book *&PH, int idx, book *PH2){
        if (idx){
            book *p = PH;
            // locate location
            while (idx > 1 && p->next){
                idx--;
                p=p->next;
            }
            //move p2
            book *p2 = PH2;
            while (p2->next) p = p2->next;
            p2->next = p->next;
            p->next = PH2;
        } else{
            //special case begining
            book *p = PH2;
            while (p->next) p = p->next;//go from the begin to end
            p->next = PH;//insert to the begining
            PH = PH2;
        }
    }
int main() {
    book* book1 = nullptr; book* book2 = nullptr;
    book* book3 = nullptr; book* book4 = nullptr;
    createbook(book1,"Kaiser", 2016);
    createbook(book2,"vl",2020);
    createbook(book3,"vl2",20110);
    createbook(book4,"vl3",202110);
    printbook(book1);
    printbook(book2);
    printbook(book3);
    printbook(book4);
    cout << '\n';
    insertbook(book1,2,book4);
    cout << '\n';
    printbook(book1);
    printbook(book2);
    printbook(book3);
    printbook(book4);
    return 0;
}
