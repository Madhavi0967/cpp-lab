#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;

public:
    // Constructor — called automatically when object is created
    Student(string n, int r) {
        name = n;
        rollNo = r;
        cout << "Constructor called. Object created!" << endl;
    }

    // Member function to display student details
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }

    // Destructor — called automatically when object is destroyed
    ~Student() {
        cout << "Destructor called. Object destroyed!" << endl;
    }
};

int main() {
    cout << "Creating object..." << endl;
    Student s1("Kalyani", 44);  // Constructor is called here

    cout << "\nDisplaying student details:" << endl;
    s1.display();

    cout << "\nExiting program..." << endl;
    // Destructor will be called automatically when object goes out of scope

    return 0;
}
