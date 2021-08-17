/*
#include<iostream>
#include<string.h>

using namespace std;

class Book {
    char* name;
public:
    Book(const char* a) {
        this->name = a;
    };
    ~Book() {};
    void display();
    char* getName();
};

// TODO
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
    delete buf;
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
}*/
/*
#include <iostream>

using namespace std;

//TODO
class Coordinate{
protected:
    float x,y;
public:
    Coordinate (float a, float b) : x(a), y(b) {};
    ~Coordinate() {};
    void setX(float a){
        this->x = a;
    };
    void setY(float b){
        this->y = b;
    };
    float getX(){
        return this->x;
    };
    float getY(){
        return this->y;
    };
    float distanceTo(Coordinate &loca){
        return abs(loca.x - this->x) + abs(loca.y - this->y);
    };
};
int main () {
    float Xa, Xb, Ya, Yb;
    cin >> Xa >> Xb >> Ya >> Yb;
    Coordinate a(1,2);
    Coordinate b(0,1);
    cout << a.distanceTo(b) << endl;
    a.setX(Xa); a.setY(Ya);
    b.setX(Xb); b.setY(Yb);
    cout << abs(a.getX() - b.getX()) + abs(a.getY() - b.getY()) << endl;
    cout << a.distanceTo(b) << endl;
    cout << abs(Xa - Xb) + abs(Ya - Yb);
    return 0;
}*/
#include<iostream>

using namespace std;

class Course {
private:
    int ID;
    int numOfStudent;
    int numOfTeacher;
    int numOfTA;
public:
    void getinfo();
    void disinfo();
};

void Course::getinfo() {
    cout << "ID: ";
    cin >> ID;
    cout << "Number of Students: ";
    cin >> numOfStudent;
    cout << "Number of Teachers: ";
    cin >> numOfTeacher;
    cout << "Number of TAs: ";
    cin >> numOfTA;
}

void Course::disinfo()
{
    cout<<endl;
    cout<< "CourseID = "<< ID << endl;
    cout<< "Number of student = " << numOfStudent << endl;
    cout<< "Number of teacher = " << numOfTeacher << endl;
    cout<< "Number of TA = " << numOfTA<< endl;
}


int main() {
    //TODO
    int n;
    cin >> n;
    Course* c = new Course[n];
    for (int i = 0; i < n; i++) {
        c[i].getinfo();
    }
    for (int i = 0; i < n; i++) {
        c[i].disinfo();
    }
    return 0;
}