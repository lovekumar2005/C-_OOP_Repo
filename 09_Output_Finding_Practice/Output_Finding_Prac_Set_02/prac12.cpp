#include <iostream>
using namespace std;
// Find the output of this code or Error if any
class Vehicle {
public:
	
    Vehicle() { cout << "Vehicle()" << endl; }
    Vehicle(string name) { cout << "Vehicle(para) " << endl; }
    virtual ~Vehicle() { cout << "~Vehicle()" << endl; }
    virtual void start() { cout << "start in Vehicle" << endl; }
    
};

class Engine {
public:
	
    Engine() { cout << "Engine()" << endl; }
    Engine(string type) { cout << "Engine(para)" << endl; }
    ~Engine() { cout << "~Engine()" << endl; }
    void info() { cout << "Engine info" << endl; }
    
};

class Tire {
public:
	
    Tire() { cout << "Tire()" << endl; }
    Tire(int size) { cout << "Tire(para) " << endl; }
    ~Tire() { cout << "~Tire()" << endl; }
    void info() { cout << "Tire info" << endl; }
    
};

class Car : public Vehicle {
private:
    Engine engine;   
    Tire tire;  	     
public:
	
    Car() : tire(20), engine("V6"), Vehicle("CarBase") { cout << "Car()" << endl; }
    ~Car() { cout << "~Car()" << endl; }
    void start() override { cout << "start in Car" << endl; }
    
};

int main() {
    Car c;

    Vehicle* v = new Car();
    v->start(); 
    delete v;   

    return 0;
}

