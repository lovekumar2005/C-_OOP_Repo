#include <iostream>
using namespace std;

class Box {
public:
    int length, width;

    // DEFAULT CONSTRUCTOR
    Box() {
        length = 0;
        width = 0;
    }

    // PARAMETERIZED CONSTRUCTOR
    Box(int l, int w) {
        length = l;
        width = w;
    }

    void show() {
        cout << "Length: " << length << " Width: " << width << endl;
    }

    ~Box() { // Destructor
        cout << "Destructor called for Box" << endl;
    }
};

int main() {
    // Constructor overloading
    Box b1;          // calls default constructor
    Box b2(10, 5);   // calls parameterized constructor

    b1.show();
    b2.show();

    return 0;
}
