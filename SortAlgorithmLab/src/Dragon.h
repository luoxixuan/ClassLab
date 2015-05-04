#pragma once
class Dragon
{
private:
	float x;
	float y;
	int dir;

public:
	Dragon();
	~Dragon();
	//ÔËËã·û
	bool operator<=(Dragon & a)const;
	//¶ÁÈ¡Æ÷
	float getY();
	float getX();
	int getDir();
	//Ğ´ÈëÆ÷
	float setY(float yTmp);
	float setX(float xTmp);
	int setDir(int   dirTmp);


};

