#include <iostream>
using namespace std;
// Find the output of this code or Error if any
class A {
public:
    int x;
    A(){ cout << "A()" << endl;}
    A(int v) : x(v) { cout << "A()" << endl; }
    virtual void show(){ cout << "Show in A" << endl; }
    virtual ~A() { cout << "~A"; }
};

class B : virtual public A {
public:
    B() : A(10) { cout << "B\n"; }
    void show()  { cout << "B show " << x << endl; }
    ~B() { cout << "~B\n"; }
};

class C : virtual private A {
public:
    C() : A(20) { cout << "C\n"; }
    void show()  { cout << "C show " << x << endl; }
    ~C() { cout << "~C\n"; }
};

class D : public B, public C {
public:
    D() : A(100) {
        cout << "D\n";
        cout << x << endl;
    }
    
    void show() { cout << "D show "  << endl; }
    ~D() { cout << "~D\n"; }
};

int main() {
    A* p = new D();
    p->show();
    delete p;
}

