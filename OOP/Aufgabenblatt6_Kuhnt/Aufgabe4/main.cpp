#include <iostream>
#include "Person.h"
#include "Employee.h"
#include "Worker.h"
#include "Seller.h"

int main()
{
	
	auto employee = new Employee(4, "Duck", "Tick");
	std::cout << employee->salary()<<std::endl;
	auto worker = new Worker(4, "Duck", "Tick", 9, 40);
	employee = worker;
	std::cout << employee->salary()<<std::endl;
	auto seller = new Seller(5, "Duck", "Trick", 1000, 2000);
	employee = seller;
	std::cout << employee->salary() << std::endl;
	
    //Es ist sinnvoll, da der Seller und Worker beides employees sind. Und somit zurecht von dieser Klasse erben.
    //Employee employee(1,"Robert", "Bla");
    //Worker worker(2, "Ronny", "Blub", 9, 80);
    //Seller seller(3, "Robby", "Bubble", 11, 24);
    //
    //std::cout << employee.getId() << std::endl;
    //std::cout << employee.getLastname() << std::endl;
    //std::cout << employee.getFirstname() << std::endl;
    //std::cout;
    //std::cout << worker.getId() << std::endl;
    //std::cout << worker.getLastname() << std::endl;
    //std::cout << worker.getFirstname() << std::endl;
    //std::cout << worker.salary() << std::endl;
    //std::cout;
    //std::cout << seller.getId() << std::endl;
    //std::cout << seller.getLastname() << std::endl;
    //std::cout << seller.getFirstname() << std::endl;
    //std::cout << seller.salary() << std::endl;
    //std::cout;
    //employee = worker;
    //std::cout << employee.salary()<< std::endl;
    //employee = seller;
    //std::cout << employee.salary()<< std::endl;
    //worker = seller;
    //std::cout << worker.salary()<< std::endl;
    //seller = worker;
    //std::cout << seller.salary()<< std::endl;
    //worker = employee;
    //std::cout << worker.salary()<< std::endl;
    //seller = employee;
    //std::cout << seller.salary()<< std::endl;
    
    //Employee greift auf die Methode des Workers/Sellers zu aber mit den eigenen Werten, die im employee nicht existieren, deswegen wie erwartet die Ausgabe 0.
    
}
