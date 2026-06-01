#include <iostream>
using namespace std;

class Student {
public:
    int id;
    string name;

    // DEFAULT CONSTRUCTOR
    // Automatically called when object is created
    Student() {
        id = 0;
        name = "Not Assigned";
    }

    void show() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    // Default constructor is called automatically
    Student s1;

    s1.show();

    return 0;
}
