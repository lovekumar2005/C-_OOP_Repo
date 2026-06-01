#include <iostream>
#include <typeinfo>
using namespace std;
// Find the output of this code or Error if any
class Base { virtual void f() {} };  // virtual needed for runtime check
class Derived : public Base {};

int main() {
    Base b;
    Derived d;
    Base* ptr = &d;

    cout << typeid(b).name() << endl;    // Base
    cout << typeid(d).name() << endl;    // Derived
    cout << typeid(ptr).name() << endl;  // Base*
    cout << typeid(*ptr).name() << endl; // Derived (runtime polymorphism)
}

