#include <iostream>
#include <sstream>
#include <time.h>
#include <assert.h>
#include "Book.h"

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

template <typename T1> 
bool find(T1* array, int size, T1& key){
	for(int i = 0; i <= size; i++){
		if(array[i] == key){
			return true;
		}
	}
	return false;
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
	
	auto goethe = Book("Goethe", "Faust");
	auto schiller = Book("Schiller", "Die Räuber");
	auto shakespeare = Book("Shakespeare", "Hamlet");
	
	Book books[] = {goethe, schiller, shakespeare};
	
	for(int i=0; i<3; i++){
		bool isContained = find(books, 3, books[i]);
		assert(isContained);
	}
	
	auto king = Book("King", "It");
	bool isContained = find(books, 3, king);
	assert(!isContained);
	
    return 0;
}
