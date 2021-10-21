#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Person.h"

class Employee:public Person{
    public:
        Employee(int id, std::string lastname, std::string firstname): Person(id, lastname, firstname){
        }

        virtual double salary() = 0;
        
        virtual ~Employee(){
        }
};

#endif