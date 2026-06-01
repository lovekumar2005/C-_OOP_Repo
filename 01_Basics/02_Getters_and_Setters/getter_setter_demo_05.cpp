#include<iostream>
using namespace std;

class Rectangle
{
private:
	int length;	// instance variables
	int width;	
	
public:
	int getLength()	const;
	void setLength(int);
	int getWidth();
	void setWidth(int);
	double getArea();
};

	int Rectangle::getLength()	const		// getter or accessor
	{	
		return length;
	}
	
	void Rectangle::setLength(int len)  // setter or mutator
	{
		if(len>=0)
			length = len;
		else
			cout << "Error";
	}
	
	int Rectangle::getWidth()			// getter or accessor
	{	
		return width;
	}
	
	void Rectangle::setWidth(int wid)  // setter or mutator
	{
		if(wid>=0)
			width = wid;
	}
	
	double Rectangle::getArea()
	{	
		int area = length*width;
		return area;
	}



int main()
{
	
	Rectangle R1, R2;

	cout << "R1: " << R1.getLength() << " -- " << R1.getWidth() << endl;
	cout << "R2: " << R2.getLength() << " -- " << R2.getWidth() << endl;
	
	R1.setWidth(5);
	
	cout << "R1: " << R1.getLength() << " -- " << R1.getWidth() << endl;
	cout << "R2: " << R2.getLength() << " -- " << R2.getWidth() << endl;
	
	
	return 0;
}






