#include <iostream>
#include "ArrayList.h"

int main()
{
    try{
	    ArrayList<double, 15> arrayList;
	    ArrayList<double, 15> arrayList1;
	    ArrayList<double, 20> arrayList2;
	
	    arrayList.set(0, 15.5);
	    std::cout << "Im Array an Stelle 0 steht:" << arrayList.get(0) << std::endl;
		arrayList.set(1, 10.23);
	    std::cout << "Im Array an Stelle 1 steht:" << arrayList.get(1) << std::endl;
		arrayList.set(2, 1.3);
	    std::cout << "Im Array an Stelle 2 steht:" << arrayList.get(2) << std::endl;
	    arrayList.set(3, 5);
	    std::cout << "Im Array an Stelle 3 steht:" << arrayList.get(3) << std::endl;
		arrayList.set(4, -4);
	    std::cout << "Im Array an Stelle 4 steht:" << arrayList.get(4) << std::endl;
		arrayList.set(5, -5.43);
	    std::cout << "Im Array an Stelle 5 steht:" << arrayList.get(5) << std::endl;
	    
	    ArrayList<double, 15> arrayListKopie = ArrayList<double, 15>(arrayList); 
	    std::cout<<arrayListKopie<<std::endl;
	    
	    if(arrayList == arrayList1){
	        std::cout << "Ist gleich" << std::endl;
	    }else{
	        std::cout << "Ist nicht gleich" << std::endl;
	    }
	    
	    if(arrayList == arrayList2){
	        std::cout << "Ist gleich" << std::endl;
	    }else{
	        std::cout << "Ist nicht gleich" << std::endl;
	    }
	    
	    //-----------Gefüllt testen---------------
	    arrayList1.set(0, 15.5);
	    arrayList1.set(1, 10.23);
        arrayList1.set(2, 1.3);
        arrayList1.set(3, 5);
        arrayList1.set(4, -4);
        arrayList1.set(5, -5.43);
        
        if(arrayList == arrayList1){
	        std::cout << "Ist gleich" << std::endl;
	    }else{
	        std::cout << "Ist nicht gleich" << std::endl;
	    }
	    
	    arrayList1.set(6, 23);
	    if(arrayList == arrayList1){
	        std::cout << "Ist gleich" << std::endl;
	    }else{
	        std::cout << "Ist nicht gleich" << std::endl;
	    }
        
		std::cout << "Ist die Zahl 15.5 in dem Array vorhanden?" << ArrayList<double, 15>::find(arrayList1.getArray(), arrayList1.getSize(), 15.5) << std::endl;
		
		std::cout << "Ist die Zahl 1.5 in dem Array vorhanden?" << ArrayList<double, 15>::find(arrayList1.getArray(), arrayList1.getSize(), 1.5) << std::endl;
		
    } catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}