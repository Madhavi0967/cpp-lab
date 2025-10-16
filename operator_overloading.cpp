#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Constructor
    Number(int v = 0) : value(v) {}

    // Friend function for binary operator +
    friend Number operator+(const Number &n1, const Number &n2);

    // Friend function for unary operator -
    friend Number operator-(const Number &n);

    // Function to display value
    void display() const {
        cout << "Value: " << value << endl;
    }
};

// Binary operator + overloading as friend function
Number operator+(const Number &n1, const Number &n2) {
    Number temp;
    temp.value = n1.value + n2.value;
    return temp;
}

// Unary operator - overloading as friend function
Number operator-(const Number &n) {
    Number temp;
    temp.value = -n.value;
    return temp;
}

int main() {
    Number n1(15), n2(25);

    cout << "Original numbers:" << endl;
    n1.display();
    n2.display();

    // Binary operator +
    Number sum = n1 + n2;
    cout << "\nAfter adding n1 + n2:" << endl;
    sum.display();

    // Unary operator -
    Number neg = -n1;
    cout << "\nAfter unary negation -n1:" << endl;
    neg.display();

    return 0;
}
