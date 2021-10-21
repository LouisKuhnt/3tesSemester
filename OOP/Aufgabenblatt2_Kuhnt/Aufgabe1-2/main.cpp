#include <iostream>
#include <sstream>
#include <time.h>
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
