#include <iostream>
using namespace std;
// Find the output of this code or Error if any
class Base {
public:
    virtual void show() const{
        cout << "Base()"<< endl;
    }
 
    virtual ~Base(){ 
       cout << "~Base()" << endl;
	}
};

class Derived : public Base {
public:
    void show() const override {   // without const no overriding and override keyword will give error.....
        cout << "Derived()" << endl;
    }
 
    ~Derived(){
    	cout << "~Derived()" << endl;
	}
};

int main() {
    Base* ptr = new Derived();

    ptr->show();   // if in derived class no const with fun show then no verriding then Base class show will called....

    delete ptr;
    return 0;
}

