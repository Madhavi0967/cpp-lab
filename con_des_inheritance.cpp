
#include <iostream>
using namespace std;

// Base class
class Vehicle {
};

// Derived class
class Car : public Vehicle {
public:
    Car() {
        cout << "Car constructor called." << endl;
    }
    ~Car() {
        cout << "Car destructor called." << endl;
    }
};

// Further derived class
class SportsCar : public Car {
public:
    SportsCar() {
        cout << "SportsCar constructor called." << endl;
    }
    ~SportsCar() {
        cout << "SportsCar destructor called." << endl;
    }
};

int main() {
    cout << "Creating SportsCar object..." << endl;
    SportsCar sc;  // Constructors are called automatically in inheritance order

    cout << "\nExiting main function..." << endl;
    return 0;  // Destructors are called automatically in reverse order
}

