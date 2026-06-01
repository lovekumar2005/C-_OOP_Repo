#include<iostream>
#include<typeinfo>
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

int main()
{
	TwoD *t[5] = {	
					new Circle(2),
					new Rectangle(3,4),
					new Circle(5),
					new Rectangle(7,7),
					new Rectangle(10,10)
				 };
				 
   for(int i=0; i<5; i++)
   {
   	cout << " ----------------- " << endl;
       t[i]->getArea();
       // Checking actual type with typeid
       cout << "Object: " << typeid(*t[i]).name() << endl;

   }
    
    // Checking actual type with dynamin_cast
    // for(int i = 0; i < 5; i++)
    // {
    //     cout << "-------------------" << endl;
    //     t[i]->getArea();

    //     if (Circle* c = dynamic_cast<Circle*>(t[i])) {
    //         cout << "This is a Circle\n";

    // }
    //     else if (Rectangle* r = dynamic_cast<Rectangle*>(t[i])) {
    //         cout << "This is a Rectangle\n";

    // }
    //     else {
    //         cout << "Unknown type\n";
    //     }
    // }  
    
    for(int i = 0; i < 5; i++){
    	delete t[i];
	}
    
	return 0;
}

