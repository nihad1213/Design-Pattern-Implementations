#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include <iostream>

class Circle: public Shape {
public:
    void draw() override {
        std::cout << "Drawing a Circle" << std::endl;
    }
};

#endif // CIRCLE_H