#include <iostream>

void Aufgabe1(){
    //Aufgabe 1
    int w,x;
    char y;
    float z;
    //const int size = 100;
    //char zeichenkette[size];
	std::string a;
    
    std::cout << "Einlesen eines Textes\n";
    //std::cin.getline(zeichenkette, size);
	std::cin >> a;
    std::cout << zeichenkette << "\n";
    std::cout << "Eingabe eines einzelnen Integers\n";
    std::cin >> x;
    std::cout << x << "\n";
    std::cout << "Eingabe zweier Integer\n";
    std::cin >> w >> x;
    std::cout << w << x << "\n";
    std::cout << "Eingabe eines Integers und eines Chars\n";
    std::cin >> w >> y;
    std::cout << w << y << "\n";
    std::cout << "Eingabe eines floats und eines chars\n";
    std::cin >> z >> y;
    std::cout << z << y << "\n";
}

int main() {
    Aufgabe1();
	
	return 0;
}