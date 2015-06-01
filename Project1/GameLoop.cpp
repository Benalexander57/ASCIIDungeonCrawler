#include "GameLoop.h"
#include "Map.h"
#include <iostream>

using namespace std;


GameLoop::GameLoop()
{
}

void GameLoop::initialiseGame()
{
	
	//initialize the player
	_player.init("Ben", 100, 10);

	//load the map data from the input file
	_map.loadMap("level1.txt", _player);

	_map.printMap();

	_keepPlaying = true;
	

}

void GameLoop::playGame()
{
	while (_keepPlaying)
	{
		//print the map
		_map.printMap();

		_map.processMove(_player);

	}

}


}
