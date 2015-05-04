#include "stdafx.h"
//归并排序(升序)(分治)
void merge(int Arr[], int begin, int mid, int end)//合并
{
	int i, j, k = 0;
	int List[100000] = { 0 };
	for (i = begin, j = mid + 1; i <= mid&&j <= end;)
		if (Arr[i]<Arr[j])    List[k++] = Arr[i++];
		else   List[k++] = Arr[j++];
		while (i <= mid)
			List[k++] = Arr[i++];
		while (j <= end)
			List[k++] = Arr[j++];

		k = 0;
		for (i = begin; i <= end; i++)
			Arr[i] = List[k++];
}
void merge_sort(int Arr[], int begin, int end)//归并排序
{
	int mid;
	if (begin<end) {
		mid = (begin + end) / 2;//划分
		merge_sort(Arr, begin, mid);
		merge_sort(Arr, mid + 1, end);
		merge(Arr, begin, mid, end);//合并
	}
}