#include <iostream>
using namespace std;
// Find the output of this code or Error if any

class A {
public:
    A() { cout << "A constructor\n"; }
    void show() { cout << "A show\n"; }
};


class B :  public A {
public:
    B() { cout << "B constructor\n"; }
};


class C : virtual public A {
public:
    C() { cout << "C constructor\n"; }
};


class D : public B, public C {
public:
    D() { cout << "D constructor\n"; }
};

int main() {
    D obj;
    obj.show(); 
    return 0;
}

