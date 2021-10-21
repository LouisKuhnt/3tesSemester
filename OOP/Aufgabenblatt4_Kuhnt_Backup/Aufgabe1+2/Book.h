#ifndef BOOK_H
#define BOOK_H
#include <string>
#include <sstream>
#include <time.h>
#include <iostream>

namespace my_date{
	std::string today(){
		time_t jetzt;
		tm *ltm;
		std::stringstream jetztDatum;
	
		jetzt = time(0);
		ltm = localtime(&jetzt);
		jetztDatum << 1900 + ltm->tm_year
			<< "-"
			<< 1 + ltm->tm_mon
			<< "-"
			<< ltm->tm_mday;
	
		return jetztDatum.str();
	}
}

class Book{
	private:
		const std::string buchTitel;
		const std::string autor;
		const std::string anschaffungsdatum = my_date::today();
		const bool status = true;
	public:
		Book(std::string a, std::string b, std::string c, bool d): buchTitel(a), autor(b), anschaffungsdatum(c), status(d){}
		Book(std::string a, std::string b, std::string c): buchTitel(a), autor(b), anschaffungsdatum(c){}
		Book(std::string a, std::string b): buchTitel(a), autor(b){}
		Book(const Book& book): buchTitel(book.buchTitel), autor(book.autor), anschaffungsdatum(book.anschaffungsdatum), status(book.status){}
	
		std::string get_buchtitel(void) const;
		std::string get_autor(void) const;
		std::string get_anschaffungsdatum(void) const;
		bool get_status(void) const;
		
		void dump(void) const;
};

#endif