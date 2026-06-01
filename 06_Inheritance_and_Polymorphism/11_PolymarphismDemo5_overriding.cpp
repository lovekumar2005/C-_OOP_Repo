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
			
			virtual ~TwoD()
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
			
			void getArea() override
			{
				cout << "Circle Area :"  << 3.14 * radius * radius << endl; 
			}
			
			
			~Circle()
			{
				cout << "~Circle" << endl;
			}
};


int main()
{	
	TwoD* t = new Circle(2);
	t->getArea();
	delete t;
		
	return 0;
}

