#include "Rectangle.h"

Rectangle::Rectangle(double length, double width){
    this->length = length;
    this->width = width;
}

double Rectangle::getLength(){
    return length;
}

double Rectangle::getWidth(){
    return width;
}

double Rectangle::circumference(){
    return length+width+length+width;
}

double Rectangle::area(){
    return length*width;
}