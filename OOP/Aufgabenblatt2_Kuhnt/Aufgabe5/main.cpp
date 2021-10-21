#include <iostream>
#include "ArrayList.h"

int main()
{
    try{
		ArrayList arrayList(15);
	
	    arrayList.set(0, 15.5);
	    std::cout << "Im Array an Stelle 0 steht:" << arrayList.get(0) << std::endl;
		arrayList.set(1, 10.23);
	    std::cout << "Im Array an Stelle 1 steht:" << arrayList.get(1) << std::endl;
		arrayList.set(2, 1.3);
	    std::cout << "Im Array an Stelle 2 steht:" << arrayList.get(2) << std::endl;arrayList.set(3, 5);
	    std::cout << "Im Array an Stelle 3 steht:" << arrayList.get(3) << std::endl;
		arrayList.set(4, -4);
	    std::cout << "Im Array an Stelle 4 steht:" << arrayList.get(4) << std::endl;
		arrayList.set(5, -5.43);
	    std::cout << "Im Array an Stelle 5 steht:" << arrayList.get(5) << std::endl;

    } catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}