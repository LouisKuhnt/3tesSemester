#ifndef BASE_H
#define BASE_H

class Base {
        int valueB;
    public:
        void setValueB(int value) ;
        int getValueB() ;
};

void Base::setValueB(int value) {
     this->valueB = value;
}

int Base::getValueB() {
    return valueB;
}


#endif