#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

class Shape {
public:
    virtual void draw() = 0;
    virtual ~Shape() {}
};

#endif // SHAPE_H