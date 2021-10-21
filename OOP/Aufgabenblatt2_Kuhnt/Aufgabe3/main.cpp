#include <iostream>
#include "Queue.h"

int main()
{
	Queue queue1;
	bool testbool = queue1.isEmpty();
	int testInt;
	try{
		std::cout << "Ist die Queue leer? " << testbool << std::endl;
		queue1.put(15);
		std::cout << "Einfügen 15" << std::endl;
		testbool = queue1.isEmpty();
		std::cout << "Ist die Queue leer? " << testbool << std::endl;
		testInt = queue1.get();
		std::cout << "Die Queue an der ersten Stelle: " << testInt << std::endl;
		std::cout << "--------------------------------" << std::endl;
		queue1.put(10);
		std::cout << "Einfügen 10" << std::endl;
		queue1.put(9);
		std::cout << "Einfügen 9" << std::endl;
		queue1.put(8);
		std::cout << "Einfügen 8" << std::endl;
		queue1.put(7);
		std::cout << "Einfügen 7" << std::endl;
		queue1.put(6);
		std::cout << "Einfügen 6" << std::endl;
		queue1.put(5);
		std::cout << "Einfügen 5" << std::endl;
		queue1.put(4);
		std::cout << "Einfügen 4" << std::endl;
		queue1.put(3);
		std::cout << "Einfügen 3" << std::endl;
	} catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }
	
	try{
		testInt = queue1.get();
		std::cout << "Die Queue an der nächsten Stelle: " << testInt << std::endl;
		testInt = queue1.get();
		std::cout << "Die Queue an der nächsten Stelle: " << testInt << std::endl;
		testInt = queue1.get();
		std::cout << "Die Queue an der nächsten Stelle: " << testInt << std::endl;
		testInt = queue1.get();
		std::cout << "Die Queue an der nächsten Stelle: " << testInt << std::endl;
		testInt = queue1.get();
		std::cout << "Die Queue an der nächsten Stelle: " << testInt << std::endl;
		testInt = queue1.get();
		std::cout << "Die Queue an der nächsten Stelle: " << testInt << std::endl;
		testInt = queue1.get();
		std::cout << "Die Queue an der nächsten Stelle: " << testInt << std::endl;
		testInt = queue1.get();
		std::cout << "Die Queue an der nächsten Stelle: " << testInt << std::endl;
		testInt = queue1.get();
		std::cout << "Die Queue an der nächsten Stelle: " << testInt << std::endl;
	} catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }
    
    try{
		for(int i = 0; i < 60; i++){
		    queue1.put(i);
		    std::cout << "Einfügen " <<i<< std::endl;
		}
	} catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }
	
    return 0;
}