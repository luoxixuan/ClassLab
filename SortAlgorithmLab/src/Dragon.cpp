#include "stdafx.h"
#include "Dragon.h"


Dragon::Dragon()
{
	x = 0;
	y = rand() * 10000;
	dir = rand()%4;
}

Dragon::~Dragon()
{
}

// ÔËËã·û
bool Dragon::operator <=(Dragon & a) const
{
	if (y <= a.getY())
		return true;
	else
		return false;
}

// ¶Á
float Dragon::getY()
{
	return y;
}
float Dragon::getX()
{
	return x;
}
int Dragon::getDir()
{
	return dir;
}

// Ð´
float Dragon::setX(float xTmp)
{
	x = xTmp;
	return x;
}
float Dragon::setY(float yTmp)
{
	y = yTmp;
	return y;
}
int Dragon::setDir(int dirTmp)
{
	dir = dirTmp;
	return dir;
}