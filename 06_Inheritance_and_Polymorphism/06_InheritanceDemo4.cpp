#include<iostream>
using namespace std;

class TwoD
{
	private:
			int area;
	public:
			TwoD()
			{
				cout << "TwoD()" << endl;
				area = 1;
			}
						
			void getArea()
			{
				cout << "Area of TwoD shape : "<< area << endl;
			}
			
			void getArea(int area)
			{
				cout << "Area (int) of TwoD shape : "<< area << endl;
			}
	
};

class Circle : public TwoD
{
	private:
			double radius;
			double area;
	public:
			//using classname::functionName;
			using TwoD::getArea;
		
			Circle()
			{
				cout << "Circle()" << endl;
				radius = 0;
				area = 0.0;
			}
			
			void getArea(double radius)
			{
				this->radius = radius;
				area = 3.14 * radius * radius; 
				cout << "area of Circle shape : " << area << endl;
			}
		
	
};
int main()
{
	Circle obj;
	obj.getArea();         // calls getArea() of TwoD
	obj.getArea(5);        // calls getArea(int area) of TwoD
	obj.getArea(3.4);      // calls getArea(double area) of Circle
	
	return 0;
}

