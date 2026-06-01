#include<iostream>
using namespace std;

class Person
{
	private:
			string name;
			int age;
	public:
			Person()
			{
				
			}
			
			void InputPerson()
			{
				cout << "Please enter age : ";
				cin >> age;
				
				cout << " Please enter name : ";
				cin.ignore();
				getline(cin, name);
			}
			
			void OutputPerson()
			{
				cout << "Name : " << name << endl;
				cout << "Age : " << age << endl;
			}
};

class Employee : public Person
{
	private:
		 	string rank;
		 	string dept;
	
	public:
			Employee()
			{
				
			}
		
			void InputEmployee()
			{
				
				cout << "Please enter rank : ";
				cin.ignore();
				getline(cin, rank);

				cout << "Please enter dept : ";
				cin.ignore();
				getline(cin, dept);
			}
			
			void OutputEmployee()
			{											
				cout << "Rank : " << rank << endl;
				cout << "Department : " << dept << endl;
			}
};

int main()
{
	/*
	Person p;
	p.InputPerson();
	p.OutputPerson();
	
	Employee e;
	e.InputEmployee();
	e.OutputEmployee();
	*/
	
	
	Employee obj;
	obj.InputPerson();			// belongs to Person
	obj.InputEmployee();		// belongs to Employee
	
	obj.OutputPerson();
	obj.OutputEmployee();
	
	
	/*
	Employee obj1;
	obj1.InputEmployee();
	obj1.OutputEmployee();
	*/
	return 0;
}
