#include <iostream>
#include <cmath>
#include "EasyBMP.h"
#include <ctgmath>

const float A = 0;
const float B = 0;

class Point {
private:
    float x;
    float y;

public:
    Point(float x, float y) {
        this->x = x;
        this->y = y;
    }
    float getX() {
        return this->x;
    };

    float getY() {
        return this->y;
    };
};

Point getNext(Point p) {
    float x;
    float y;

    x = powf(p.getX(), 2) - powf(p.getY(), 2) + A;
    y = p.getX() * p.getY() * 2 + B;

    return *new Point(x,y);
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
