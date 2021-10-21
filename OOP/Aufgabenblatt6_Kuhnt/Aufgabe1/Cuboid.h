#ifndef CUBOID_H
#define CUBOID_H
#include "Rectangle.h"

class Cuboid:public Rectangle{
    private:
        double height;
        
    public:
        Cuboid(double length, double width, double height);
        double getHeight();
        
        double volume();
        double circumference();
        double area();
};

#endif