#include <iostream>
using namespace std;
// Find the output of this code or Error if any
class Base1 {
public:
	int x = 4;
	Base1(){
		cout << "Base1()" << endl;
	}
    void show() { cout << "Base1 "; }
};

class Base2 {
public:
	Base2(){
		cout << "Base2()" << endl;
	}
    void show() { cout << "Base2 "; }
};

class Derived : private Base1, public Base2 {
public:
	Derived(){
		cout << "Derived()" << endl;
		Base1::show();  // we can access Base1's member in this class,,, but outside form this class not bs private...
	}
    void display() { cout << "Derived "; }
//    void show(){ cout << "Show() in Derived" << endl;}
};

int main() {
    Derived d;
    d.display();
    d.show(); 
    d.Base1::show();  
    d.Base2::show(); 
    return 0;
}

