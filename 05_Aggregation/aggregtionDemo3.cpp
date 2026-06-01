#include <iostream>
using namespace std;

class Teacher{
	private:
		string name;
		string department;
	public:
		Teacher(){
			cout << "Teacher()" << endl;
		}
		
        Teacher(string name, string department){
        	this->name = name;
        	this->department = department;
        	cout << "Teacher(para)" << endl;
		}
		
		void displayTeacherInfo(){
			cout << "Name: " << name << " -- " << "Department: " << department << endl;
		}
		
		~Teacher(){
			cout << "~Teacher()" << endl;
		}
};

class Course{
	private:
		string courseName;
		string courseCode;
	public:
		Course(){
			cout << "Course()" << endl;
		}
		
        Course(string courseName, string courseCode){
        	this->courseName = courseName;
        	this->courseCode = courseCode;
        	cout << "Course(para)" << endl;
		}
		void displayCourseInfo(){
			cout << "Course Name: " << courseName << " -- " << "Cousre Code: " << courseCode << endl;
		}
		~Course(){
			cout << "~Course()" << endl;
		}
};

class University{
	private:
		string universityName;
		Teacher t;
		Course c;
	public:
		University(){
			cout << "University()" << endl;
		}
		
		University(string universityName, Teacher t, Course c){
			this->universityName = universityName;
			this->t = t;
			this->c = c;
			cout << "University(para)" << endl;
		}
		
		void displayUniversity(){
			cout << "University Name: " << universityName << endl;
			c.displayCourseInfo();
			t.displayTeacherInfo();
			
		}
		~University(){
			cout << "~University()" << endl;
		}		
};

int main(){
	Teacher T("Sir Hasan Khan", "IBIT");
	
	Course C("BBIT", "OOP-12");
	
	University U("Punjab University", T, C);
	U.displayUniversity();
	
	return 0;
}
