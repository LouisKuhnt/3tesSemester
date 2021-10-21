#ifndef SELLER_H
#define SELLER_H
#include "Employee.h"

class Seller:public Employee{
    private:
        int pay;
        int commission;
        
    public:
        Seller(int id, std::string lastname, std::string firstname, int pay, int commission);
        double salary();
        int getPay();
        int getCommission();
};

#endif