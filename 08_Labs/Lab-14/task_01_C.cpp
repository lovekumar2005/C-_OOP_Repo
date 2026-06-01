#include<iostream>
using namespace std;
/***********************************
	Lab:	14
	Task:	01
	Developer:
		Roll #: F24BB046
		Name:	Love Kumar		
***********************************/
class Employee{
	protected:
	    string empID;
	public:
		Employee(){
			cout << "Employee()" << endl;
			empID = "F24BB046";
		}
		
	    void showID(){
	    	cout << "ID: " << empID << endl;
 		}
 		
	    virtual int getSalary() = 0;
	    virtual string getRank() = 0;
	    virtual void status() = 0;
};

class Developer : virtual public Employee{
	public:
		Developer(){
			cout << "Developer()" << endl;
		}
		
		int getSalary() override
		{
			cout << "getSalary() in Developer" << endl;
		}
		
		string getRank() override
		{
			cout << "getRank() in Developer" << endl;
		}
		
		void status() override
		{
			cout << "status() in Developer" << endl;
		}
		
};

class Manager : virtual public Employee{
		public:
		Manager(){
			cout << "Manager()" << endl;
		}
		
		int getSalary() override
		{
			cout << "getSalary() in Manager" << endl;
		}
		
		string getRank() override
		{
			cout << "getRank() in Manager" << endl;			
		}
		
		void status() override
		{
			cout << "status() in Manager" << endl;
		}
};

class TechLead : public Developer, public Manager{
	public:
		TechLead(){
			cout << "TechLead()" << endl;
		}
		
		int getSalary() override
		{
			cout << "getSalary() in TechLead" << endl;
		}
		
		string getRank() override
		{
			cout << "getRank() in TechLead" << endl;			
		}
		
		void status() override
		{
			cout << "status() in TechLead" << endl;
		}
	
};

int main(){
	//Part-C
	Employee* E = new TechLead();
	E->status();
	E->getRank();
	E->getSalary();
	return 0;
}
