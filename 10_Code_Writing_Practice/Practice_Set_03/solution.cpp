#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    string firstName;
    string lastName;
    string SSN;

public:
    Employee(string f, string l, string s)
        : firstName(f), lastName(l), SSN(s) {}

    void setFirstName(string f) { firstName = f; }
    void setLastName(string l) { lastName = l; }
    void setSSN(string s) { SSN = s; }

    string getFirstName() const { return firstName; }
    string getLastName() const { return lastName; }
    string getSSN() const { return SSN; }

    virtual void print() const
    {
        cout << "Name: " << firstName << " " << lastName << endl;
        cout << "SSN : " << SSN << endl;
    }

    virtual double earnings() const = 0;

    virtual ~Employee() {}
};

class SalariedEmployee : public Employee
{
private:
    double weeklySalary;

public:
    SalariedEmployee(string f, string l, string s, double ws = 0)
        : Employee(f, l, s), weeklySalary(ws) {}

    void setWeeklySalary(double ws) { weeklySalary = ws; }
    double getWeeklySalary() const { return weeklySalary; }

    void print() const override
    {
        Employee::print();
        cout << "Weekly Salary: " << weeklySalary << endl;
    }

    double earnings() const override
    {
        return weeklySalary;
    }
};

class HourlyEmployee : public Employee
{
private:
    double wage;
    double hours;

public:
    HourlyEmployee(string f, string l, string s, double w = 0, double h = 0)
        : Employee(f, l, s), wage(w), hours(h) {}

    void setWage(double w) { wage = w; }
    void setHours(double h) { hours = h; }

    double getWage() const { return wage; }
    double getHours() const { return hours; }

    void print() const override
    {
        Employee::print();
        cout << "Wage : " << wage << endl;
        cout << "Hours: " << hours << endl;
    }

    double earnings() const override
    {
        return wage * hours;
    }
};

class CommissionEmployee : public Employee
{
private:
    double grossSales;
    double commissionRate;

public:
    CommissionEmployee(string f, string l, string s,
                       double gs = 0, double cr = 0)
        : Employee(f, l, s), grossSales(gs), commissionRate(cr) {}

    void setGrossSales(double gs) { grossSales = gs; }
    void setCommissionRate(double cr) { commissionRate = cr; }

    double getGrossSales() const { return grossSales; }
    double getCommissionRate() const { return commissionRate; }

    void print() const override
    {
        Employee::print();
        cout << "Gross Sales    : " << grossSales << endl;
        cout << "CommissionRate: " << commissionRate << endl;
    }

    double earnings() const override
    {
        return grossSales * commissionRate;
    }
};

class BasePlusCommissionEmployee : public CommissionEmployee
{
private:
    double baseSalary;

public:
    BasePlusCommissionEmployee(string f, string l, string s,
                               double gs = 0, double cr = 0, double bs = 0)
        : CommissionEmployee(f, l, s, gs, cr), baseSalary(bs) {}

    void setBaseSalary(double bs) { baseSalary = bs; }
    double getBaseSalary() const { return baseSalary; }

    void print() const override
    {
        CommissionEmployee::print();
        cout << "Base Salary: " << baseSalary << endl;
    }

    double earnings() const override
    {
        return CommissionEmployee::earnings() + baseSalary;
    }
};

int main()
{
    SalariedEmployee se("Ali", "Khan", "111-11-1111", 50000);
    HourlyEmployee he("Sara", "Ahmed", "222-22-2222", 500, 40);
    CommissionEmployee ce("Usman", "Raza", "333-33-3333", 200000, 0.10);
    BasePlusCommissionEmployee bpce("Ayesha", "Malik", "444-44-4444", 150000, 0.08, 30000);

    Employee* eptr[4];
    eptr[0] = &se;
    eptr[1] = &he;
    eptr[2] = &ce;
    eptr[3] = &bpce;

    cout << "\n===== Employee Details =====\n";
    for (int i = 0; i < 4; i++)
    {
        eptr[i]->print();
        cout << "Earnings: " << eptr[i]->earnings() << endl;
        cout << "-----------------------------\n";
    }

    return 0;
}
