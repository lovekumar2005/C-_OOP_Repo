#include <iostream>
using namespace std;

class Book {
public:
    string title;

    void setTitle(string t) {
        title = t;
    }

    void showTitle() {
        cout << title << endl;
    }
};

int main() {
    // ARRAY OF OBJECTS
    Book b[2];

    // Accessing member function using object
    b[0].setTitle("C++ Basics");
    b[1].setTitle("OOP Concepts");

    // Displaying values using objects
    b[0].showTitle();
    b[1].showTitle();

    return 0;
}
