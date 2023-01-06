#include "Log.h"
#include <iostream>



void Log::LogError(std::string message) {
	
	std::cout << "[ ERROR ]: " << message << std::endl;

}

void Log::LogWarning(std::string message) {
	
	std::cout << "[ WARNING ]: " << message << std::endl;
		
}

void Log::LogInfo(std::string message) {
	
	std::cout << "[ INFO ]: " << message << std::endl;

}

