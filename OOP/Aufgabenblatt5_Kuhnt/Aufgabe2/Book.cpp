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

Book::Book(std::string autor, std::string buchTitel, std::string anschaffungsdatum, bool status): autor(autor), buchTitel(buchTitel), anschaffungsdatum(anschaffungsdatum), status(status){}

std::string Book::today(){
    std::stringstream s;
    std::string out;
    time_t now = time(0);
    tm *ltm = localtime(&now);
    s<<1900 + ltm->tm_year<<"-"<<1+ltm->tm_mon<<"-"<<ltm->tm_mday;
    out = s.str();
    return out;
}