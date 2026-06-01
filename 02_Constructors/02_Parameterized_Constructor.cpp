#include <iostream>
using namespace std;

class Student {
public:
    int id;
    string name;

    // PARAMETERIZED CONSTRUCTOR
    // Used to initialize object with values
    Student(int i, string n) {
        id = i;
        name = n;
    }

    void show() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    // Object created using parameterized constructor
    Student s1(101, "Ali");

    s1.show();

    return 0;
}
