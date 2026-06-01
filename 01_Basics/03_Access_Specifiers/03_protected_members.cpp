#include <iostream>
using namespace std;

// Parent class
class Parent {
protected:
    // Protected member variable
    // Accessible in derived (child) class
    int value;
};

// Child class inheriting Parent
class Child : public Parent {
public:
    void setValue(int v) {
        value = v;   // Accessing protected member
    }

    void show() {
        cout << value << endl;
    }
};

int main() {
    Child c;

    // Using child class functions
    c.setValue(30);
    c.show();

    return 0;
}
