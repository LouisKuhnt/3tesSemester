#include <iostream>
#include <vector>
#include <bits/stdc++.h>

namespace to_ip{
	bool countArray(std::string str){
		int n = str.length();
		char char_array[n + 1];
		int count = 0;
	
		std::strcpy(char_array, str.c_str());
		for(int i = 0; i < n; i++){
			if(char_array[i] == '.'){
				count++;
			}
		}
		if(count == 4){
			return true;
		}else{
			return false;
		}
	}
	
	void validateInput(std::string str){
		int n = str.length();
		char char_array[n + 1];
	
		std::strcpy(char_array, str.c_str());
	
		for (int i = 0; i < n; i++){
			if(!std::isdigit(char_array[i]) && char_array[i] != '.'){
				throw std::domain_error("Only digits allowed");
			}
		}
	}
	
	//Ist die to_Ip Methode
	void validateInput(const std::string& str, char delim, int* arrayIp)
	{
		int i = 0;
		int index = 0;
		int pos = str.find(delim);
		std::string test;
	
		if(countArray){
			while (pos != std::string::npos)
			{
				validateInput(test);
				test = str.substr(i, pos - i);
				arrayIp[index] = std::stoi(str.substr(i, pos - i));
				i = ++pos;
				pos = str.find(delim, pos);
				index++;
			}
			arrayIp[index] = std::stoi(str.substr(i, str.length()));
		}else{
			throw std::domain_error("Not a Ip-Address!");
		}
	}
	
	bool validateIP(std::string ip, int* arrayIp)
	{
		for(int i = 0; i < 4; i++)
		{
			//if(validateInput(str)){
				if (arrayIp[i] > 255 || arrayIp[i] < 0){
					return false;   
				}
			//}else{
				//return false;
			//}
		}
		return true;
	}
}
int main() //Getestet mit Hello world; 123.34.56.222; 666.777.888.444; 0.0.0.0; 1.2.3.4; a.b.c.d; 192.168.2f.12
{
    try{
    std::string ip = "123.34.56.222";
	int arrayIp[4] = {};
    //std::cout << "Bitte geben Sie eine zu Validiernde Ip-Adresse ein!\n";
    //std::string ip;
    //std::cin >> ip;
	
	to_ip::validateInput(ip, '.', arrayIp);
	
	if (to_ip::validateIP(ip, arrayIp)){
		std::cout << "Valide IP-Adresse"<< std::endl;
		for(int i = 0; i < 4; i++){
            std::cout << arrayIp[i] << std::endl;
        }
	}else{
		std::cout << "Invalide IP-Adresse"<< std::endl;
    }
	
    } catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }
    
    //////////////////////////////////////////////////////////////////////////////////
    try{
    std::string ip = "666.777.888.444";
	int arrayIp[4] = {};
    //std::cout << "Bitte geben Sie eine zu Validiernde Ip-Adresse ein!\n";
    //std::string ip;
    //std::cin >> ip;
	
	to_ip::validateInput(ip, '.', arrayIp);
	
	if (to_ip::validateIP(ip, arrayIp)){
		std::cout << "Valide IP-Adresse"<< std::endl;
		for(int i = 0; i < 4; i++){
            std::cout << arrayIp[i] << std::endl;
        }
	}else{
		std::cout << "Invalide IP-Adresse"<< std::endl;
    }
	
    } catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }
    
    ////////////////////////////////////////////////////////////////////////////////
    try{
    std::string ip = "0.0.0.0";
	int arrayIp[4] = {};
    //std::cout << "Bitte geben Sie eine zu Validiernde Ip-Adresse ein!\n";
    //std::string ip;
    //std::cin >> ip;
	
	to_ip::validateInput(ip, '.', arrayIp);
	
	if (to_ip::validateIP(ip, arrayIp)){
		std::cout << "Valide IP-Adresse"<< std::endl;
		for(int i = 0; i < 4; i++){
            std::cout << arrayIp[i] << std::endl;
        }
	}else{
		std::cout << "Invalide IP-Adresse"<< std::endl;
    }
	
	
    } catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }
    
    ///////////////////////////////////////////////////////////////////////////////
    try{
    std::string ip = "192.1f8.12.12";
	int arrayIp[4] = {};
    //std::cout << "Bitte geben Sie eine zu Validiernde Ip-Adresse ein!\n";
    //std::string ip;
    //std::cin >> ip;
	
	to_ip::validateInput(ip, '.', arrayIp);
	
	if (to_ip::validateIP(ip, arrayIp)){
		std::cout << "Valide IP-Adresse" << std::endl;
		for(int i = 0; i < 4; i++){
            std::cout << arrayIp[i] << std::endl;
        }
	}else{
		std::cout << "Invalide IP-Adresse" << std::endl;
    }
	
    } catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }
    
    //////////////////////////////////////////////////////////////////////////////
    try{
    std::string ip = "-1.-1.-1.-1";
	int arrayIp[4] = {};
    //std::cout << "Bitte geben Sie eine zu Validiernde Ip-Adresse ein!\n";
    //std::string ip;
    //std::cin >> ip;
	
	to_ip::validateInput(ip, '.', arrayIp);
	
	if (to_ip::validateIP(ip, arrayIp)){
		std::cout << "Valide IP-Adresse"<< std::endl;
		for(int i = 0; i < 4; i++){
            std::cout << arrayIp[i] << std::endl;
        }
	}else{
		std::cout << "Invalide IP-Adresse"<< std::endl;
    }
	
    } catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}