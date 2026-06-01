#include <iostream>
using namespace std;

// Class definition
class Demo {
public:
    // Public member variable
    // Can be accessed outside the class
    int x;
};

int main() {
    Demo d;

    // Direct access because x is public
    d.x = 10;
    cout << d.x << endl;

    return 0;
}
