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
		
		bool operator>(const Rectangle &R)
		{
			bool flag;
			if(length > R.length && width > R.width)
				flag = true;
			else
				flag = false;
			return flag;
		}
};
int main()
{
	Rectangle obj1(10, 20);
	Rectangle obj2(30, 40);
	
	if(obj1 > obj2) 		// obj1.operator(obj2)
	{
		cout << "Obj1 is greater than obj2" << endl;	
	}
	else
	{
		cout << "Obj1 is smaller than obj2" << endl;
	}
	
	
	return 0;
}
