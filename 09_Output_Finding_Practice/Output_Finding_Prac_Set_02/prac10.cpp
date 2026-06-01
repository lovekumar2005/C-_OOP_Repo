#include <iostream>
using namespace std;
// Find the output of this code or Error if any
// Aggregated Class 1
class Engine {
private:
    string type;
public:
    Engine() {
        type = "Default Engine";
        cout << "Engine default constructor called" << endl;
    }
    Engine(string t) {
        type = t;
        cout << "Engine parameterized constructor called: " << type << endl;
    }
};

// Aggregated Class 2
class Tire {
private:
    int size;
public:
    Tire() {
        size = 0;
        cout << "Tire default constructor called" << endl;
    }
    Tire(int s) {
        size = s;
        cout << "Tire parameterized constructor called: " << size << endl;
    }
};

// Containing Class
class Car {
private:
    Engine engine;  // Aggregation
    Tire tire;      // Aggregation
public:
    // Car constructor chooses which constructors to call for aggregated objects
    Car() : tire(18), engine("V8")  {  // Using parameterized constructors
        cout << "Car constructor called" << endl;
    }
};

int main() {
    Car c;  // Create Car object
    return 0;
}

