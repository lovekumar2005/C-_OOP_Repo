#include <iostream>
using namespace std;
// Find the output of this code or Error if any
class A {
public:
    A() { cout << "A constructor\n"; }
    virtual void show() = 0; 
    virtual ~A() { cout << "A destructor\n"; }
};

class B : virtual public A {
public:
    B() { cout << "B constructor\n"; }
    void show() override { cout << "B show\n"; }
    ~B() { cout << "B destructor\n"; }
};

class C : virtual public A {
public:
    C() { cout << "C constructor\n";show(); }
    void show() override { cout << "C show\n"; }
    ~C() { cout << "C destructor\n"; }
};

class D : public B, public C {
public:
    D() { cout << "D constructor\n"; }
    void show() override { cout << "D show\n"; }
    ~D() { cout << "D destructor\n"; }
};

int main() {
    A* ptr = new D();
    ptr->show();
    delete ptr;
    return 0;
}

