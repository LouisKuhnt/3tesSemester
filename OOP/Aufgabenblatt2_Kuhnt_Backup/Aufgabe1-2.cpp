#include <iostream>
#include <sstream>
#include <time.h>

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

void ausgabeVonBookPointer(Book *book){
	book->dump();
}

void ausgabeVonBookReference(Book &book){
	book.dump();
}

void ausgabeVonBookValue(Book book){
	book.dump();
}

int main()
{
    Book book1("Goethe", "Faust");
	Book book2("Rick Riordan", "Percy Jackson", "2013-12-13");
	Book book3("Louis Kuhnt", "Alles", "2019-04-11", false);
	
	Book bookKopie(book1);
	ausgabeVonBookPointer(&bookKopie);
	ausgabeVonBookReference(book2);
	ausgabeVonBookValue(book3);
	
    return 0;
}
