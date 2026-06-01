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
		
		bool operator&&(const Rectangle &R){
			bool flag;
			if((a && R.a) && (b && R.b))
				flag = true;
			else
				flag = false;
			return flag;
		}
		
};

int main(){
	Rectangle R1(0, 17);
	Rectangle R2(5, 3);
	
	if(R1 && R2){
		cout << "Result is true" << endl;
	}
	else{
		cout << "result is false" << endl;
	}

	return 0;
}

