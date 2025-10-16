#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;

public:
    // Parameterized constructor
    Student(string n, int r) {
        name = n;
        rollNo = r;
        cout << "Parameterized constructor called." << endl;
    }

    // Copy constructor
    Student(const Student &s) {
        name = s.name;
        rollNo = s.rollNo;
        cout << "Copy constructor called." << endl;
    }

    // Function to display student details
    void display() {
        cout << "Name: " << name << ", Roll Number: " << rollNo << endl;
    }
};

int main() {
    // Create object using parameterized constructor
    Student s1("Kalyani", 44);
    s1.display();

    // Create a copy of s1 using copy constructor
    Student s2 = s1;
    s2.display();

    return 0;
}
