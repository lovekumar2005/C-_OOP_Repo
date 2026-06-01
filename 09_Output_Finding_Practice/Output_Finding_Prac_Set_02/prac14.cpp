#include <iostream>
using namespace std;
// Find the output of this code or Error if any
class Engine {
public:
    Engine() { cout << "Engine()" << endl; }
    Engine(string type) { cout << "Engine(para) " << endl; }
    virtual ~Engine() { cout << "~Engine()" << endl; }
};


class TurboEngine : public Engine {
public:
    TurboEngine() { cout << "TurboEngine()" << endl; }
    TurboEngine(string t) : Engine(t) { cout << "TurboEngine(para)" << endl; }
    ~TurboEngine() { cout << "~TurboEngine()" << endl; }
};


class Tire {
public:
    Tire() { cout << "Tire()" << endl; }
    Tire(int size) { cout << "Tire(para)" << endl; }
    ~Tire() { cout << "~Tire()" << endl; }
};


class Car : public Tire {
private:
    TurboEngine engine;  
    Tire spare;         
public:
    Car() : engine("V8 Turbo"), spare(18) {cout << "Car()" << endl; }
    ~Car() { cout << "~Car()" << endl; }
};


class SuperCar : public Car {
private:
    TurboEngine extraEngine;
public:
    SuperCar() : extraEngine("V12 Super") { cout << "SuperCar()" << endl; }
    ~SuperCar() { cout << "~SuperCar()" << endl; }
};

int main() {
    SuperCar sc;
    return 0;
}

