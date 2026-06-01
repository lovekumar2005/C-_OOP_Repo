#include<iostream>
using namespace std;
// Find the output of this code or Error if any
class A {
public:
    A(){ 
	    cout << "A()" << endl; 
		show(); 
	}
	
    virtual void show() { 
	cout << "A " << endl;
	 }
};

class B : public A {
public:
	B(){
		cout << "B()" << endl;
		show();
	}
    void show() { cout << "B "; }
};

int main() {
    B obj;
}
