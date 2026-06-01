#include <iostream>
#include <string>

using namespace std;

class Faculty

private:
    int id;
    string firstName;
    string lastName;
    string qualification;
    float salary;

public:

    void setId(int i)
    {
        if (i >= 1001 && i <= 1065)
            id = i;
        else
            id = 0;
    }

    void setFirstName(string f)
    {
        firstName = f;
    }

    void setLastName(string l)
    {
        lastName = l;
    }

    void setQualification(string q)
    {
        qualification = q;
    }

    void setSalary(float s)
    {
        if (s >= 20000.00 && s <= 100000.00)
            salary = s;
        else
            salary = -1;
    }


    int getId()
    {
        return id;
    }

    string getFirstName()
    {
        return firstName;
    }

    string getLastName()
    {
        return lastName;
    }

    string getQualification()
    {
        return qualification;
    }

    float getSalary()
    {
        return salary;
    }

    Faculty(int i, string f, string l, string q)
    {
        setId(i);
        firstName = f;
        lastName = l;
        qualification = q;
        salary = -1;
    }

    Faculty(int i, string f, string q)
    {
        setId(i);
        firstName = f;
        lastName = "";
        qualification = q;
        salary = -1;
    }

    Faculty(int i, string f, string l, string q, float s)
    {
        setId(i);
        firstName = f;
        lastName = l;
        qualification = q;
        setSalary(s);
    }

    Faculty(const Faculty &f)
    {
        id = f.id;
        firstName = f.firstName;
        lastName = f.lastName;
        qualification = f.qualification;
        salary = f.salary;
    }

    ~Faculty()
    {
        cout << "Destructor executed...\n";
    }

    void set(int i, string f, string l, string q, float s)
    {
        setId(i);
        firstName = f;
        lastName = l;
        qualification = q;
        setSalary(s);
    }

    void read()
    {
        cout << "Enter ID: ";
        cin >> id;
        setId(id);

        cin.ignore();
        cout << "Enter First Name: ";
        getline(cin, firstName);

        cout << "Enter Last Name: ";
        getline(cin, lastName);

        cout << "Enter Qualification: ";
        getline(cin, qualification);

        cout << "Enter Salary: ";
        cin >> salary;
        setSalary(salary);
    }

    void write()
    {
        cout << "ID           : " << id << endl;
        cout << "First Name   : " << firstName << endl;
        cout << "Last Name    : " << lastName << endl;
        cout << "Qualification: " << qualification << endl;
        cout << "Salary       : " << salary << endl;
        cout << "-----------------------------\n";
    }

    bool isPostGraduate()
    {
        if (qualification == "MS" || qualification == "Phd" || qualification == "PhD")
            return true;
        else
            return false;
    }

    float getTakeHomeSalary()
    {
        if (salary >= 20000.00)
        {
            float tax = salary * 0.07;
            return salary - tax;
        }
        else
        {
            return -1;
        }
    }

    bool isJoined()
    {
        if (salary >= 20000.00)
            return true;
        else
            return false;
    }
;

int main()
{
    Faculty f1(1005, "Ali", "Khan", "MS", 50000);
    Faculty f2(1010, "Sara", "Ahmed", "PhD");
    Faculty f3(1020, "Usman", "BS");

    cout << "\nFaculty 1 Data:\n";
    f1.write();
    cout << "Post Graduate: " << f1.isPostGraduate() << endl;
    cout << "Take Home Salary: " << f1.getTakeHomeSalary() << endl;
    cout << "Joined: " << f1.isJoined() << endl;

    cout << "\nFaculty 2 Data:\n";
    f2.setSalary(30000);
    f2.write();

    cout << "\nFaculty 3 Data (Using Read Function):\n";
    f3.read();
    f3.write();

    return 0;
}
