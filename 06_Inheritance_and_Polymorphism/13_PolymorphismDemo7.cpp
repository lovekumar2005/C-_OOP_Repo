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
			}
			
			
			TwoD(double area)
			{
				cout << "TwoD(double)" << endl;
				this->area = area;
			}
						
			virtual	void getArea()
			{
				cout << "TwoD Area : " <<  area << endl;
			}
			
			
			~TwoD()
			{
				cout << "~TwoD" << endl;
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
			
			void getArea()
			{
				cout << "Circle Area :"  << 3.14 * radius * radius << endl; 
			}
			
			
			~Circle()
			{
				cout << "~Circle" << endl;
			}
		
};


class Rectangle : public TwoD
{
	private:
			double length, width;
	public:
		
			Rectangle(double len, double wid)
			{
				cout << "Rectangle(double, double)" << endl;
				this->length = len;
				this->width = wid;
			}
			
			void getArea()
			{
				cout << "Rectangle Area : " <<  length * width << endl;
			}
			
			~Rectangle()
			{
				cout << "~Rectangle()" << endl;
			}
		
};

void process(TwoD* t)
{
    t->getArea();
}


int main()
{
	Circle c(2);
	process(&c);		// process( new Circle(2) );
	
	Rectangle r(2,3);
	process(&r);			// process( new Rectangle(2,3) );
	
		
	return 0;
}

