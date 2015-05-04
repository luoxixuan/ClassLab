#include "stdafx.h"
#include "ClassDerive.h"


ClassDerive::ClassDerive()
{
	std::cout << "Derive default struct" << std::endl;
}

ClassDerive::ClassDerive(int a)
	:deriveInt(a)
{
	std::cout << "Derive struct\n" << std::endl;
}

ClassDerive::~ClassDerive()
{
	std::cout << "Derive delete\n" << std::endl;
}

void ClassDerive::printData()
{
	std::cout << " Derive data print:\t" << deriveInt << "\n" <<std::endl;
}