#include <iostream>
using namespace std;

class Student {
public:
    int id;
    string name;

    void display() {
        cout << id << " - " << name << endl;
    }
};

int main() {
    // Creating MULTIPLE OBJECTS of the same class
    Student s1 = {101, "Ali"};
    Student s2 = {102, "Ahmed"};

    // Each object has its own data
    s1.display();
    s2.display();

    return 0;
}
