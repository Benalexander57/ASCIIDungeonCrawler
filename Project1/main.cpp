#include <iostream>
#include <string>

#include "GameLoop.h"



int main()
{
	GameLoop gameLoop;
	gameLoop.initialiseGame();
	gameLoop.playGame();

	system("PAUSE");

	return 0;
}