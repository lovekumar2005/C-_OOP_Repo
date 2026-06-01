#include <iostream>
using namespace std;
// Find the output of this code or Error if any
class A {
public:
    virtual void fun() {
        cout << "A::fun()" << endl;
    }
};

class B : virtual public A {
public:
    void fun() override {
        cout << "B::fun()" << endl;
    }
};

class C : virtual public A {
    void fun() override {
        cout << "C::fun()" << endl;
    }
};

class D : public B, public C {
    // does NOT override fun()
};

int main() {
    A* a = new D;
    a->fun();
}

