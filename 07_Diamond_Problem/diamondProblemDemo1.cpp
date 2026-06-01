#include <iostream>
using namespace std;

// Base class
class Person
{
public:
    Person()
    {
        cout << "Person constructor called" << endl;
    }

    void show()
    {
        cout << "I am a Person" << endl;
    }
};

// Derived class 1
class Student : public Person
{
public:
    Student()
    {
        cout << "Student constructor called" << endl;
    }
};

// Derived class 2
class Teacher : public Person
{
public:
    Teacher()
    {
        cout << "Teacher constructor called" << endl;
    }
};

// Derived class from Student and Teacher
// This creates the DIAMOND PROBLEM
class Assistant : public Student, public Teacher
{
public:
    Assistant()
    {
        cout << "Assistant constructor called" << endl;
    }
};

int main()
{
    Assistant a;

    // ERROR:
    // a.show(); 
    // Ambiguous call because Assistant has TWO copies of Person

    // Accessing Person's function using scope resolution
    a.Student::show();
    a.Teacher::show();

    return 0;
}
