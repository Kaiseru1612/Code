#include<iostream>
#include<string.h>

using namespace std;

class Book {
    char* name;
public:
    Book(const char*);
    ~Book();
    void display();
    char* getName();
};

// TODO
Book::Book(const char* a){
    this->name=new char[strlen(a)];
    for (unsigned int i = 0; i < strlen(a); i++) {
        name[i]=a[i];
    }
};
Book::~Book() {
    delete[] this->name;
    this->name = nullptr;
}
void Book::display() {
    cout << "Book: " << this->name << endl;
}

char* Book::getName() {
    return this->name;
}
enum BookType {Science, Novel, Programming, NoLabel};
class BookList {
    int curID;
    Book* pHead;
    Book* pTail;
    BookType bookType;
    BookList* pNext;
public:
    BookList() {
        curID = 0;
        pHead = NULL;
        pTail = NULL;
        bookType = NoLabel;
    };
    int getNewID();
    void addNewBook(Book*);
    int findBook(char*);
    void setType(BookType);
    void setNext(BookList*);
    BookType getType();
    BookList* getNext();
};
void BookList::addNewBook(Book* _pBook) {
    if (!pHead){
        pHead = _pBook;
        pTail = _pBook;
    }
    else {
        Book* p = pHead;
        while (p.){

        }
    }
}