#pragma once
#include <iostream>


class Log {
public:
	void LogError(std::string message);
	void LogWarning(std::string message);
	void LogInfo(std::string message);

};


