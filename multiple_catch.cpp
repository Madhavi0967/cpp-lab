#include <iostream>
#include <string>
using namespace std;

// Function to demonstrate multiple exceptions
void testExceptions(int choice) {
    if (choice == 1) {
        throw 42;  // int exception
    }
    else if (choice == 2) {
        throw 3.14;  // double exception
    }
    else if (choice == 3) {
        throw string("Custom string exception");  // string exception
    }
    else {
        throw runtime_error("Unknown exception");  // runtime_error
    }
}

int main() {
    int choice;
    cout << "Enter choice (1=int, 2=double, 3=string, 4=runtime_error): ";
    cin >> choice;

    try {
        testExceptions(choice);  // Call function that may throw exceptions
    }
    catch (int e) {
        cout << "Caught integer exception: " << e << endl;
    }
    catch (double e) {
        cout << "Caught double exception: " << e << endl;
    }
    catch (string &e) {
        cout << "Caught string exception: " << e << endl;
    }
    catch (runtime_error &e) {
        cout << "Caught runtime_error exception: " << e.what() << endl;
    }
    catch (...) {
        cout << "Caught unknown exception." << endl;
    }

    cout << "Program continues after exception handling." << endl;
    return 0;
}
