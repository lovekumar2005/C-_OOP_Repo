#include <iostream>
using namespace std;

// Class definition
class Demo {
private:
    // Private member variable
    // Cannot be accessed directly outside the class
    int x;

public:
    // Public function to set value
    void setX(int a) {
        x = a;
    }

    // Public function to show value
    void show() {
        cout << x << endl;
    }
};

int main() {
    Demo d;

    // Accessing private member using public function
    d.setX(20);
    d.show();

    return 0;
}
