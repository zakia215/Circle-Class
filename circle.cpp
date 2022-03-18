#define _USE_MATH_DEFINES

#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

const double pi = M_PI;

class Circle {
private:
    double radius;
public:
    double getRadius();
    void setRadius(double radiusVal);
    double getArea();
    double getCircumference();
};

double Circle::getRadius() {
    return radius;
}

void Circle::setRadius(double radiusVal) {
    radius = radiusVal;
}

double Circle::getArea() {
    return pi * radius * radius;
}

double Circle::getCircumference() {
    return 2 * pi * radius;
}

int main() {
    Circle smallCircle;
    cout << fixed << setprecision(4);
    smallCircle.setRadius(5);
    cout << "The radius is " << smallCircle.getRadius() << endl;
    cout << "Area: " << smallCircle.getArea() << endl;
    cout << "Circumference: " << smallCircle.getCircumference() << endl;
    Circle mediumCircle;
    mediumCircle.setRadius(16);
    cout << "The radius is " << mediumCircle.getRadius() << endl;
    cout << "Area: " << mediumCircle.getArea() << endl;
    cout << "Circumference: " << mediumCircle.getCircumference() << endl;
    Circle bigCircle;
    bigCircle.setRadius(78);
    cout << "The radius is " << bigCircle.getRadius() << endl;
    cout << "Area: " << bigCircle.getArea() << endl;
    cout << "Circumference: " << bigCircle.getCircumference() << endl;
}