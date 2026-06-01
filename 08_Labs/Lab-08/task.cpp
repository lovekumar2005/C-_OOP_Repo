#include <iostream>
using namespace std;
/***********************************
	Lab:	08
	Task:	01
	Developer:
		Roll #:	F24BB046
		Name:	Love Kumar		
***********************************/


class Teacher{
	private:
		string name;
		string department;
	public:
		Teacher(){
			
		}
		
        Teacher(string name, string department){
        	this->name = name;
        	this->department = department;
		}
		
		void displayTeacherInfo(){
			cout << "Name: " << name << " -- " << "Department: " << department << endl;
		}
};

class Course{
	private:
		string courseName;
		string courseCode;
	public:
		Course(){
			
		}
		
        Course(string courseName, string courseCode){
        	this->courseName = courseName;
        	this->courseCode = courseCode;
		}
		void displayCourseInfo(){
			cout << "Course Name: " << courseName << " -- " << "Cousre Code: " << courseCode << endl;
		}
};

class University{
	private:
		string universityName;
		Teacher t;
		Course c;
	public:
		University(){
			
		}
		
		University(string universityName, Teacher t, Course c){
			this->universityName = universityName;
			this->t = t;
			this->c = c;
		}
		
		void displayUniversity(){
			cout << "University Name: " << universityName << endl;
			c.displayCourseInfo();
			t.displayTeacherInfo();
		}		
};

int main(){
	Teacher T("Sir Hasan Khan", "IBIT");
	
	Course C("BBIT", "OOP-12");
	
	University U("Punjab University", T, C);
	U.displayUniversity();
	
	return 0;
}
