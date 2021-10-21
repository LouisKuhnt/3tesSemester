#include "Worker.h"

Worker::Worker(int id, std::string lastname, std::string firstname, int hoursRate, int hoursWorked):Employee(id,lastname,firstname){
    this->hoursRate = hoursRate;
    this->hoursWorked = hoursWorked;
}

double Worker::salary(){
    return hoursRate*hoursWorked;
}

int Worker::getHoursRate(){
    return hoursRate;
}

int Worker::getHoursWorked(){
    return hoursWorked;
}