#include "Guest.h"

Guest::Guest(int id, std::string lastname, std::string firstname, int days, int roomRate): Person(id, lastname,firstname){
    this->days = days;
    this->roomRate = roomRate;
}

int Guest::getDays(){
    return days;
}

int Guest::getroomRate(){
    return roomRate;
}

double Guest::check(){
    return days*roomRate;
}