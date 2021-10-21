#ifndef ARRAYLIST_H_
#define ARRAYLIST_H_

#include <iostream>

template <typename Type, int size>
	class ArrayList 
	{
	private:
		Type* array;
	public:
		ArrayList();
		Type get(int i) const;
		void set(int i, Type number);
		~ArrayList();
		ArrayList(const ArrayList& copy);
		
		const Type &operator[](int i) const
		{
		    return (this->array[i]);
		}
	
		Type &operator[](int i)
		{
		    return (this->array[i]);   
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

		class ArrayListIterator {
		    
		    private:
		    	int offset;
		    	const ArrayList<Type, size>& list;
		    	
		    public:
		    	ArrayListIterator(int b, const ArrayList<Type, size>& a):offset(b), list(a) {}
		    	
		    	bool operator !=(ArrayListIterator& b) 
		    	{
		    		return offset != b.offset;
		    	}
    
		    	Type& operator *() 
		    	{
		    		return list.array[offset];
		    	}
		    	
		    	void operator++()
		    	{
		    		offset++;
		    	}
		};
		
		ArrayListIterator end() 
		{
			return ArrayListIterator (size, *this);
		}
		
		ArrayListIterator begin() 
		{
			return ArrayListIterator (0, *this);
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