#include <iostream>
using namespace std;
// Find the output of this code or Error if any
class Test {
    int x;
public:
    Test(int a = 0) { x = a; }

    Test operator++() {        // prefix
        return Test(++x);
    }

    Test operator++(int) {     // postfix
        return Test(x++);
    }

    void show() {
        cout << x << " ";
    }
};

int main() {
    Test t(5);
    Test a = ++t;
    Test b = t++;
    t.show();
    a.show();
    b.show();
}

