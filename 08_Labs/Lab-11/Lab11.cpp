#include <iostream>
using namespace std;
/***********************************

Lab: 11
Task: 01
Developer:
    Roll #: F24BB046
    Name: Love Kumar

***********************************/
class Shape{
	protected:
		string name;
		string type;
	
	public:
		Shape(){
			name = "XYZ";
			type = "ABC";
		}
		
		Shape(string name, string type){
			this->name = name;
			this->type = type;
		}
		
		virtual double getArea(){
			return 0;
		}
		
        virtual double getVolume(){
        	return 0;
		}
		
		void displayInfo(){
			cout << "Name : " << name << " -- " << "Type : " << type << endl;
		}
};

class Triangle: public Shape{
	protected:
	    double base;
		double height;
	public:
	    Triangle(){}
	    
	    Triangle(double base, double height) : Shape("Triangle", "2D"){
	    	this->base = base;
	    	this->height = height;
		}

		double getArea(){
			return 0.5 * base * height;
		}
		
        double getVolume(){
        	return 0;
		}	
};

class Cube: public Shape{
	protected:
        double side;
	public:
		Cube(){}
		
		Cube(double side) : Shape("Cube","3D"){
			this->side = side;
		}
	
		double getArea(){
			return 6 * side * side;
		}
		
        double getVolume(){
        	return side * side * side;
		}
};

class Cylinder: public Shape{
	protected:
        double radius;
		double height;
	public:
		Cylinder(){}
		
		Cylinder(double radius, double height) : Shape("Cylinder","3D"){
			this->radius = radius;
			this->height = height;
		}
	
		double getArea(){
			return 2 * 3.14 * radius * (radius + height);
		}
		
        double getVolume(){
        	return 3.14 * radius * radius * height;
		}
};

int main(){
	Shape *sh;
	
	Triangle T(3.0, 5.0);
	sh = &T;
	sh->displayInfo();
	cout << "Area : " << sh->getArea() << endl;
	cout << "Volume : " << sh->getVolume() << endl;
	cout << "----------------------------" << endl;
	
	Cube B(4.0);
	sh = &B;
	sh->displayInfo();
	cout << "Area : " << sh->getArea() << endl;
	cout << "Volume : " << sh->getVolume() << endl;
	cout << "----------------------------" << endl;
	
	Cylinder C(2.0, 1.0);
	sh = &C;
	sh->displayInfo();
	cout << "Area : " << sh->getArea() << endl;
	cout << "Volume : " << sh->getVolume() << endl;
	
	return 0;
}
