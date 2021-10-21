#include "Book.h"
#include <iostream>

std::string Book::get_buchtitel(void) const{
	return buchTitel;
}

std::string Book::get_autor(void) const{
	return autor;
}

std::string Book::get_anschaffungsdatum(void) const{
	return anschaffungsdatum;
}

bool Book::get_status(void) const{
	return status;
}

void Book::dump(void) const{
	std::cout << "Buchtitel: " << buchTitel << std::endl;
	std::cout << "Autor: " << autor << std::endl;
	std::cout << "Anschaffungsdatum: " << anschaffungsdatum << std::endl;
	std::cout << "Status: " << status << std::endl;
}