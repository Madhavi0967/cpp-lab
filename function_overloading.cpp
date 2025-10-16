#include <iostream>
using namespace std;

class MathOperations {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Function to add two floating-point numbers
    double add(double a, double b) {
        return a + b;
    }

    // Function to concatenate two strings
    string add(string a, string b) {
        return a + " " + b;
    }
};

int main() {
    MathOperations m;

    cout << "Sum of 2 integers (10 + 20): " << m.add(10, 20) << endl;
    cout << "Sum of 3 integers (10 + 20 + 30): " << m.add(10, 20, 30) << endl;
    cout << "Sum of 2 doubles (5.5 + 4.5): " << m.add(5.5, 4.5) << endl;
    cout << "Concatenation of 2 strings: " << m.add("Hello", "World") << endl;

    return 0;
}
