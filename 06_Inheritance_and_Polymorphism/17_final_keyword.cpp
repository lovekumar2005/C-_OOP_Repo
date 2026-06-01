#include<iostream>
using namespace std;

class Shape
{
public:
    virtual void draw() { 
	    cout << "Drawing shape\n"; 
	}
};

class Circle final : public Shape   // stop inheritance
{
public:
    void draw() final               // stop overriding further
    {
        cout << "Drawing circle\n";
    }
};

// class Ball : public Circle       // ? Error: Circle is final
// {};


int main()
{
    Shape* s = new Circle();
    s->draw();   // Circle's draw()
    delete s;
}

