#include<iostream>
using namespace std;
// Find the output of this code or Error if any
class Base {
public:
    virtual void show() { cout << "Base\n"; }   // static virtual void show(){} will give error static fun can not be virtual....
    static void callShow(Base* obj) {                          // static fun can not be overrided....
        obj->show();                            
    }
};

class Derived : public Base {
public:
    void show() override { cout << "Derived\n"; }
};

int main() {
    Base* b = new Derived();
    Base::callShow(b);  
}

