#include "GameLoop.h"
#include "Level.h"


GameLoop::GameLoop()
{
}

void GameLoop::playGame()
{
	//load the map data from the input file
	Level level;
	level.loadMap("level1.txt");


}
