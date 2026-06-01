#include<iostream>
using namespace std;
// Find the output of this code or Error if any
class A {
public:
    A(int x) { cout << x << " "; }
};

class B : virtual public A {
public:
    B() : A(10) { cout << "B "; }
};

class C : virtual public A {
public:
    C() : A(20) { cout << "C "; }
};

class D : public B, public C {
public:
    D() : A(30) { cout << "D "; }
};

int main() {
    D d;
}

