#include <iostream>
#include "Vector2.h"
#include "CreateGame.h"
#include "Log.h"
#include "Input.h"
#include <stdlib.h>


int main()
{

	Log logger;
	Vector2 worldSize(20, 20);
	Vector2 position(10, 10);
	bool running = true;
	std::string key;

	const char* player = "#";
	
	while (running) {
		system("cls");

		if (position.y <= -1)
			position.y += 1;

		if (position.y >= worldSize.y)
			position.y -= 1;

		if (position.x >= worldSize.x)
			position.x -= 1;

		if (position.x <= -1)
			position.x += 1;

		PaintGame(position, player, worldSize);

		std::cout << "\n"; 
		std::cout << "X: " << position.x << ", Y: " << position.y << std::endl;
		std::cout << "\n";

		key = GetKey("Write up / w | down / s | left / a | right / d or exit or e to exit: ");


		if (key == "up" || key == "u" || key == "w")
			position.y -= 1;

		else if (key == "down" || key == "d" || key == "s")
			position.y += 1;
		
		else if (key == "left" || key == "l" || key == "a")
			position.x -= 1;
		
		else if (key == "right" || key == "r" || key == "d")
			position.x += 1;	

		else if (key == "exit" || key == "e")
			running = false;

		else
			continue;
		
	}

	logger.LogInfo("\nGame Finished");

	std::cin.get();

	return 0;
}
