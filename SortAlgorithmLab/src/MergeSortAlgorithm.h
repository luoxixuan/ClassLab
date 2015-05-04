#pragma once

using namespace std;

typedef unordered_map<int, int> iMap;

/* *
 * 归并排序算法，驱动函数；
 */
template <typename Comparable>
void mergeSort(vector<Comparable> & a)
{
	vector<Comparable> tmpArray(a.size());
		
	mergeSort( a, tmpArray, 0, a.size() - 1);
}

/* * 
 * Internal method that makes recursive calls
 * a is an array of Comparable items.
 * tmpArray is an array to place the subarray.
 * left is the left-most index of the subarray.
 * right is the right-most index of the subarray.
*/
template <typename Comparable>
void mergeSort(vector<Comparable> & a,
			   vector<Comparable> & tmpArray, int left, int right)
{
	if ( left < right) {
		int center = (left + right) / 2;
		mergeSort(a, tmpArray, left, center);
		mergeSort(a, tmpArray, center + 1, right);
		merge(a, tmpArray, left, center + 1, right);
	}
}

/* *
 * Internal method that merges two sorted halve of a subarray.
 * a is an array of Comparable items
 * tmpArray is an array to place the merged result.
 * leftPos is the left-most index of the second half.
 * rightPos is the index of the start of the second half.
 * rightend is the right-most index of the subarray.
*/
template <typename Comparable>
void merge(vector < Comparable> & a, vector<Comparable> & tmpArray,
		   int leftPos, int rightPos, int rightEnd)
{
	int leftEnd = rightPos - 1;
	int tmpPos = leftPos;
	int numElements = rightEnd - leftPos + 1;

	// Main loop
	while( leftPos <= leftEnd && rightPos <= rightEnd) {
		if (a[ leftPos ] <= a[ rightPos]) {
			tmpArray[tmpPos++] = a[leftPos++];
		}
		else {
			tmpArray[tmpPos++] = a[rightPos++];
		}
	}
	while ( leftPos <= leftEnd) {
		tmpArray[tmpPos++] = a[leftPos++];
	}
	while (rightPos <= rightEnd) {
		tmpArray[tmpPos++] = a[rightPos++];
	}

	// Copy tmpArray back
	for(int i = 0; i < numElements; i++,rightEnd-- ) {
		a[rightEnd] = tmpArray[rightEnd];
	}
}