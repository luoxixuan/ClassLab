// SortAlgorithmLab.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int clockRecord;

void arrayMergeSort(int arrSize, int sortArr[])
{
	iMap map;

	map[1] = 200;
	cout << map[1] << endl;
	// 记录初始时间
	clockRecord = clock();
	// 初始化
	for (size_t i = 0; i < arrSize; i++) {
		sortArr[i] = rand() % 10000;
	}
	// 排序
	merge_sort(sortArr, 0, arrSize - 1);
	// 输出时间
	std::cout << "使用数组算法运行时间:\t" << (clock() - clockRecord) << "ms" << std::endl;
	// 记录时间
	clockRecord = clock();
}

void vectorMergeSort(int arrSize, vector<int> & sortVec)
{
	for (size_t i = 0; i < arrSize; i++) {
		sortVec.push_back( rand() % 100000 );
	}

	clockRecord = clock();

	mergeSort(sortVec);

	std::cout << "使用向量算法运行时间:\t" << (clock() - clockRecord) << "ms" << std::endl;
}

void draMergeSort(int arrSize, vector<Dragon> & sortVec)
{
	//Dragon draTmp;

	for (size_t i = 0; i < arrSize; i++) {
		Dragon draTmp;
		sortVec.push_back(draTmp);
	}

	clockRecord = clock();

	mergeSort(sortVec);

	std::cout << "Dragon向量算法运行时间:\t" << (clock() - clockRecord) << "ms" << std::endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	const int arrSize = 100000;
	//int testArr[arrSize];
	//vector<int> intVec;
	vector<Dragon> draVec;

	//arrayMergeSort( arrSize, testArr);
	//vectorMergeSort( arrSize, intVec);
	draMergeSort( arrSize, draVec);

	getchar();

	return 0;
}

