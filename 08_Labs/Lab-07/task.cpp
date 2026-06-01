#include <iostream>
using namespace std;
/***********************************
	Lab:	07
	Task:	01
	Developer:
		Roll #:	F24BB046
		Name:	Love Kumar			
***********************************/
class Distance {
    private:
    	int feet;
    	float inches;
	public:
		Distance(){
			
		}
	    Distance(int feet, float inches){
	    	this->feet = feet;
	    	this->inches = inches;
		}
		
		void display(){
			cout << "Feet : " << feet << " -- " << "Inches: " << inches << endl;
		}
		
		Distance operator+(const Distance &D){
			Distance temp;
			temp.inches = inches + D.inches;
			temp.feet = feet + D.feet;
			return temp;
		}
		
		Distance operator-(const Distance &D){
			Distance temp;
			temp.inches = inches - D.inches;
			temp.feet = feet - D.feet;
			return temp;
		}	
};

int main(){
	Distance d1(12,2.3);
	Distance d2(10,1.5);
	cout << "d1 = ";
	d1.display();
	cout << "d2 = ";
	d2.display();
	Distance d3 = d1+d2;
	Distance d4 = d1-d2;
	cout << "Sum of d1 and d2 is: " << endl;
	d3.display();
	cout << "Difference of d1 and d2 is : " << endl;
	d4.display();
	
	return 0;
}
