#include <iostream>
using namespace std;
// Find the output of this code or Error if any
class Vehicle {
public:
    Vehicle() { cout << "Vehicle default constructor called" << endl; }
    Vehicle(string name) { cout << "Vehicle parameterized constructor called: " << name << endl; }
    ~Vehicle() { cout << "Vehicle destructor called" << endl; }
};

class Engine {
public:
    Engine() { cout << "Engine default constructor called" << endl; }
    Engine(string type) { cout << "Engine parameterized constructor called: " << type << endl; }
    ~Engine() { cout << "Engine destructor called" << endl; }
};

class Tire {
public:
    Tire() { cout << "Tire default constructor called" << endl; }
    Tire(int size) { cout << "Tire parameterized constructor called: " << size << endl; }
    ~Tire() { cout << "Tire destructor called" << endl; }
};

class Car : public Vehicle {
private:
    Engine engine;   
    Tire tire;       
public:
    Car() : tire(20), engine("V6"), Vehicle("CarBase") {
        cout << "Car constructor called" << endl;
    }

    ~Car() {
        cout << "Car destructor called" << endl;
    }
};

int main() {
    Car c;  
    return 0;
}

