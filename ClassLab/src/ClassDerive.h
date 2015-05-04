#pragma once

class ClassDerive :public ClassBase
{
public:
	ClassDerive();
	ClassDerive(int a);
	~ClassDerive();

	void printData();

private:
	int deriveInt;
};

