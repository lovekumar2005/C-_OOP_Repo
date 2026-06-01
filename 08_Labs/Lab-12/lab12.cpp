#include <iostream>
using namespace std;
/***********************************
	Lab:	12
	Task:	01
	Developer:
		Roll #:	F24BB046
		Name:	Love Kumar			
***********************************/

class Shape{
	public:
		virtual void draw(){
			
		}
		
		void showInfo(){
			cout << "Shape Info (Base class) - Static Binding" << endl;
		}
		
		virtual ~Shape(){
			cout << "~Shape()" << endl;
		}
	
};

class Circle: public Shape{
		void draw(){
			cout << "Drawing Circle....." << endl;
		}
		
		void ShowInfo(){
			cout << "Circle Info (Child class) - Static Binding" << endl;
		}
		
		~Circle(){
			cout << "~Circle()" << endl;
		}
		
};

class Rectangle: public Shape{
		void draw(){
		    cout << "Drawing Rectangle....." << endl;	
		}
		
		void ShowInfo(){
				cout << "Rectangle Info (Child class) - Static Binding" << endl;
		}
		
		~Rectangle(){
			cout << "~Rectangle()" << endl;
		}
		
};

class Triangle: public Shape{
		void draw(){
			cout << "Drawing Traingle....." << endl;
		}
		
		void ShowInfo(){
			cout << "Triangle Info (Base class) - Static Binding" << endl;
		}
		
		~Triangle(){
			cout << "~Triangle()" << endl;
		}
};

int main(){
	Shape* s[3] = { new Circle(), new Rectangle(), new Triangle };
	
	for(int i = 0; i < 3; i++){
		s[i]->draw();   
        s[i]->showInfo();   
	}
	
	for(int i = 0; i < 3; i++){
		delete s[i];
	}
	
	return 0;
}
