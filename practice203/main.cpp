/*
#include<iostream>
using namespace std;

// TODO
class Integer{
private:
    int val;
public:
    Integer(int a): val(a){};
    Integer(int *);
    ~Integer(){};
    void print();
    int getvalue();
    Integer operator+(Integer &x){
        Integer tmp(0);
        tmp.val = this->val + x.val;
        return tmp;
    };
    Integer operator+(int x){
        Integer tmp(0);
        tmp.val = this->val + x;
        return tmp;
    };
};
*//*
*/
/*
*//*

*/
/*

*//*
*/
/*

*//*

*/
/*Integer::Integer(int *a) {
    val = *a;
}*//*
*/
/*
*//*

*/
/*
*//*
*/
/*

*//*
*/
/*

int Integer::getvalue() {
    return this->val;
}
void Integer::print() {
    cout << this->val << endl;
}

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    Integer a(x);
    Integer b(y);
    Integer c(z);
    a.print(); b.print();
    (a + b + c + 4).print();
    return 0;
}*//*
*/
/*
*//*
*/
/*

#include<iostream>
using namespace std;

// TODO
class Rectangle {
private:
    float h;
    float w;
public:
    Rectangle(float, float);
    void display();
};
Rectangle::Rectangle(float height, float witdh){
    w=witdh;
    h=height;
}
void Rectangle::display()
{
    cout << "Info of rectangle: \n";
    cout << "height = " << this->h << ' ' << "width = " << this->w << endl;
}

int main() {
    // TODO
    float he, wi;
    cin >> he >> wi;
    Rectangle *A = new Rectangle(he,wi);
    Rectangle *pRec = A;
    pRec->display();
    Rectangle* ptr = pRec;
    delete A;
    ptr->display();
    return 0;
}

*//*
*/
/*

#include<iostream>
using namespace std;

template <class T> class Array2D {
    int r;
    int c;
    T** arr;
public:
TODO
    Array2D(T _dimen[2], T init){
        r = _dimen[0];
        c = _dimen[1];
        int **a= new int*[r];
        for (int i = 0; i < r; i++) {
            a[i] = new int;
        }
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                a[i][j] = init;
            }
        }
        arr = a;
    };


    class Proxy {
    private:
        T* _array;
    public:
        Proxy(T* _array) : _array(_array) { }
        T &operator[](int index) {
            return _array[index];
        }

    };
    Proxy operator[](T index) {
        return Proxy(arr[index]);
    }
    
    Array2D* operator*(Array2D &a){
        if (this->c != a.r) {
            cout << "error\n";
            return 0;
        }
        else {
            Array2D<int>* c = new Array2D<int>(new int[2] {this->getR(),a.getC()}, 0);
            for (int i = 0; i < this->getR(); i++)
            {
                for (int j = 0; j < a.getC(); j++)
                {
                    for (int k = 0; k < a.getR(); k++)
                    {
                        c->arr[i][j] = c->arr[i][j] + this->arr[i][k] * a[k][j];
                    }
                }
            }
            return c;
        }
    }
    
    int getR() {return this->r;}
    int getC() {return this->c;}
    void disp() {
        for (int i = 0; i < this->r; i++) {
            for (int j = 0; j < this->c; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int a1, b1, c1;
    int a2, b2, c2;
    int check1, check2;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;
    cin >> check1 >> check2;
    if (a1 <= 0 || b1 <= 0 || a2 <= 0 || b2 <= 0) {
        cout << "error\n";
        return 0;
    };
    Array2D<int>* p1 = new Array2D<int>(new int[2] {a1,b1}, c1);
    Array2D<int>* p2 = new Array2D<int>(new int[2] {a2,b2}, c2);
    if (a1 <= 0 || b1 <= 0 || a2 <= 0 || b2 <= 0) return -1;
    (*p1)[1][0] =  check1;
    (*p2)[1][2] = check2;
    p1->disp();
    p2->disp();

    Array2D<int>* p3 = (*p1) * (*p2);
    if (p3 != NULL) p3->disp();
    return 0;
}

*/

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
}
void Book::display() {
    cout << "Book: " << this->name << endl;
}

char* Book::getName() {
    return this->name;
}

int main() {
    char *str, *checkDel;
    char* buf = new char[80];
    cin.get(buf, 79);
    str = new char[strlen(buf) + 1];
    checkDel = new char[strlen(buf) + 1];
    strcpy(str, buf);
    strcpy(checkDel, buf);
    delete[] buf;
    Book* newNovel =  new Book(str);
    delete str;
    newNovel->display();
    char* ptr = newNovel->getName();
    delete newNovel;
    for (unsigned int i = 0; i < strlen(checkDel); i++) {
        if (checkDel[i] != ptr[i]) {
            cout << "Deleted" << endl;
            return 0;
        }
    }
    cout << "Not deleted" << endl;
    return 0;
}
/*
#include <iostream>
#include <string.h>

using namespace std;

template<class T> class Cell {
protected:
    T infor;
public:
    void set(T _infor) { this->infor = _infor; };
    T* get() {
        if (this->infor != 0){
            return nullptr;
        }
        return &this->infor;
    };
};

enum Color {White, Yellow, Black, Red, Blue};

// TODO
template<class V> class ColoredCell : public Cell<int>{
private:
    char Color;
public:
    void setColor (int a){
        Color = a;
    }
    char getColor (){
        return this->Color;
    }
};
int main () {
    int test, c;
    cin >> test >> c;
    ColoredCell<int>* a = new ColoredCell<int>();
    switch (test)
    {
        case 1:
            a->setColor(Color(c));
            cout << int(a->getColor());
            break;
        case 2:
            a->setColor(Color(c));
            a->set(10);
            if (a->get() == NULL) cout << "null" << endl;
            else cout << *(a->get());
        default:
            break;
    }
    return 0;
}*/
