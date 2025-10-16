#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;

public:
    // Constructor
    Student(string n, int r) {
        name = n;
        rollNo = r;
    }

    // Function to display student details
    void display() {
        cout << "Name: " << name << ", Roll Number: " << rollNo << endl;
    }

    // Function to update student name
    void setName(string n) {
        name = n;
    }

    // Function to update roll number
    void setRollNo(int r) {
        rollNo = r;
    }
};

int main() {
    // Creating object normally
    Student s1("Kalyani", 44);

    // Pointer to object
    Student* ptr = &s1;

    cout << "Accessing object using pointer:" << endl;
    ptr->display();  // Using arrow operator to access member functions

    // Manipulating object using pointer
    ptr->setName("Anjali");
    ptr->setRollNo(55);

    cout << "\nAfter updating using pointer:" << endl;
    ptr->display();

    // Creating object dynamically using pointer
    Student* s2 = new Student("Ravi", 33);
    cout << "\nDynamically allocated object:" << endl;
    s2->display();

    // Cleaning up dynamically allocated memory
    delete s2;

    return 0;
}
