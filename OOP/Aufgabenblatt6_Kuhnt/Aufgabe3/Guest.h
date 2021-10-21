#ifndef GUEST_H
#define GUEST_H
#include "Person.h"

class Guest:public Person{
    private:
        int days;
        int roomRate;
        
    public:
        Guest(int id, std::string lastname, std::string firstname, int days, int roomRate);
        int getDays();
        int getroomRate();
        double check();
};

#endif