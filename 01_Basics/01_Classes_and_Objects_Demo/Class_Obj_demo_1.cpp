#include <iostream>
using namespace std;

// This is a CLASS
class Car {
public:
    // These are MEMBER VARIABLES (data members)
    string brand;
    int year;

    // This is a MEMBER FUNCTION
    void show() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    // c1 is an OBJECT of class Car
    Car c1;

    // Assigning values to member variables using object
    c1.brand = "Toyota";
    c1.year = 2022;

    // Calling member function using object
    c1.show();

    return 0;
}
