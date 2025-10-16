#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    // Constructor using 'this' pointer
    Student(int rollNo, string name) {
        this->rollNo = rollNo;  // 'this' points to the current object's rollNo
        this->name = name;      // 'this' points to the current object's name
    }

    // Function that returns the current object using 'this' pointer
    Student& display() {
        cout << "Roll Number: " << this->rollNo << endl;
        cout << "Name: " << this->name << endl;
        return *this; // returning current object
    }
};

int main() {
    // Creating object of Student class
    Student s1(24, "Kalyani");

    // Calling display() using 'this' pointer reference
    s1.display();

    return 0;
}
