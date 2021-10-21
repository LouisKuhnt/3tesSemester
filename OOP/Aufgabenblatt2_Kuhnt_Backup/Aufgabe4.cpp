#include <iostream>

namespace hfu {
	
	class DynamicInt {
		private:
			const int* pointer;
		public:
			DynamicInt(int);
			DynamicInt(const DynamicInt& dynamicInt);
			~DynamicInt();
			int get() const;
	};
	
	DynamicInt::~DynamicInt() {
		delete pointer;
	}
	
	DynamicInt::DynamicInt(const DynamicInt& dynamicInt):DynamicInt(dynamicInt.get()){}

	int DynamicInt::get() const{
		return *pointer;
	}

	DynamicInt::DynamicInt(int number):pointer(new int(number)) {}

	int negative(DynamicInt dynamicInt){
		return -dynamicInt.get();
	}
}

//Aufgabe 4 a) Durch das Speichern auf dem Heap wird zwar ein Dynamischer Speicherplatz generiert, aber durch die Aufrufe (Call by Reference) immer auf den gleichen Speicher zugegriffen wird, wird dieser überschrieben. Somit ist es nicht mehr möglich bei der ersten Instanz herauszufinden, welcher Wert im Pointer stand. Die Lösung ist ein eigener Kopierkonstruktor der den Standardkonstruktor überschreibt.
int main()
{
    const hfu::DynamicInt di1(-4711);
	std::cout << di1.get() << "\n";
	std::cout << hfu::negative(di1) << "\n";
	
	hfu::DynamicInt di1Copy = hfu::DynamicInt(di1);
	
	const hfu::DynamicInt di2(23);
	std::cout << di2.get() << "\n";
	std::cout << hfu::negative(di2) << "\n";
	
	hfu::DynamicInt di2Copy = hfu::DynamicInt(di2);
	
	std::cout << di1Copy.get() << "\n";
	std::cout << hfu::negative(di1Copy) << "\n";

    return 0;
}