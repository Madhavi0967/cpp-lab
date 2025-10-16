#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double width;
    double height;

public:
    // Constructor to initialize dimensions
    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }

    // Declare friend function
    friend double calculateVolume(Box b);
};

// Friend function definition
double calculateVolume(Box b) {
    // Can access private members directly
    return b.length * b.width * b.height;
}

int main() {
    // Create object of Box class
    Box box1(5.0, 3.0, 2.0);

    // Call friend function
    double volume = calculateVolume(box1);

    cout << "Volume of the box: " << volume << endl;

    return 0;
}
