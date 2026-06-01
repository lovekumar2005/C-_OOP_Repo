#include <iostream>
using namespace std;
// Find the output of this code or Error if any
class A {
public:
    virtual void show(int x = 5) {
        cout << "show in A " << x << " ";
    }
};

class B : public A {
public:
	B(int a){
	}
    void show(int x = 10) override {
        cout << "show in B " << x << " ";
    }
};

int main() {
    A* p = new B;  // new B or new B() are same both call B's defalut cons
    p->show(6);
    p->show();
}
