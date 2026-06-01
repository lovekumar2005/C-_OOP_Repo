#include <iostream>
using namespace std;

class Account
{
private:
    int number;
    double balance;

public:
    Account(int n, double b)
    {
        number = n;
        balance = b;
    }

    // Copy constructor
    // This constructor is NOT called when object is passed by reference
    Account(const Account &ob)
    {
        cout << "Copy constructor called" << endl;
        number = ob.number;
        balance = ob.balance;
    }

    // MEMBER FUNCTION
    // Object is received by REFERENCE (address)
    // No copy of object is created
    // Copy constructor is NOT called here
    void print(const Account &ob)
    {
        cout << "Account Number: " << ob.number << endl;
        cout << "Balance: " << ob.balance << endl;
    }
};

int main()
{
    Account obj(123123, 5000.0);

    // Passing object by reference
    // Only address is passed, not a copy
    // Therefore, copy constructor is NOT called
    obj.print(obj);

    return 0;
}
