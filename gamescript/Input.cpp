#include <iostream>
#include "Log.h"
#include "Input.h"


std::string GetKey(std::string info)
{
	std::string GotKey;

	std::cout << info;

	std::cin >> GotKey;

	return GotKey;
}

