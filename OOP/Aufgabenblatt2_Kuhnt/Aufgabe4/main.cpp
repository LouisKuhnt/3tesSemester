#include <iostream>
#include "DynamicInt.h"

int negative(DynamicInt dynamicInt){
	return -dynamicInt.get();
}

//Aufgabe 4 a) Durch das Speichern auf dem Heap wird zwar ein Dynamischer Speicherplatz generiert, aber durch die Aufrufe (Call by Reference) immer auf den gleichen Speicher zugegriffen wird, wird dieser überschrieben. Somit ist es nicht mehr möglich bei der ersten Instanz herauszufinden, welcher Wert im Pointer stand. Die Lösung ist ein eigener Kopierkonstruktor der den Standardkonstruktor überschreibt.
int main()
{
    const DynamicInt di1(-4711);
	std::cout << di1.get() << "\n";
	std::cout << negative(di1) << "\n";
	
	DynamicInt di1Copy = DynamicInt(di1);
	
	const DynamicInt di2(23);
	std::cout << di2.get() << "\n";
	std::cout << negative(di2) << "\n";
	
	DynamicInt di2Copy = DynamicInt(di2);
	
	std::cout << di1Copy.get() << "\n";
	std::cout << negative(di1Copy) << "\n";

    return 0;
}