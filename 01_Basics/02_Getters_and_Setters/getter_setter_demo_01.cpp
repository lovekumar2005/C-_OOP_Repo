#include <iostream>
using namespace std;

class Person {
private:
    // Private member variable (data hiding)
    int age;

public:
    // SETTER: used to set value of private variable
    void setAge(int a) {
        age = a;
    }

    // GETTER: used to get value of private variable
    int getAge() {
        return age;
    }
};

int main() {
    Person p;

    // Accessing private data using setter
    p.setAge(21);

    // Accessing private data using getter
    cout << "Age: " << p.getAge() << endl;

    return 0;
}
