#include "Seller.h"

Seller::Seller(int id, std::string lastname, std::string firstname, int pay, int commission):Employee(id,lastname,firstname){
    this->pay = pay;
    this->commission = commission;
}

double Seller::salary(){
    return pay+commission;
}

int Seller::getPay(){
    return pay;
}

int Seller::getCommission(){
    return commission;
}