#include<iostream>
using namespace std;
// Find the output of this code or Error if any
class A{
		public:
		A(){
			cout << "A()" << endl;
		}
};

class B: public A{
		public:
		B(){
			cout << "B()" << endl;
		}
		
		B(int a, int b){
			cout << "B(a,b)" << endl;
		}
};

class C: public B{
	public:
		C():B(2,3){
			cout << "C()" << endl;
		}
};

int main(){
	C c;
	return 0;
}
