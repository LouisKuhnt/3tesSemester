#ifndef ARRAYLIST_H
#define ARRAYLIST_H
#include <iostream>

class ArrayList{
	private:
		<class T> *array;
		int size;
	public:
		ArrayList(int size);
		~ArrayList();
		ArrayList(const ArrayList& arrayList);
		<class T> get(int i) const;
		void set(int i, double number);
		int getSize() const;
		<class T>* getArray() const;
		
		<class T> &operator[](int i){
            if(i > size){
                throw std::domain_error("Index out of bounds!");
            }
    
			return (this->array[i]);
        }
		
		const <class T> &operator[](int i) const{
            if(i > size){
                throw std::domain_error("Index out of bounds!");
            }
    
			return (this->array[i]);
        }
		
		template <class T> bool find(T array, int size, double key){
			for(int i = 0; i <= size; i++){
				if(array[i] == key){
					return true;
				}
			}
			return false;
		}
};

#endif