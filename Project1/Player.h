#pragma once
#pragma once

#include <string>
using namespace std;

class Player
{
public:
	Player();
	void init(string name, int health, int attack);
	void setPosition(int xPos, int yPos);
	int getYPos();
	int getXPos();

private:
	string _name;
	int _health;
	int _attack;
	int _yPos;
	int _xPos;
};

