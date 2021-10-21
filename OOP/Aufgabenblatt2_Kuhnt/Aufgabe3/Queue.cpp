#include "Book.h"
#include <iostream>

Queue::Queue(){
		head = 0;
		tail = 0;
		size = 0;
	}
	
	void Queue::put(int v){
		if(size != 50){
			if(tail != 50){
			array[tail] = v;
			tail++;
			size++;
			}else{
				tail = 0;
				array[tail] = v;
				tail++;
				size++;
			}
		}else{
			throw std::domain_error("Queue ist Voll!");
		}
	}
	
	int Queue::get(){
		int zahl;
		if(!Queue::isEmpty()){
			if(head != 51){
				zahl = array[head];
				array[head] = 0;
				head++;
				size--;
			}else{
				head = 0;
				zahl = array[head];
				array[head] = 0;
				head++;
				size--;
			}
			return zahl;
		}else{
			throw std::domain_error("Queue ist leer!");
		}
	}
	
	bool Queue::isEmpty(){
		if(size == 0){
			return true;
		}else{
			return false;
		}
	}