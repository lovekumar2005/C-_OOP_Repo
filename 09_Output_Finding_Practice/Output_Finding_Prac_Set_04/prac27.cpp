#include<iostream>
using namespace std;
// Find the output of this code or Error if any
class A {
public:
    void show(int x) { cout << "A "; }
};

class B : public A {
public:
    void show() { cout << "B "; }
};

int main() {
    B b;
    b.show(5);  // name-hiding
    b.show();
}
