#include <iostream>
using namespace std;

class Student
{
public:
    int id;

    Student(int i)
    {
        id = i;
    }

    // Object passed by VALUE (copy is created)
    void show(Student s)
    {
        cout << "ID: " << s.id << endl;
    }
};

int main()
{
    Student s1(101);

    // Object is passed by value
    // Copy constructor is called here
    s1.show(s1);

    return 0;
}
