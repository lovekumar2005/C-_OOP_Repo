#include <iostream>
using namespace std;

class Demo
{
public:
    int x;

    void set(int v)
    {
        x = v;
    }

    void show()
    {
        cout << "Value: " << x << endl;
    }
};

int main()
{
    Demo d;        // Normal object
    Demo *ptr;     // Pointer to object

    ptr = &d;      // Pointer stores address of object

    // Accessing object members using pointer
    ptr->set(10);
    ptr->show();

    return 0;
}
