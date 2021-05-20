#include <iostream>
#include "myLib.h"

int main() {
    vector<Shape*> shapeList;
    shapeList.push_back(    new Polygon(rand()%1000, rand()%1000*0.01f,rand()%1000*0.01f));
     shapeList.push_back(    new Rectangle(rand()%1000, rand()%1000*0.01f,rand()%1000*0.01f));
     shapeList.push_back(    new Rhombus(rand()%1000, rand()%1000*0.01f,rand()%1000*0.01f));
     shapeList.push_back(    new Circle(rand()%1000, rand()%1000*0.01f,rand()%1000*0.01f,rand()%1000*0.01f));
     shapeList.push_back(   new Ellipse(rand()%1000, rand()%1000*0.01f,rand()%1000*0.01f,rand()%1000*0.01f,rand()%1000*0.01f,rand()%1000*0.01f));

    for (Shape* p : shapeList) {
        p->scale(0.05);
    }
    for (Shape* p : shapeList) {
        delete p;
    }
    return 0;
}
