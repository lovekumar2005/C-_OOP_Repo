#include<iostream>
using namespace std;

class Person
{
	public:
		string name;
		
		Person()
		{
			cout << "Person()" << endl;	
		}	
		
		~Person()
		{
			cout << "~Person()" << endl;
		}
};

class Teacher : virtual public Person
{
	public:
		Teacher()
		{
			cout << "Teacher()" << endl;
		}
		~Teacher()
		{
			cout << "~Teacher()" << endl;
		}
};

class Researcher :  public Person
{
	public:
		Researcher()
		{
			cout << "Researcher()" << endl;
		}
		~Researcher()
		{
			cout << "~Researcher()" << endl;
		}
};

class Professor : public Teacher, public Researcher
{
	public:
		Professor()
		{
			cout << "Professor()" << endl;
		}
		~Professor()
		{
			cout << "\n\n\n ~Professor()" << endl;
		}
};

int main()
{
	Professor p;
	
	/*
	p.name = "Love";
	cout << p.name << endl;  // this will work correct when both Teacher and Reseacher class inherits person as virtual
	*/
	
	/*
	p.Teacher::name = "Marcin";
	cout << p.Teacher::name << endl;
	
	p.Researcher::name = "Kristin";
	cout << p.Researcher::name << endl;
	*/
	
	return 0;
}

