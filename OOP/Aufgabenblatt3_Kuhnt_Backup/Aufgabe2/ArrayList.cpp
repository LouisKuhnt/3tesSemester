#include "ArrayList.h"
#include <iostream>

ArrayList::ArrayList(int size){
    this->size = size;
	array = new double[size];
}

ArrayList::~ArrayList(){
	delete [] array;
}

ArrayList::ArrayList(const ArrayList& arrayList){
	std::cout << "Kopierkonstruktor" << std::endl;
	this->array = arrayList.array;
	this->size = arrayList.size;
	
	std::cout << "Kopierkonstruktor" << std::endl;
		array = new double[arrayList.size];
		for(int i=0; i < arrayList.size; i++){
			this->array[i] = arrayList.array[i];
		}
}

double ArrayList::get(int i) const{
	if(i >= 0 && i < size){
		return array[i];
	}else{
		throw std::domain_error("Index out of bounds!");
	}
}

void ArrayList::set(int i, double number){
	if(i >= 0 && i < size){
		array[i] = number;
	}else{
		throw std::domain_error("Index out of bounds!");
	}
}

int ArrayList::getSize() const{
    return size;
}