#include<iostream>
using namespace std;

class TwoD
{
	private:
			double area;
	public:
			TwoD()
			{
				cout << "TwoD()" << endl;
				area = 1;
			}
						
		virtual	double getArea()
			{
				return area;
			}	
};

class Circle : public TwoD
{
	private:
			double radius;
	public:
		
			Circle(double radius)
			{
				cout << "Circle(double)" << endl;
				this->radius = radius;
			}
	
			double getArea()
			{
				return  3.14 * radius * radius; 
			}
		
	
};

class Rectangle : public TwoD
{
	private:
			double length;
			double width;
	public:
		
			Rectangle(double length, double width)
			{
				cout << "Rectangle(double, double)" << endl;
				this->length = length;
				this->width = width;
			}
			
			double getArea()
			{
				return  length*width; 
			}
	
};

int main()
{
	TwoD* t;
	
	Circle c(2);
	t = &c;
	cout << t->getArea();
	
	Rectangle r(2,3);
	t= &r;
	cout << t->getArea();
	
	return 0;
}

