#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Constructor
    Number(int v = 0) {
        value = v;
    }

    // Unary operator overloading: negate the value (-obj)
    Number operator-() {
        Number temp;
        temp.value = -value;
        return temp;
    }

    // Binary operator overloading: add two Number objects (obj1 + obj2)
    Number operator+(const Number &n) {
        Number temp;
        temp.value = this->value + n.value;
        return temp;
    }

    // Function to display value
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number n1(10), n2(20);

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
