#include<iostream>
using namespace std;
// Find the output of this code or Error if any
class A {
public:
//	A(){ cout << "A()"; }
    A(int x) { cout << x << " "; }
};

class B :  public A {
public:
    B() : A(10) { cout << "B "; }
};

class C :  public A {
public:
    C() : A(20) { cout << "C "; }
};

class D : public B, public C {
public:
    D()  { cout << "D "; }
};

int main() {
    D d;
}

