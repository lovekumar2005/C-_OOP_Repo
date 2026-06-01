#include<iostream>
using namespace std;
// Find the output of this code or Error if any
class A {
public:
	A(){
		cout << "A()" << endl;
	}
    static void show() { cout << "A "; }
};

class B : public A {
public:
	B(){
		cout << "B()" << endl;
	}
    static void show() { cout << "B "; }
};

int main() {
    A* p = new B();  
    p->show();
}

