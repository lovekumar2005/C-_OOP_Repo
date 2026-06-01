#include <iostream>
using namespace std;
// Find the output of this code or Error if any
class Engine {
private:
    string type;
public:
    Engine() { cout << "Engine default constructor called" << endl; }
    Engine(string t) { cout << "Engine parameterized constructor called: " << endl; }
};


class Tire : public Engine  {
private:
    int size;
public:
    Tire() { cout << "Tire default constructor called" << endl; }
    Tire(int s) { cout << "Tire parameterized constructor called: " << size << endl; }
};


class Car : public Tire {
private:
    Engine engine;  
    Tire tire;       // Tire is inherited from engine... then at time of creation Tire tire also engine def con will run
public:
    Car() : engine("V8"), tire(18) { cout << "Car constructor called" << endl; }
    // to mention inherited class Tire Car():Tire(11),engine......... but here Engine("aa) will give error bc base of base cons....
    // love practice krne ah... base mn cons call la mention...and car class mn aggregated and inheir na memtion and not mention
};


int main() {
    Car c;  
    return 0;
}
