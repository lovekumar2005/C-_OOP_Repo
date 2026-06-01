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
			length = 0;
			width = 0;
			cout << "Default constructor called" << endl;
		}

		Rectangle(int length, int width)
		{
			cout << "Parameterized constructor called" << endl;
			this->length = length;
			this->width = width;
		}
		

		void display()
		{
			cout << "Length: " << length << ", Width: " << width << endl;
		}

		Rectangle operator++()
		{
			++length;
			++width;
			return *this;
		}
		
		Rectangle operator++(int)
		{
			Rectangle temp = *this;
			length++;
			width++;
			return temp;           
		}
};

int main()
{
	Rectangle obj1(10, 20);
	Rectangle obj2;		
	
	cout << "\nUsing Prefix ++:" << endl;
	obj2 = ++obj1;   
	obj2.display();  
	obj1.display();  

	cout << "\nUsing Postfix ++:" << endl;
	obj2 = obj1++;   
	obj2.display();  
	obj1.display();  

	return 0;
}

