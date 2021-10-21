#ifndef BOOK_H
#define BOOK_H
#include <string>
#include <sstream>
#include <time.h>
#include <iostream>

class Book{
	private:
		const std::string buchTitel;
		const std::string autor;
		const std::string anschaffungsdatum;
		const bool status = true;
	public:
		Book(std::string autor="", std::string buchTitel="", std::string anschaffungsdatum=today(), bool status=false);
		
	    static std::string today();
		std::string get_buchtitel(void) const;
		std::string get_autor(void) const;
		std::string get_anschaffungsdatum(void) const;
		bool get_status(void) const;
		
		void dump(void) const;

        bool operator<(const Book& b1)const{
            if((this->buchTitel).compare(b1.buchTitel) ==0  ){
                if((this->autor).compare(b1.autor) >0)
					return true;
				else if((this->autor).compare(b1.autor) ==0)
					return true;
				else
					return false;
			}
            else if((this->buchTitel).compare(b1.buchTitel) >0 )
                return true;
            else
                return false;
        }

        bool operator>(const Book& b1)const{
            if((this->buchTitel).compare(b1.buchTitel) ==0  ){
                if((this->autor).compare(b1.autor) >0)
					return false;
				else if((this->autor).compare(b1.autor) ==0)
					return false;
				else
					return true;
			}
            else if((this->buchTitel).compare(b1.buchTitel) >0 )
                return false;
            else
                return true;
        }
    
};

#endif