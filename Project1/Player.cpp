#include "Player.h"


Player::Player()
{
}

void Player::init(string name, int health, int attack)
{
	_name = name;
	_health = health;
	_attack = attack;
}

void Player::setPosition(int xPos, int yPos)
{
	_yPos = xPos;
	_yPos = yPos;
}

int Player::getXPos()
{
	return _xPos;
}


int Player::getYPos()
{
	return _yPos;
}