#pragma once
#include "Map.h"
#include "Player.h"

class GameLoop
{
public:
	GameLoop();
	void initialiseGame();
	void playGame();
	void processMove();

private:
	Map _map;
	Player _player;
	bool _keepPlaying;
};

