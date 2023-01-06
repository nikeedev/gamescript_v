#include "CreateGame.h"
#include <iostream>
#include "Log.h"

void PaintGame(Vector2 Position, const char* Player, Vector2 WorldSize)
{
	std::cout << "Running Game..." << std::endl;
	std::cout << " ";
	for (int k = 0; k < WorldSize.x; k++) {
		std::cout << "___";
	}
	std::cout << "\n";
	for (int j = 0; j < WorldSize.y; j++)
	{
		std::cout << "|";
		for (int i = 0; i < WorldSize.x; i++)
		{
			std::cout << "  ";
			if (i == Position.x - 1)
			{
				if (j == Position.y)
				{
					std::cout << Player;
				}
				else {
					std::cout << " ";
				}
			}
			else {
				std::cout << " ";
			}
		}
		std::cout << "|";
		if (!(j > WorldSize.y - 1))
			std::cout << "\n";
	}
	std::cout << " ";
	for (int g = 0; g < WorldSize.x; g++) {
		std::cout << "---";
	}
	std::cout << "\n";
}
