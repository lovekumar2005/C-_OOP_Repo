#include <iostream>
using namespace std;

class Counter
{
public:
    static int count;   // Static data member

    Counter()
    {
        count++;
    }
};

// Static member definition
int Counter::count = 0;

int main()
{
    Counter c1, c2, c3;

    // Shared among all objects
    cout << "Count: " << Counter::count << endl;

    return 0;
}
