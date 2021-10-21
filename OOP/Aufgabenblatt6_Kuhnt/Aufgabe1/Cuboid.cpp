#include "Cuboid.h"

Cuboid::Cuboid(double length, double width, double height): Rectangle(length,width){
    this->height = height;
}

double Cuboid::getHeight(){
    return height;
}

double Cuboid::area(){
    return 2*Rectangle::getLength()*height+2*Rectangle::getWidth()*height+2*Rectangle::getLength()*Rectangle::getWidth();
}

double Cuboid::volume(){
    return Rectangle::getLength()*Rectangle::getWidth()*height;
}