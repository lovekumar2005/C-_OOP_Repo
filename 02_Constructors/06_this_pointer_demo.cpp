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
			this->process();
		}
		
		void process()
		{
			cout << "process()" << endl;
		}
	
	
};

int main()
{
	Rectangle obj(10, 20);
	obj.display();
	return 0;
}