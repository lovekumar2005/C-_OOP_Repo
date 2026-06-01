#include<iostream>
using namespace std;
// Find the output of this code or Error if any
class A{public: virtual void f(){cout<<"A";}}; 
class B:public A{public: void f()override{cout<<"B";}}; 


int main(){
A().f(); B().f();
}
