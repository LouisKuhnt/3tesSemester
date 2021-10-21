#include <iostream>
#include <sstream>
#include <time.h>
#include "Book.h"
#include <set>

void ausgabeVonBookPointer(Book *book){
	book->dump();
}

void ausgabeVonBookReference(Book &book){
	book.dump();
}

void ausgabeVonBookValue(Book book){
	book.dump();
}

std::ostream &operator<<(std::ostream &out, const Book& book){
	out << "Das Buch: " << book.get_buchtitel() << " vom Autor " << book.get_autor() << " wurde am " << book.get_anschaffungsdatum() << " angeschafft!" << std::endl;
    return out;
}

int main()
{
	std::set<Book> bookse;
	auto book1=Book("Disney", "LTB1");
	auto book2=Book("Disney", "LTB2");
	bookse.insert(book1);
	bookse.insert(book2);
	for (auto book : bookse) {
 		std::cout << book << std::endl;
	}
    return 0;
}
