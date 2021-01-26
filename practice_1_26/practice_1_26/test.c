#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void buddle_sort(int *arr,int count)
//{
//	int check = 1;
//	int i, j;
//	for (i = 0; i < count; i++)
//	{
//		for (j = 0; j < count-i-1; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				check = 0;
//			}
//		}
//		if (check)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	buddle_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void init(int *arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
void print(int *arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(arr + i));
	}
	printf("\n");
}
//void reverse(int *arr, int sz)
//{
//	int start = 0;
//	while (start <= sz)
//	{
//		sz--;
//		int tmp = arr[start];
//		arr[start] = arr[sz];
//		arr[sz] = tmp;
//		start++;
//	}
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int arr[10];
//	init(arr, 10);
//	print(arr, 10);
//	print(arr1, sz);
//	reverse(arr1, sz);
//	print(arr1, sz);
//	return 0;
//}
//void swap_arr(void *arr1, void *arr2, int num, int width)
//{
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		int count = width;
//		while (count)
//		{
//			char tmp = *(char *)arr1;
//			*((char *)arr1) = *((char *)arr2);
//			*((char *)arr2) = tmp;
//			((char *)arr1)++;
//			((char *)arr2)++;
//			count--;
//		}
//	}
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr2[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	print(arr1, sz);
//	print(arr2, sz);
//	swap_arr(arr1, arr2, sz, sizeof(arr1[0]));
//	print(arr1, sz);
//	print(arr2, sz);
//	return 0;
//}
void swap1(int * n, int * m)
{
	*n = (*n) ^ (*m);
	*m = (*n) ^ (*m);
	*n = (*n) ^ (*m);
}
void swap2(int * n, int *m)
{
	*n = *n + *m;
	*m = *n - *m;
	*n = *n - *m;
}
int main()
{
	int i = 1;
	int j = 2;
	printf("%d %d\n", i, j);
	swap1(&i, &j);
	printf("%d %d\n", i, j);
	swap2(&i, &j);
	printf("%d %d", i, j);
	return 0;
}