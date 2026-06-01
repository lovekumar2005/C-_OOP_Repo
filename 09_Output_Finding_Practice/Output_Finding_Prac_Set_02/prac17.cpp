#include<iostream>
using namespace std;
// Find the output of this code or Error if any
class Base {
public:
    virtual void show() {
        cout << "Base show" << endl;
    }
};

class Derived : private Base {  
public:
    void show() {
        cout << "Derived show" << endl;
    }
};

int main() {
    Derived d;
    Base* ptr = &d; 
}

