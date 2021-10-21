#include <iostream>
#include "ArrayList.h"


bool operator==(const ArrayList& arrayList, const ArrayList& arrayList1){
    double a,b;
    if(arrayList1.getSize() == arrayList.getSize()){
        for(int i = 0; i < arrayList1.getSize(); i++){
            a = arrayList1.get(i);
            b = arrayList.get(i);
            if(a != b){
                return false;
            }
        }
        return true;
    }else{
        return false;
    }
}

bool operator!=(const ArrayList& arrayList, const ArrayList& arrayList1){
    if(arrayList1.getSize() == arrayList.getSize()){
        for(int i = 0; i < arrayList1.getSize(); i++){
            if(arrayList1.get(i) != arrayList.get(i)){
                return true;
            }
        }
        return false;
    }else{
        return true;
    }
}

std::ostream &operator<<(std::ostream &out, const ArrayList& arrayList){
    for(int i = 0; i < arrayList.getSize(); i++){
        out << "Stelle " << i << " " << arrayList.get(i) << std::endl;
    }
    return out;
}

int main()
{
    try{
	    ArrayList arrayList(15);
	    ArrayList arrayList1(15);
	    ArrayList arrayList2(20);
	
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
	    
	    ArrayList arrayListKopie = ArrayList(arrayList); 
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
        
        
    } catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}