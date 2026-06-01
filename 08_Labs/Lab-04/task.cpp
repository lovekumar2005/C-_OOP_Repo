/***********************************
	Lab:	04
	Task:	01
	Developer:
		Roll #:	F24BB046
		Name:	Love Kumar		
***********************************/

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    float gpa;

public:
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void setGPA(float g) {
        gpa = g;
    }

    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    float getGPA() const {
        return gpa;
    }
};

int main() {
    Student s1, s2;

    s1.setName("Ali");
    s1.setAge(20);
    s1.setGPA(3.5);

    s2.setName("Sara");
    s2.setAge(19);
    s2.setGPA(3.9);

    cout << "Student 1:" << endl;
    cout << "Name: " << s1.getName() << endl;
    cout << "Age: " << s1.getAge() << endl;
    cout << "GPA: " << s1.getGPA() << endl << endl;

    cout << "Student 2:" << endl;
    cout << "Name: " << s2.getName() << endl;
    cout << "Age: " << s2.getAge() << endl;
    cout << "GPA: " << s2.getGPA() << endl << endl;

    Student *ptr = new Student;

    ptr->setName("Ahmed");
    ptr->setAge(21);
    ptr->setGPA(3.7);

    cout << "Student (Pointer Object):" << endl;
    cout << "Name: " << ptr->getName() << endl;
    cout << "Age: " << ptr->getAge() << endl;
    cout << "GPA: " << ptr->getGPA() << endl;

    delete ptr;

    return 0;
}

