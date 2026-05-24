#include "ShapeFactory.h"

int main() {
    Shape* s1 = ShapeFactory::createShape("circle");
    s1->draw();

    Shape* s2 = ShapeFactory::createShape("rectangle");
    s2->draw();

    delete s1;
    delete s2;
}