#include "ArrayList.h"
#include <iostream>

ArrayList::ArrayList(int size){
    this->size = size;
	array = new <class T>[size];
}

ArrayList::~ArrayList(){
	delete [] array;
}

ArrayList::ArrayList(const ArrayList& arrayList){
	std::cout << "Kopierkonstruktor" << std::endl;
	this->array = arrayList.array;
	this->size = arrayList.size;
	
	std::cout << "Kopierkonstruktor" << std::endl;
		array = new <class T>[arrayList.size];
		for(int i=0; i < arrayList.size; i++){
			this->array[i] = arrayList.array[i];
		}
}

<class T> ArrayList::get(int i) const{
	if(i >= 0 && i < size){
		return array[i];
	}else{
		throw std::domain_error("Index out of bounds!");
	}
}

void ArrayList::set(int i, <class T> number){
	if(i >= 0 && i < size){
		array[i] = number;
	}else{
		throw std::domain_error("Index out of bounds!");
	}
}

int ArrayList::getSize() const{
    return size;
}

double* ArrayList::getArray() const{
    return this->array;   
}