#include <iostream>
using namespace std;
// Find the output of this code or Error if any
class Test {
public:
    int x;
    Test(int a) { x = a; }

    Test& operator+=(Test t) {
        x = x + t.x;
        return *this;
    }
};

int main() {
    Test t1(5), t2(10), t3(20);
    (t1 += t2) += t3;
    cout << t1.x;
}

