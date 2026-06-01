#include<iostream>
using namespace std;

// Find the output of this code or Error if 

class Parent {
    public:
        virtual void show() {
            cout << "Parent Show" << endl;
        }  
};

class Child : public Parent {
    public:
        void childFunc() {
            cout << "Child function\n";
    }
};

int main(){
    
    cout << "EXAMPLE 1:" << endl;
    Child obj;
    Parent* p = &obj;   
    
    
    cout << endl << "EXAMPLE 2:" <<endl;
    Parent* p1 = new Child;
   Child* c1 = static_cast<Child*>(p1);
    c1->childFunc();   
    c1->show();
    
    
    cout << endl << "EXAMPLE 3:" <<endl;
    Parent* p2 = new Parent;
    Child* c2 = static_cast<Child*>(p2); 
    c2->childFunc();   
    c2->show();     
    
    
    cout << endl << "EXAMPLE 4:" <<endl;
    Parent* p3 = new Child;
    Child* c3 = dynamic_cast<Child*>(p3);
    if (c3 == nullptr){
        cout << "Cast failed" << endl;
    }
    else {
        c3->childFunc();  
        c3->show();
    }
        
    cout << endl << "EXAMPLE 5:" <<endl;
    Parent* p4 = new Parent;
    Child* c4 = dynamic_cast<Child*>(p4);
    if (c4 == nullptr) {
        cout << "Cast failed safely\n";
    }
}
