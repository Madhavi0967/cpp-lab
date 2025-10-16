#include <iostream>
using namespace std;

// Global variable
int num = 100;

// Namespace declaration
namespace First {
    int num = 10;
    void display() {
        cout << "Inside First namespace, num = " << num << endl;
    }
}

namespace Second {
    int num = 20;
    void display() {
        cout << "Inside Second namespace, num = " << num << endl;
    }
}

int main() {
    int num = 5;  // Local variable

    cout << "Local num = " << num << endl;          // Access local variable
    cout << "Global num = " << ::num << endl;       // Access global variable using scope resolution operator

    // Accessing variables and functions from namespaces
    First::display();
    Second::display();

    cout << "First namespace num = " << First::num << endl;
    cout << "Second namespace num = " << Second::num << endl;

    return 0;
}
