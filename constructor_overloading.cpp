#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Default constructor
    Rectangle() {
        length = 0;
        width = 0;
        cout << "Default constructor called." << endl;
    }

    // Parameterized constructor (one parameter)
    Rectangle(double l) {
        length = l;
        width = l;  // square
        cout << "Single-parameter constructor called." << endl;
    }

    // Parameterized constructor (two parameters)
    Rectangle(double l, double w) {
        length = l;
        width = w;
        cout << "Two-parameter constructor called." << endl;
    }

    // Function to calculate and display area
    void displayArea() {
        double area = length * width;
        cout << "Length: " << length << ", Width: " << width
             << ", Area: " << area << endl;
    }
};

int main() {
    cout << "Creating first rectangle (default):" << endl;
    Rectangle r1;  // Calls default constructor
    r1.displayArea();

    cout << "\nCreating second rectangle (square):" << endl;
    Rectangle r2(5);  // Calls one-parameter constructor
    r2.displayArea();

    cout << "\nCreating third rectangle (custom size):" << endl;
    Rectangle r3(4, 6);  // Calls two-parameter constructor
    r3.displayArea();

    return 0;
}
