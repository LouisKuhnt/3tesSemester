#ifndef DERIVED_H
#define DERIVED_H
#include <array>

typedef std::array<int,1> SingleArray;

class Derived : public Base {
    SingleArray* array=new SingleArray();
    
    public:
        void setValueD(int value) ;
        int getValueD();
};

void Derived::setValueD(int value) {
    (*array)[0] = value;
}

int Derived::getValueD() {
    return (*array)[0];
}

#endif