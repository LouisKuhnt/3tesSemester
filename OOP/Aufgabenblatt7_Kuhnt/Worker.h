#ifndef WORKER_H
#define WORKER_H
#include "Employee.h"

class Worker:public Employee{
    private:
        int hoursRate;
        int hoursWorked;
        
    public:
        Worker(int id, std::string lastname, std::string firstname, int hoursRate, int hoursWorked);
        double salary();
        int getHoursRate();
        int getHoursWorked();
};

#endif