#include <iostream>
#include <map>
using namespace std;

int main() {
    // Creating a map (key-value pairs)
    map<int, string> studentMap;

    // =========================
    // INSERTION
    // =========================
    studentMap[101] = "Kalyani";        // Using operator[]
    studentMap.insert({102, "Ravi"});   // Using insert()
    studentMap.insert(pair<int, string>(103, "Anjali"));

    cout << "Map after insertion:" << endl;
    for (auto &entry : studentMap) {
        cout << "Roll No: " << entry.first << ", Name: " << entry.second << endl;
    }
    cout << endl;

    // =========================
    // ACCESS
    // =========================
    cout << "Accessing student with roll no 102: " << studentMap[102] << endl;
    cout << "Accessing student with roll no 103 using at(): " << studentMap.at(103) << endl;
    cout << endl;

    // =========================
    // SEARCHING
    // =========================
    int keyToSearch = 101;
    if (studentMap.find(keyToSearch) != studentMap.end()) {
        cout << "Student with roll no " << keyToSearch << " found: " << studentMap[keyToSearch] << endl;
    } else {
        cout << "Student with roll no " << keyToSearch << " not found." << endl;
    }
    cout << endl;

    // =========================
    // DELETION
    // =========================
    studentMap.erase(102);  // Remove entry with key 102
    cout << "Map after deleting roll no 102:" << endl;
    for (auto &entry : studentMap) {
        cout << "Roll No: " << entry.first << ", Name: " << entry.second << endl;
    }

    return 0;
}
