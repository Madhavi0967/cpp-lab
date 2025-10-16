#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
    // =========================
    // VECTOR OPERATIONS
    // =========================
    vector<int> vec;

    // Insertion
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    cout << "Vector after insertion: ";
    for (int v : vec) {
        cout << v << " ";
    }
    cout << endl;

    // Deletion (remove last element)
    vec.pop_back();
    cout << "Vector after deleting last element: ";
    for (int v : vec) {
        cout << v << " ";
    }
    cout << endl;

    // Traversal using index
    cout << "Vector traversal using index: ";
    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // =========================
    // LIST OPERATIONS
    // =========================
    list<int> lst;

    // Insertion
    lst.push_back(100);
    lst.push_back(200);
    lst.push_front(50);  // insert at beginning
    cout << "List after insertion: ";
    for (int l : lst) {
        cout << l << " ";
    }
    cout << endl;

    // Deletion
    lst.pop_back();   // remove last element
    lst.pop_front();  // remove first element
    cout << "List after deleting first and last elements: ";
    for (int l : lst) {
        cout << l << " ";
    }
    cout << endl;

    // Traversal using iterator
    cout << "List traversal using iterator
