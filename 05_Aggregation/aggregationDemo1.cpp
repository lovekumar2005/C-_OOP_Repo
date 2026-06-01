#include<iostream>
using namespace std;

class Book
{
	private:
			string title;
			string author;
	public:
			Book()
			{
			   cout << "Book()" << endl;	
			}
			
			~Book(){ cout << "~Book()" << endl;}
			
			void Input(string t, string a)
			{
				title = t;
				author = a;
			}
			
			void Print()
			{
				cout << "Book Title : " << title << " -- Author : "<< author << endl;
			}
		
};

class Teacher
{
	private:
		string name;
		string designation;
	public:
		Teacher()
		{
			cout << "Teacher()" << endl;
		}
		
		~Teacher(){ cout << "~Teacher()" << endl;}
		void Input(string n, string d)
		{
			name = n;
			designation = d;
		}
		void Print()
		{
			cout << " Teacher Name : " << name << " -- Designation : " << designation << endl; 
		}
};

class Course
{
	private:
		string title;
		Book b;			// instance variable
		Teacher t;
	
	public:
		Course(){
			cout << "Course()" << endl;
		}
		Course(string title, string book_title, string author, string teacher_name, string designation)
		{
			this->title = title;
			b.Input(book_title, author);
			t.Input(teacher_name, designation);
			cout<< "Course(para)" << endl;
		}
		
	    ~Course(){ cout << "~Course()" << endl;}
	    
		void print()
		{
			cout << "Course Title : " << title << endl;
			b.Print();
			t.Print();
		}
};
int main()
{
	Course C;
	Course C1("OOP", "Learn C++", "Tonny Gaddis", "Marcin", "Professor");
//	C.b.Print();   // will give error because b is private member
//	C.print();
	return 0;
}

