#include<iostream>
using namespace std;

class Rectangle
{
	// attributes
private:
	int length;
	int width;	
	
public:
	int getLength()			// getter or accessor
	{	
		return length;
	}
	void setLength(int len)  // setter or mutator
	{
		if(len>=0 && len <= 10)
			length = len;
	}
	
	int getWidth()			// getter or accessor
	{	
		return width;
	}
	void setWidth(int wid)  // setter or mutator
	{
		if(wid>=0 && wid <= 20)
			width = wid;
	}
	
	double getArea()
	{
		return length*width;
	}
};

int main()
{
	
	Rectangle obj;		//object creation
 	Rectangle obj1;		//object creation	
	
	// obj.length = 10; // Error
	obj.setLength(10);
	obj.setWidth(15);
	
	cout << "Length : " << obj1.getLength() << endl;
	cout << "Width : " << obj1.getWidth() << endl;
	
	
	return 0;
}

