#include<iostream>
using namespace std;

class Person
{
	protected:
			string name;
			int age;
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
				cout << "Please enter age : ";
				cin >> age;
				
				cout << " Please enter name : ";
				cin.ignore();
				getline(cin, name);
				
				cout << "Please enter rank";
				cin.ignore();
				getline(cin, rank);

				cout << "Please enter dept";
				cin.ignore();
				getline(cin, dept);
			}
			
			void OutputEmployee()
			{
				cout << "Name : " << name << endl;
				cout << "Age : " << age << endl;
				cout << "Rank : " << rank << endl;
				cout << "Department : " << dept << endl;
			}
};

int main()
{	
	Employee obj1;
	obj1.InputEmployee();
	obj1.OutputEmployee();
	return 0;
}
