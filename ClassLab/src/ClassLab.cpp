// ClassLab.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	;
	ClassDerive appDerive(2);
	ClassBase * appBaseP = &appDerive;

	appBaseP->printData();
	appDerive.printData();

	//delete appBaseP;
	appBaseP = NULL;

	std::cout << "the size of char  :\t"  << sizeof(char)        << std::endl;
	std::cout << "the size of int   :\t"  << sizeof(int)         << std::endl;
	std::cout << "\nthe size of Base  :\t"<< sizeof(ClassBase)   << std::endl;
	std::cout << "the size of Derive:\t"  << sizeof(ClassDerive) << std::endl;
	

	getchar();

	return 0;
}

