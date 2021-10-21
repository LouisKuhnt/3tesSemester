#ifndef ARRAYLIST_H
#define ARRAYLIST_H
#include <iostream>

class ArrayList{
	private:
		double *array;
		int size;
	public:
		ArrayList(int size);
		~ArrayList();
		ArrayList(const ArrayList& arrayList);
		double get(int i) const;
		void set(int i, double number);
		int getSize() const;
		
		double &operator[](int i){
            if(i > size){
                throw std::domain_error("Index out of bounds!");
            }
    
        return array[i];
        }
};

#endif