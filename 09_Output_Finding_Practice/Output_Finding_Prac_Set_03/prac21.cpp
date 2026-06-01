#include <iostream>
using namespace std;
// Find the output of this code or Error if any
class A {
public:
    int x;
    A(int v) : x(v) {
        cout << "A(" << x << ")\n";
//        show(); // we can not call pure virtual fun in cons or des
    }
    virtual void show() {
	}
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

class C :  public A {
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
        cout << "D show "  << endl;
    }
    ~D() {
        cout << "~D\n";
    }
};

int main() {
    A* p = new D();  // will give error if any one is non-virtual bc D has two obj of A and p becomes ambigous which A to call in dimond problem
    D d;  // run even if any one is non-virtal inheritance (A in B and C) in dimond problem
    p->show();
    delete p;
}



