#include <iostream>
using namespace std;

class Book{
	private:
		    string title;
		    string author;
	public:
		    Book(){
		    	
			}
			
			void settitle(string title){
				this->title = title;
			}
			
			string gettitle(){
				return title;
			}
			
			void setauthor(string author){
				this->author = author;
			}
			
			string getauthor(){
				return author;
			}
			
			void print(){
				cout << "Book Title: " << title << " -- " << "Author Name: " << author << endl;
			}
};

class Teacher{
	private:
		    string name;
		    string designation;
	public:
		    Teacher(){
		    	
			}
			
			void setname(string name){
				this->name = name;
			}
			
			string getname(){
				return name;
			}
			
			void setdesignation(string designation){
				this->designation = designation;
			}
			
			string getdesignation(){
				return designation;
			}
			
			void print(){
				cout << "Teacher Name: " << name << " -- " << "Designation: " << designation << endl;
			}
};

class Course{
	private:
		    string title;
		    Book b;
		    Teacher t;
	public:
		    Course(){
		    	
			}
			
			Course(string title, string book_title, string author, string teacher_name, string designation){
				this->title = title;
				b.settitle(book_title);
				b.setauthor(author);
				t.setname(teacher_name);
				t.setdesignation(designation);
			}
			
			void print(){
				cout << "Course Title: " << title << endl;
				b.print();
				t.print();
			}
		    
};
int main(){
	Course c("OOP", "Learn C++", "Tonny Gaddis", "Hassan Khan", "Professor");
	c.print();
	return 0;
}
