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
			
			double getArea()
			{
				return  3.14 * radius * radius; 
			}
			
			void printCircle()
			{
				cout << "printCircle()" << endl;
			}		
	
};


int main()
{
	/*
	TwoD* t = new TwoD;
	cout << t->getArea() <<endl;	
	Circle* c = new Circle(2);
	cout << c->getArea() << endl;
	*/

	
	
	/*
	TwoD* t = new Circle(2);		// implicit casting
	cout << t->getArea() << endl;
	t->printTwoD();
	t->printCircle();			// compile-time error
	*/



	/*
	TwoD* t = new Circle(2);		// implicit casting
	Circle* c;
	c = static_cast <Circle*> (t);		// down-casting or explicit
	cout << c->getArea();
	c->printCircle();
	c->printTwoD();
	static_cast<Circle*>(t)->printCircle();
	*/
    
    
		
	/*
	TwoD* t = new TwoD;		// implicit casting
	Circle* c;
	//c = static_cast <Circle*> (t);		
	c = dynamic_cast <Circle*> (t);		
	
	if(!c)
	{
		cout << "Exiting....." << endl;
	}

	cout << c->getArea();
	c->printCircle();
	c->printTwoD();
    */
    
    
	return 0;
}








