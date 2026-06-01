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
		}
		
	    void showID(){
	    	cout << "ID: " << empID << endl;
 		}
 		
	    virtual int getSalary() = 0;
	    virtual string getRank() = 0;
	    virtual void status() = 0;
};

class Developer : public Employee{
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

class Manager : public Employee{
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
	
};

int main(){
	//Part-A
	TechLead t1;
	t1.showID();
	return 0;
}
