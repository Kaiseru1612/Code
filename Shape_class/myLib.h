//
// Created by LAPTOP MSI on 5/17/2021.
//
#include <iostream>
#include <vector>
using namespace std;
#ifndef SHAPE_CLASS_MYLIB_H
#define SHAPE_CLASS_MYLIB_H

#endif //SHAPE_CLASS_MYLIB_H
class Shape{ // abstract class has pure virtual function
protected:
    int id;
    struct point2D{ float x,y;};
public:
    Shape(int ID) : id(ID) {cout << "Construct shape " << id << '\n'; }
    virtual ~Shape() {}
    virtual void scale (float s) = 0; // pure virtual functiion
};
class Circle : public Shape{
protected:
    point2D center;
    float   radius;
public:
    Circle(int ID, float x, float y, float R) : Shape(ID), center({x,y}), radius(R) {cout << "Construct circle " << id << '\n'; }
    ~Circle() {cout << "Destroy circle " << id << '\n';}
    void scale (float s) {
        radius *= s;
        cout << "Scale circle " << id << " with s " << s << ", R= " << radius<< '\n' ;
    }
};
class Ellipse : public Circle{
protected:
    float minorRadius;
    float Angle;
public:
    Ellipse(int ID, float x, float y, float majorR, float minorR, float a) : Circle(ID, x, y, majorR),
    minorRadius(minorR), Angle(a) {cout << "Construct ellipse " << id << '\n'; }
    ~Ellipse() {cout << "Destroy ellipse " << id << '\n';}
    void scale (float s) {
        radius *= s;
        minorRadius *= s;
        cout << "Scale ellipse " << id << " with s " << s << '\n' ;
    }
};

class Polygon : public Shape{
protected:
    vector<point2D>     pointList;
    point2D             center;
public:
    Polygon(int ID, float x, float y) : Shape(ID), center({x,y}) {cout << "Construct polygon " << id << '\n'; }
    ~Polygon() {cout << "Destroy polygon " << id << '\n';}
    void scale (float s) {
        cout << "Scale polygon " << id << " with s " << s << '\n' ;
    }
};

class Rectangle : public Polygon{
protected:
public:
    Rectangle(int ID, float x, float y) : Polygon(ID, x, y) {cout << "Constuct rectangle " << id << '\n'; }
    ~Rectangle() {cout << "Destroy rectangle " << id << '\n';}
    void scale (float s) {
        cout << "Scale rectangle " << id << " with s " << s << '\n' ;
    }
};

class Rhombus : public Polygon{
protected:
public:
    Rhombus(int ID, float x, float y) : Polygon(ID, x, y) {cout << "Constuct rhombus " << id << '\n'; }
    ~Rhombus() {cout << "Destroy rhombus " << id << '\n';}
    void scale (float s) {
        cout << "Scale rhombus " << id << " with s " << s << '\n' ;
    }
};

class Square : public Rectangle, public Rhombus{
public:
    Square(int ID, float x, float y) : Rectangle(x, ID, y), Rhombus(-ID, x, y) {cout << "Construct square " << Rectangle::id << ", " << Rhombus::id << '\n'; }
    ~Square() {cout << "Destroy square " << Rectangle::id << ", " << Rhombus::id << '\n';}
    void scale (float s) {
        cout << "Scale square " << Rhombus::id << Rectangle::id << " with s " << s << '\n' ;
    }
};