#include "DynamicInt.h"
#include <iostream>

DynamicInt::~DynamicInt() {
	delete pointer;
}
	
DynamicInt::DynamicInt(const DynamicInt& dynamicInt):DynamicInt(dynamicInt.get()){}

int DynamicInt::get() const{
	return *pointer;
}

DynamicInt::DynamicInt(int number):pointer(new int(number)) {}
