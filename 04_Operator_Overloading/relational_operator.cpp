#include<iostream>
using namespace std;

class Rectangle
{
	private:
		int length;
		int width;
	
	public:
		Rectangle()	
		{
			cout << "default constructor" << endl;
		}
		Rectangle(int length, int width)
		{
			cout << "Param constructor " << endl;
			this->length = length;
			this->width = width;
			// this pointer refers to the current object
		}
		
		void display()
		{
			cout << "display()" << endl;
			cout << "Length : " << length << endl;
			cout << "Width : " << width << endl;
		}

		Rectangle operator=(const Rectangle &R)
		{
			length = R.length;
			width = R.width;
			return *this;
		}

};
int main()
{
	Rectangle obj1(10, 20);
	Rectangle obj2(30, 40);
	Rectangle obj3;
	
	obj3 = obj1 = obj2;	
	obj3.display();
	
	return 0;
}
