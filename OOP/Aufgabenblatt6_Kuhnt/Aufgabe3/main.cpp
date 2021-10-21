#include <iostream>
#include "Person.h"
#include "Guest.h"

int main()
{
    Person person(1,"Robert", "Bla");
    Guest guest(2, "Ronny", "Blub", 25, 130);
    
    std::cout << person.getId() << std::endl;
    std::cout << person.getLastname() << std::endl;
    std::cout << person.getFirstname() << std::endl;
    std::cout;
    std::cout << guest.getId() << std::endl;
    std::cout << guest.getLastname() << std::endl;
    std::cout << guest.getFirstname() << std::endl;
    std::cout << guest.getroomRate() << std::endl;
    std::cout << guest.getDays() << std::endl;
    std::cout << guest.check() << std::endl;
    
}
