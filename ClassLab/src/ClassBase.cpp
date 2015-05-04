#include "stdafx.h"
#include "ClassBase.h"

ClassBase::ClassBase()
{
	std::cout << "Base default struct" << std::endl;
}

ClassBase::~ClassBase()
{
	std::cout << "Base delete" << std::endl;
}

void ClassBase::printData()
{
	std::cout << "   Base data print:\t" << baseChar << "\t" << baseFloat << std::endl;
}