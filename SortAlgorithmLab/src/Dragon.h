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
	//�����
	bool operator<=(Dragon & a)const;
	//��ȡ��
	float getY();
	float getX();
	int getDir();
	//д����
	float setY(float yTmp);
	float setX(float xTmp);
	int setDir(int   dirTmp);


};

