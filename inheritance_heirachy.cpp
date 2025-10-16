#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void display() {
        cout << "This is a Vehicle." << endl;
    }
};

// Derived class 1 (virtual inheritance)
class Engine : virtual public Vehicle {
public:
    void displayEngine() {
        cout << "This is an Engine." << endl;
    }
};

// Derived class 2 (virtual inheritance)
class Wheels : virtual public Vehicle {
public:
    void displayWheels() {
        cout << "These are Wheels." << endl;
    }
};

// Derived class combining Engine and Wheels
class Car : public Engine, public Wheels {
public:
    void displayCar() {
        cout << "This is a Car." << endl;
    }
};

int main() {
    Car c;

    // Calling functions
    c.display();        // No ambiguity because Vehicle is a virtual base class
    c.displayEngine();
    c.displayWheels();
    c.displayCar();

    return 0;
}
