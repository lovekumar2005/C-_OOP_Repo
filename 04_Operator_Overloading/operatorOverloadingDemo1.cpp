#include<iostream>
using namespace std;

class Rectangle
{
	private:
		int length;
		int width;
	
	public:
		int setwidth(int width){
			this->width = width;
		}
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
			this->process();
		}
		
		void process()
		{
			cout << "process()" << endl;
		}
	
		Rectangle operator+(const Rectangle &R)
		{
			Rectangle temp;
			temp.length = length + R.length;
	    	temp.width = width + R.width;
			return temp;
		}
		
		int operator-(Rectangle &R){
			width = width - R.width;
			return width;
		}
		
		Rectangle operator*(Rectangle &R){
			width = width * R.width;
			length = length * R.length;
			return Rectangle(width, length);
		}
};

int main()
{
	Rectangle obj1(10, 20);
	Rectangle obj2(30, 40);
	Rectangle obj3(5, 6);
	Rectangle res = obj1 + obj2;   
	res.display();
	
	obj1.setwidth(obj1 - obj2);
	obj1.display();
	
	Rectangle res2 = obj1 * obj2;
	res2.display();
	return 0;
}
