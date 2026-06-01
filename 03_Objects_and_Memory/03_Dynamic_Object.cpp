#include <iostream>
using namespace std;

class Test
{
public:
    Test()
    {
        cout << "Constructor called" << endl;
    }

    ~Test()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    // Dynamic object creation
    Test *t = new Test();

    // Deleting dynamic object
    delete t;

    return 0;
}
