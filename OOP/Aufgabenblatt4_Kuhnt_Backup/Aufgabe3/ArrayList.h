#ifndef ARRAYLIST_H
#define ARRAYLIST_H
#include <iostream>

template <typename Type, int size>
class ArrayList{
	private:
		Type* array;
	public:
		ArrayList();
		~ArrayList();
		ArrayList(const ArrayList& arrayList);
		Type get(int i) const;
		void set(int i, double number);
		int getSize() const;
		Type* getArray() const;
		
		Type &operator[](int i){
            if(i > size){
                throw std::domain_error("Index out of bounds!");
            }
    
			return (this->array[i]);
        }
		
		const Type &operator[](int i) const{
            if(i > size){
                throw std::domain_error("Index out of bounds!");
            }
    
			return (this->array[i]);
        }
		
		bool find(Type array, int size, Type key)
		{
			for(int i = 0; i <= size; i++){
				if(array[i] == key){
					return true;
				}
			}
			return false;
		}
		
		void operator=(const ArrayList& arr)
		{
		    array = new Type[size];
	        for(int i = 0; i < size; i++) {
		        array[i] = arr.get(i);
	        }
		}
		
		friend bool operator==(const ArrayList& arr1, const ArrayList& arr2) 
		{
			if(&arr1 == &arr2) {
				return true;
			} else {
				for(int i = 0; i <size; i++) {
					if (arr1.get(i) != arr2.get(i)) {
						return false;
					}
				}
				return true;
			}
		}
		
		friend bool operator!=(const ArrayList& arr1, const ArrayList& arr2) 
		{
			return !operator==(arr1, arr2);
		}
		
		friend std::ostream& operator<<(std::ostream& ost, const ArrayList& arr) 
		{
			if(size >= 0) {
				for(int i = 0; i <size; i++) {
					ost << arr.get(i) << std::endl;
				}
			}
			return ost;
		}
};

template <typename Type, int size>
Type ArrayList<Type, size>::get(int i) const
{
	if(i < 0 || i > size -1) {
	} else {
		return array[i];
	}
}

template <typename Type, int size>
ArrayList<Type, size>::ArrayList() 
{
	array=new Type[size];
}

template <typename Type, int size>
void ArrayList<Type, size>::set(int i, Type number) 
{
	if(i < 0 || i > size-1) {
	} else {
		array[i] = number;
	}
}

template <typename Type, int size>
ArrayList<Type, size>::ArrayList(const ArrayList& copy) 
{
	array = new Type[size];
	for(int i = 0; i < size; i++) {
		array[i] = copy.get(i);
	}
}

template <typename Type, int size>
ArrayList<Type, size>::~ArrayList() 
{
	delete[] array;
}

#endif