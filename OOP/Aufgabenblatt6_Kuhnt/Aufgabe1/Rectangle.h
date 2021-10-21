#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
    private:
        double length;
        double width;
        
    public:
        Rectangle(double length, double width);
        double getLength();
        double getWidth();
        double circumference();
        double area();
};

#endif