#include <iostream>
using namespace std;
// Find the output of this code or Error if any
class Vehicle {       // Base class
public:
    Vehicle() { cout << "Vehicle constructor called" << endl; }
    ~Vehicle() { cout << "~Vehicle()" << endl; }
};

class Engine {        // Aggregated class
public:
    Engine() { cout << "Engine constructor called" << endl; }
    ~Engine() { cout << "~Engine()" << endl; }
};

class Car : public Vehicle {  // Derived class
private:
    Engine engine;           // Aggregation
public:
    Car() { cout << "Car constructor called" << endl; }
    ~Car() { cout << "~Car()" << endl; }
};

int main() {
    Car c;   // Create Car object
}

