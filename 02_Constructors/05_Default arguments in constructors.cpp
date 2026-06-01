#include<iostream>
using namespace std;

class date
{
	private:
			int day;
			int month;
			int year;
		
	public:
		date()  // zero-arg constructor
 		{
			cout << "Hello, I am from the zero-parameterized constructor" << endl;
			day = 0;
			month = 0;
			year = 0;
		}
		
		date(int data)  // one-arg constructor
 		{
			cout << "Hello, I am from the one-parameterized constructor" << endl;
			day = data;
			month = data;
			year = data;
		}
		
		date(int d=0, int m=0, int y=0)  // three-arg constructor
 		{
			cout << "Hello, I am from the three-parameterized constructor" << endl;
			day = d;
			month = m;
			year = y;
		}
		
		void print()
		{
			cout << "day : " << day << " -- month : " << month << "-- year : " << year <<endl;
		}
};

int main()
{
	// date d(10); // will give error because constructor is ambiguous
	// d.print();
	return 0;
}




