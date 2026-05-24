#include "Circle.h"
#include "Rectangle.h"
#include <string>

class ShapeFactory {
public:
    static Shape* createShape(std::string type) {
        if (type == "circle")
            return new Circle();
        else if (type == "rectangle")
            return new Rectangle();

        return nullptr;
    }
};  