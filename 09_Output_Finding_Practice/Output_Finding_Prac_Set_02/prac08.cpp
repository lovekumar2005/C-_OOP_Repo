#include <iostream>
using namespace std;
// Find the output of this code or Error if any
class A {
public:
    A() { cout << "A "; }
};

class B {
public:
    B() { cout << "B "; }
};

class Test {
    B b;
    A a;
public:
    Test() : a(), b() {
        cout << "Test ";
    }
};

int main() {
    Test t;
}

