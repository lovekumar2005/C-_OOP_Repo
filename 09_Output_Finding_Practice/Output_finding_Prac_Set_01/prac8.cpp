#include <iostream>
using namespace std;
// Find the output of this code or Error if any
class A {
public:
    A() { cout << "A() " << endl; }
    void fun() { cout << "A::fun " << endl; }
    virtual void test() { cout << "A::test " << endl; }
     ~A() { cout << "~A() "; }
};

class B : public A {
public:
    B() { cout << "B() "; }
    void fun(int) { cout << "B::fun(int) " << endl; }
    void test() override { cout << "B::test " << endl; }
    ~B() { cout << "~B() " << endl; }
};

int main() {
    B b;
    A a = b;     // object slicing , A has only A's varibales and functions
                 // when we do A a = b then C++ copies only the A part of b into a, The B part does not exist in a, it�s �sliced off.�
                 // During slicing, an A object is created using the copy constructor (no output), and at program end its destructor is automatically called, which is why ~A() is printed.
    a.fun();  // fun is pure object of class A    
    a.test();    // even test is virtual but it work only when pointers or references
    return 0;
}

