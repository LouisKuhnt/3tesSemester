#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person{
    
    private:
        int id;
        std::string lastname;
        std::string firstname;
        
    public:
        Person(int id, std::string lastname, std::string firstname);
        int getId();
        std::string getLastname();
        std::string getFirstname();
};

#endif