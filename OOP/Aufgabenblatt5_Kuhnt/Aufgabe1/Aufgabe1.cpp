#include <iostream>
#include <random>
#include <map>
#include <string>
#include <functional>
#include <algorithm>
#include <set>

int main() {
	std::random_device seed;
	// pseudo-random number generator
	std::mt19937 engine(seed());
	
	std::string array[10] = {"Hallo", "Welt", "Mensch", "Cool", "Test", "Vielleicht", "doch", "Kinder", "Programmieren", "C++"};
	std::map<std::string, int> testMap;
	std::string zeichenkette;

	// number distribution
	std::uniform_int_distribution<int> dice(0, 9);
	// roll dice
	for (int i = 0; i < 200; i++){
		zeichenkette = array[dice(engine)];
		testMap[zeichenkette]++;
	}
	
	typedef std::function<bool(std::pair<std::string, int>, std::pair<std::string, int>)> Comparator;
	Comparator compFunctor = [](std::pair<std::string, int> elem1 ,std::pair<std::string, int> elem2)
    {
        return elem1.second > elem2.second;
    };

	std::set<std::pair<std::string, int>, Comparator> setOfWords(testMap.begin(), testMap.end(), compFunctor);
	
	for (std::pair<std::string, int> element : setOfWords){
        std::cout << element.first << " :: " << element.second << std::endl;
	}
	
	auto iter = testMap.begin();
    while (iter != testMap.end()) {
        std::cout << "[" << iter->first << ","
                    << iter->second << "]\n";
        ++iter;
    }
    std::cout << std::endl;

	std::cout << "Ende!" << std::endl;
}
