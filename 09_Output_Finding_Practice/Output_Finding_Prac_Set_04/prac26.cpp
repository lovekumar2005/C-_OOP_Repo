#include<iostream>
using namespace std;
// Find the output of this code or Error if any
class A {
public:
	A(){
		cout << "A()" << endl;
	}
    virtual void show() { cout << "A "; }
    ~A(){
		cout << "~A()" << endl;
	}
};


class B : public A {
public:
	B(){
		cout << "B()" << endl;
	}
    void show() { cout << "B "; }
    ~B(){
		cout << "~B()" << endl;
	}
};

int main() {
    A a = B(); // B() is temporary obj and its des called immediately after this line....
    a.show();
}
