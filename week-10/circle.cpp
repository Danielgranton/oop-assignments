// BCS-05-0068/2025
// Sifuna Daniel Granton
// Shape drawing system

#include <iostream>

using namespace std;

//base class
class Shape {
    public: 
        virtual void draw() {
            cout << "Drowing Shape" << endl;
        }
};

//Derived class Cirlce
class Circle : public Shape {
    public:
        void draw() override {
            cout << "Drawing Circle" << endl;
        }
};

//Derived class rectangle
class Rectangle : public Shape {
    public:
        void draw() override {
            cout << "Drawing Rectangle" << endl;
        }
};

//Derived class triangle
class Triangle : public Shape {
    public:
        void draw() override {
            cout << "Drawing Triangle" << endl;

        }
};

int main() {
    Shape *shape; // base class Pointer

    Circle circle;
    Rectangle rectangle;
    Triangle triangle;

    shape = &circle;
    shape->draw();

    shape = &rectangle;
    shape -> draw();

    shape =&triangle;
    shape->draw();

    return 0;
}