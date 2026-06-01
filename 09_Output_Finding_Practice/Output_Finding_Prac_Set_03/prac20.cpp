#include <iostream>
using namespace std;
// Find the output of this code or Error if any
class A {
public:
    int x;
    A(int v) : x(v) {
        cout << "A(" << x << ")\n";
    }
    virtual void show() = 0;
    virtual ~A() {
        cout << "~A(" << x << ")\n";
    }
};

class B : virtual public A {
public:
    B() : A(10) {
        cout << "B\n";
    }
    void show() override {
        cout << "B show " << x << endl;
    }
    ~B() {
        cout << "~B\n";
    }
};

class C : virtual public A {
public:
    C() : A(20) {
        cout << "C\n";
        show();
    }
    void show() override {
        cout << "C show " << x << endl;
    }
    ~C() {
        cout << "~C\n";
    }
};

class D : public B, public C {
public:
    D() : A(100) {
        cout << "D\n";
    }
    void show() override {
        cout << "D show " << x << endl;
    }
    ~D() {
        cout << "~D\n";
    }
};

int main() {
    A* p = new D();
    p->show();
    delete p;
}

