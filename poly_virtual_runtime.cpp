#include <iostream>
#include <vector>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function for runtime polymorphism
    virtual void draw() {
        cout << "Drawing a generic Shape." << endl;
    }

    // Virtual destructor to ensure proper cleanup of derived objects
    virtual ~Shape() {}
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle." << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle." << endl;
    }
};

// Derived class 3
class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Triangle." << endl;
    }
};

int main() {
    // Vector of pointers to base class
    vector<Shape*> shapes;

    // Creating derived objects dynamically
    shapes.push_back(new Circle());
    shapes.push_back(new Rectangle());
    shapes.push_back(new Triangle());

    // Loop through vector and call draw() on each shape
    cout << "Demonstrating runtime polymorphism:\n";
    for (Shape* shape : shapes) {
        shape->draw();  // Calls the appropriate derived class function at runtime
    }

    // Clean up dynamically allocated memory
    for (Shape* shape : shapes) {
        delete shape;
    }

    return 0;
}
