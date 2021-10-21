#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Person.h"

class Employee:public Person{
    public:
        Employee(int id, std::string lastname, std::string firstname);
        double salary();
};

#endif