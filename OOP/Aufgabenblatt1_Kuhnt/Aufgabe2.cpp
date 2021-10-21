#include <iostream>
#include <stdexcept>

namespace gGT{
	void rekursiv(int a, int b){
		std::cout << "Rekursiver GGT aus "<< a << " und "<< b << " ist ";
	}


	void iterative(int a, int b){
		std::cout << "Iterativer GGT aus "<< a << " und "<< b << " ist ";
	}
	
	int Aufgabe2_recursiv(int n3, int n4){
		if (n3 >= 0 || n4 >= 0){
			if(n3 == 0 && n4 == 0){
				throw std::domain_error("Divided by Zero");
			}
			else if(n4 == 0){
				return n3;
			}else if(n3 < 0 || n4 < 0){
				throw std::domain_error("Values under zero does not compute");
			}else{
				return n4;
			}
		}
		else if (n3 == n4){
			return n3;
		}
		else if (n3 > n4){
			return Aufgabe2_recursiv(n3-n4, n4);
		}
		else{
			return Aufgabe2_recursiv(n3, n4-n3);   
		}
	}
	
	int Aufgabe2_iterativ(int a, int b){
		if(a != 0 && b != 0){
			while(a != b)
			{
				if(a > b){
					a -= b;
				}
				else{
					b -= a;
				}
			}
			
			//std::cout << "Iterativer GGT = " << n1;
			return a;
		}else{
			if(a == 0 && b == 0){
				throw std::domain_error("Divided by Zero");
			}
			else if(b == 0){
				return a;
			}else{
				return b;
			}
		}
	}
	
	std::pair<int,int> reduce(int a, int b){
		if(a != 0 && b != 0){
			std::cout << a << " / " << b << " = ";
			a = a/Aufgabe2_recursiv(a, b);
			b = b/Aufgabe2_recursiv(a, b);
			//std::cout << a << " / " << b << std::endl;
			return std::make_pair(a,b);
		}else{
			if(a == 0 && b == 0){
				throw std::domain_error("Divided by Zero");
			}		
			else if(b == 0){
				return std::make_pair(a,0);
			}else{
				return std::make_pair(0,b);
			}
		}
	}
}

int main() { //Geprüft mit 56/34; 1234/56; 99/23; 45/766; 110/112; 420/69; 0/0; 0/78; 45/0;
    try{
		int a, b;
    //std::cin >> n3 >> n4;
    gGT::iterative(56,34);
	std::cout<< gGT::Aufgabe2_iterativ(56,34) << std::endl;
	gGT::rekursiv(56,34);
	std::cout << gGT::Aufgabe2_recursiv(56,34) << std::endl;
	
	gGT::iterative(1234,56); 
	std::cout << gGT::Aufgabe2_iterativ(1234,56) << std::endl;
    gGT::rekursiv(1234,56); 
	std::cout << gGT::Aufgabe2_recursiv(1234,56) << std::endl;
	
	gGT::iterative(99,23); 
	std::cout << gGT::Aufgabe2_iterativ(99,23) << std::endl;
	gGT::rekursiv(99,23); 
	std::cout << gGT::Aufgabe2_recursiv(99,23) << std::endl;
	
	gGT::iterative(45,766); 
	std::cout << gGT::Aufgabe2_iterativ(45,766) << std::endl;
	gGT::rekursiv(45,766); 
	std::cout << gGT::Aufgabe2_recursiv(45,766) << std::endl;
	
	gGT::iterative(110,112); 
	std::cout << gGT::Aufgabe2_iterativ(110,112) << std::endl;
	gGT::rekursiv(110,112); 
	std::cout << gGT::Aufgabe2_recursiv(110,112) << std::endl;
	
	gGT::iterative(420,69); 
	std::cout << gGT::Aufgabe2_iterativ(420,69) << std::endl;
	gGT::rekursiv(420,69); 
	std::cout << gGT::Aufgabe2_recursiv(420,69) << std::endl;
	
	gGT::iterative(0,8); 
	std::cout << gGT::Aufgabe2_iterativ(0,8) << std::endl;
	gGT::rekursiv(0,8); 
	std::cout << gGT::Aufgabe2_recursiv(0,8) << std::endl;
	
	gGT::iterative(8,0); 
	std::cout << gGT::Aufgabe2_iterativ(8,0) << std::endl;
	gGT::rekursiv(0,8); 
	std::cout << gGT::Aufgabe2_recursiv(8,0) << std::endl;
	
	gGT::iterative(0,0); 
	std::cout << gGT::Aufgabe2_iterativ(0,0) << std::endl;
	gGT::rekursiv(0,0); 
	std::cout << gGT::Aufgabe2_recursiv(0,0) << std::endl;
	
    std::pair<int,int> p = gGT::reduce(56, 34);
	a = p.first;
	b = p.second;
	std::cout << "Der verkleinerte Wert von 56 und 34 ist " << a << "/" << b << std::endl;
	std::pair<int,int> r = gGT::reduce(1234, 56);
	a = r.first;
	b = r.second;
	std::cout << "Der verkleinerte Wert von 1234 und 56 ist " << a << "/" << b << std::endl;
	std::pair<int,int> t = gGT::reduce(99, 23);
	a = t.first;
	b = t.second;
	std::cout << "Der verkleinerte Wert von 99 und 23 ist " << a << "/" << b << std::endl;
	std::pair<int,int> u = gGT::reduce(45, 766);
	a = u.first;
	b = u.second;
	std::cout << "Der verkleinerte Wert von 45 und 766 ist " << a << "/" << b << std::endl;
	std::pair<int,int> i = gGT::reduce(420, 69);
	a = i.first;
	b = i.second;
	std::cout << "Der verkleinerte Wert von 420 und 69 ist " << a << "/" << b << std::endl;
		
	return 0;
    } catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }
}
