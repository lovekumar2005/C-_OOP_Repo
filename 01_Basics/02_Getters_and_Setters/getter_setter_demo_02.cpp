#include <iostream>
using namespace std;

class Account {
private:
    double balance;

public:
    // Setter with validation logic
    void setBalance(double b) {
        if (b >= 0)
            balance = b;
        else
            balance = 0;
    }

    // Getter
    double getBalance() {
        return balance;
    }
};

int main() {
    Account a;

    // Setting invalid value
    a.setBalance(-500);

    // Getting value using getter
    cout << "Balance: " << a.getBalance() << endl;

    return 0;
}
