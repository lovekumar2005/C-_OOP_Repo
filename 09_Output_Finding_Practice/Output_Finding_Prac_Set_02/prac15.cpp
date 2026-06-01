#include <iostream>
using namespace std;
// Find the output of this code or Error if any
class Base {
public:
    virtual void show(int x = 10) {
        cout << "Base()"<< x <<  endl;
    }
 
    virtual ~Base(){ 
       cout << "~Base()" << endl;
	}
};

class Derived : public Base {
public:
    void show(int x = 5) override {
        cout << "Derived()" << x <<  endl;
    }
 
    ~Derived(){
    	cout << "~Derived()" << endl;
	}
};

int main() {
    Base* ptr = new Derived();

    ptr->show();  
    ptr->show(30); 

    delete ptr;
    return 0;
}

