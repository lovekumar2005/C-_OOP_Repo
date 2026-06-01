#include<iostream>
using namespace std;
// Find the output of this code or Error if any
class A {
public:
    A() { cout << "A()" << endl; }
};

class B :virtual public A {
public:
    B() { cout << "B()" << endl; }
};

class C :  public A {
public:
    C() { cout << "C()" << endl; }
};

class D : public B, virtual public C {
public:
    D() { cout << "D()" << endl; }
};

int main(){
	D d;
}
