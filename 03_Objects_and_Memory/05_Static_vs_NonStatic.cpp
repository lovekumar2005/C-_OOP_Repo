#include <iostream>
using namespace std;

class Sample
{
public:
    int x;             // Non-static member
    static int y;      // Static member

    Sample(int a)
    {
        x = a;
        y++;
    }
};

// Static member definition
int Sample::y = 0;

int main()
{
    Sample s1(10);
    Sample s2(20);

    cout << "s1.x = " << s1.x << endl;
    cout << "s2.x = " << s2.x << endl;

    // Static member accessed using class name
    cout << "Static y = " << Sample::y << endl;

    return 0;
}
