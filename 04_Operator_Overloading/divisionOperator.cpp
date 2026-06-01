#include <iostream>
using namespace std;

class Rectangle{
	private:
		int a;
		int b;
	public:
		Rectangle(){
			
		}
		
		Rectangle(int a, int b){
			this->a = a;
			this->b = b;
		}
		
		void display(){
			cout << "a: " << a << " -- " << "b: " << b << endl;
		}
		
		Rectangle operator/(const Rectangle &R){
			a = a / R.a;
			b = b / R.b;
			return *this;
		}
		
		Rectangle operator%(const Rectangle &R){
			a = a % R.a;
			b = b % R.b;
			return *this;
		}
};

int main(){
	Rectangle R1(12, 17);
	Rectangle R2(5, 3);
	Rectangle R3 = R1 / R2;
	R3.display();
	R3 = R1 % R2;
	R3.display();
	return 0;
}

