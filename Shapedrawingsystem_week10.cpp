//Nicholas Wachira
//BCS-05-0056/2025  
#include <iostream>
using namespace std;

// Base class with virtual function
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a generic shape" << endl;
    }

    // Virtual destructor - good practice when using base class pointers
    virtual ~Shape() {}
};

// Derived class: Circle
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

// Derived class: Triangle
class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Triangle" << endl;
    }
};

int main() {
    Shape myshape;
    myshape.draw();
    Circle mycircle;
    mycircle.draw();   
    Rectangle myrectangle;
    myrectangle.draw(); 
    Triangle mytriangle;
    mytriangle.draw();

    return 0;
}