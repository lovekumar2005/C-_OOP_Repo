#include <iostream>
using namespace std;
// Find the output of this code or Error if any
class Test {
public:
    int x;
    Test(int a) { x = a; }

    Test operator++() {
        x++;
        return *this;
    }
};

int main() {
    Test t(5);
    ++(++t);       //6
    cout << t.x;
}

