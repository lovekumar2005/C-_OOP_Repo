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
						
			virtual	void getArea()
			{
				cout << "TwoD Area : " <<  area << endl;
			}
			
			void printTwoD()
			{
				cout << "printTwoD()" << endl;
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
			
			void printCircle()
			{
				cout << "printCircle()" << endl;
			}
		
	
};


int main()
{
	Circle c(2);
	TwoD* t = &c;

	t->getArea();		// circle - polymarphic call
	t->printTwoD();     // compile time binding
//	t->printCircle();   // Error

		
	return 0;
}

