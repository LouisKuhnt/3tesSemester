#include <iostream>
#include "ArrayList.h"
using namespace std;

int main() {
    
    ArrayList<int, 4> numbers;
    numbers[0]=1;
    numbers[1]=2;
    numbers[2]=3;
    numbers[3]=4;
    
    auto it =numbers.begin();
    auto end=numbers.end();
    
    while (it!=end) 
    {
        std::cout << *it << std::endl;
        ++it;
    };
    
    for (auto number : numbers) 
    {
        std::cout << number << std::endl;
    }
        
    return 0;
}