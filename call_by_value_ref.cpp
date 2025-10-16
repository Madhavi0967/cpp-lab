#include <iostream>
using namespace std;

// Function using Call by Value
void callByValue(int x) {
    x = x + 10;
    cout << "Inside callByValue function: x = " << x << endl;
}

// Function using Call by Reference
void callByReference(int &y) {
    y = y + 10;
    cout << "Inside callByReference function: y = " << y << endl;
}

int main() {
    int a = 5;
    int b = 5;

    cout << "Before callByValue: a = " << a << endl;
    callByValue(a);
    cout << "After callByValue: a = " << a << endl;

    cout << "\nBefore callByReference: b = " << b << endl;
    callByReference(b);
    cout << "After callByReference: b = " << b << endl;

    return 0;
}
