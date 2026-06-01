#include <iostream>
using namespace std;
/***********************************
	Lab:	05
	Task:	01
	Developer:
		Roll #:	F24BB046
		Name:	Love Kumar		
***********************************/

class Circle {
private:
    double radius;
    const double pi = 3.14159;

public:
    Circle() {
        radius = 0.0;
    }

    Circle(double r) {
        radius = r;
    }

    void setRadius(double r) {
        radius = r;
    }

    double getRadius() const {
        return radius;
    }

    double getArea() const {
        return pi * radius * radius;
    }

    double getDiameter() const {
        return radius * 2;
    }

    double getCircumference() const {
        return 2 * pi * radius;
    }
};

int main() {
    double r;
    cout << "Enter radius of the circle: ";
    cin >> r;

    Circle c(r);

    cout << "\nCircle Details:" << endl;
    cout << "Radius: " << c.getRadius() << endl;
    cout << "Area: " << c.getArea() << endl;
    cout << "Diameter: " << c.getDiameter() << endl;
    cout << "Circumference: " << c.getCircumference() << endl;

    return 0;
}

