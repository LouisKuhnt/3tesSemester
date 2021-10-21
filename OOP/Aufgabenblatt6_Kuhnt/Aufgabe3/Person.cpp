#include "Person.h"

Person::Person(int id, std::string lastname, std::string firstname){
    this->id = id;
    this->lastname = lastname;
    this->firstname = firstname;
}

int Person::getId(){
    return id;
}

std::string Person::getLastname(){
    return lastname;
}

std::string Person::getFirstname(){
    return firstname;
}