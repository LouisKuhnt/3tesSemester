#include <iostream>
#include "Rectangle.h"
#include "Cuboid.h"

int main()
{
    Rectangle rectangle(4.0,7.0);
    Cuboid cuboid(3.0,4.0,5.0);
    
    std::cout << rectangle.getLength() << std::endl;
    std::cout << rectangle.getWidth() << std::endl;
    std::cout << rectangle.circumference() << std::endl;
    std::cout << rectangle.area() << std::endl;
    std::cout;
    std::cout << cuboid.getLength() << std::endl;
    std::cout << cuboid.getWidth() << std::endl;
    std::cout << cuboid.getHeight() << std::endl;
    std::cout << cuboid.area() << std::endl;
    std::cout << cuboid.volume() << std::endl;
    
}
