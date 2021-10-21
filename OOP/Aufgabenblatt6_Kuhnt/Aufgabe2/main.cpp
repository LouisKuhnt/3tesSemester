#include <iostream>
#include "Base.h"
#include "Derived.h"

int main()
{
    Base base;
    Base base1;
    Derived derived;
    Derived derived1;
    
    base.setValueB(1);
    derived.setValueD(2);
    
    derived1 = derived;
    base1 = base;
    
    std::cout << base1.getValueB() << std::endl;
    std::cout << derived1.getValueD() << std::endl;
    
    //derived1 = base;
    base1 = derived;
    
    //std::cout << base1.getValueB() << std::endl;
    std::cout << derived1.getValueD() << std::endl;
    
    return 0;
    
    //Die Überklasse kann nicht auf die Unterklasse abgebildet werden.
}