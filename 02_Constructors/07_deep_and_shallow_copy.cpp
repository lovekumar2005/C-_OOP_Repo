#include<iostream>
using namespace std;

class Student
{
	private:
			string name;
			int *marks;
			int size;
	public:
			Student()
			{
				cout << "Default constructor" << endl;
				name = "Ali";
				
				cout << "How many subjects you are studying : " ;
				cin >> size;
				
				marks = new int[size];
				for(int i=0; i<size; i++)
					cin >> marks[i];	
			}	
			
			Student(Student &obj)	// copy constructor
			{
				cout << "Copy constructor " << endl;
				name = obj.name;
				//marks = obj.marks  ; 	// shallow copy
				
				size = obj.size;
				marks = new int[size];
				for(int i=0; i<size; i++)		
					marks[i] = obj.marks[i];	// deep copy
			}
						
			void print()
			{
				cout << "Name : " << name << " -- marks : " << marks[0] << "-- " << marks[1] << "--" << marks[2] << endl; 
			}
			
			void updateInfo()
			{
				name = "ABC";
				for(int i=0; i<size; i++)
				    marks[i] = -100;
							
			}
			
			~Student()
			{
				delete [] marks;
				cout << "Destructor calling " << endl;
			}
};

int main()
{
	Student s1;
	Student s2 = s1;
	
	s1.print();
	s2.print();
	
	cout << "Updating Information " << endl;	

	s1.updateInfo();
	
	s1.print();
	s2.print();

	return 0;
}










