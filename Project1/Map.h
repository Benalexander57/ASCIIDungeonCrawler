#pragma once

#include <string>
#include <vector>
using namespace std;

#include "Player.h"

class Map
{
public:
	Map();
	void loadMap(string filename, Player &player);
	void printMap();
	void processMove(Player &player);

private:
	vector<string> _map;
};

