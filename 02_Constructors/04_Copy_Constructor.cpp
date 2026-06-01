#include <iostream>
using namespace std;

class Sample {
public:
    int x;

    // PARAMETERIZED CONSTRUCTOR
    Sample(int a) {
        x = a;
    }

    // COPY CONSTRUCTOR
    // Called when one object copies another object
    Sample(const Sample &obj) {
        x = obj.x;
    }

    void show() {
        cout << "Value of x: " << x << endl;
    }
};

int main() {
    Sample s1(10);

    // Copy constructor is called here
    Sample s2 = s1;

    s1.show();
    s2.show();

    return 0;
}
