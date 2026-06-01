#include <iostream>
using namespace std;
// Find the output of this code or Error if any
class Test {
public:
    int x;
    Test(int a = 0) { x = a; }

    Test operator+(Test t) {
        Test temp;
        temp.x = x + t.x;
        return temp;
    }
};

int main() {
    cout << (Test(5) + Test(10)).x;  // Test(5) is without name (test t).. so it is temporary object
}

