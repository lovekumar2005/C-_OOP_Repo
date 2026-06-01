#include <iostream>
using namespace std;
/***********************************
	Lab:	10
	Task:	01
	Developer:
		Roll #:	F24BB046
		Name:	Love Kumar		
***********************************/

class Employee{
	protected:
		string name;
		int id;
		
	public:
		Employee(){
			name = "Love";
			id =  046;
		}
		
		virtual double getSalary() {
		
		}
		
		void showInfo(){
			cout << "Name: " << name << " --  " <<"ID: " << id << endl;
		}
};

class Teacher : public Employee{
	private:
		double payPerHour;
		int hours;
		
	
	public:
		Teacher(){

		}
		
		Teacher(double payPerHour, int hours){
			this->payPerHour = payPerHour;
			this->hours = hours;
		}
		
        double getSalary(){
		    return payPerHour * hours;
	    }	    
};

class Manager : public Employee{
	private:
		double fixedSalary;
		double bonus;
	
	public:
		Manager(){
			
		}
		
		Manager(double fixedSalary, double bonus){
			this->bonus = bonus;
			this->fixedSalary = fixedSalary;
		}
		
        double getSalary(){
		    return fixedSalary + bonus;
	    }
};

class Staff : public Employee{
	private:
		double monthlySalary;
		
	public:
		Staff(){
			
		}
		
		Staff(double monthlySalary){
			this->monthlySalary = monthlySalary;
		}
		
	    double getSalary(){
		    return monthlySalary;
	    }
};

int main(){
	Employee* emp;
	
	Teacher t(20000.0, 5);
	emp = &t;
	t.showInfo();
	cout << "Salary: " << emp->getSalary() << endl;
	
	Manager m(100000.0, 1200);
	emp = &m;
	m.showInfo();
	cout << "Salary: " <<emp->getSalary() << endl;
	
	Staff s(100000.0);
	emp = &s;
	s.showInfo();
	cout << "Salary: " << emp->getSalary() << endl;
	
	return 0;
}

