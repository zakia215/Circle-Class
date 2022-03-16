#define _USE_MATH_DEFINES

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
    smallCircle.setRadius(5);
    smallCircle.getRadius();
    smallCircle.getArea();
    smallCircle.getCircumference();
    Circle mediumCircle;
    mediumCircle.setRadius(5);
    mediumCircle.getRadius();
    mediumCircle.getArea();
    mediumCircle.getCircumference();
    Circle bigCircle;
    bigCircle.setRadius(5);
    bigCircle.getRadius();
    bigCircle.getArea();
    bigCircle.getCircumference();
}