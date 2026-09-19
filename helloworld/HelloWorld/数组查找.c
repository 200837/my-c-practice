#include<stdio.h>
//int order(int arr[], int len, int num )//基本查找索引
//{
//	for (int i = 0; i < len; i++)
//	{
//		if (num == arr[i])
//		{
//			return i;//index意为索引
//		}
//	}
//	return -1;
//}

//int Binarysearch(int arr[], int len, int num)//二分查找，返回索引，没有返回-1
//{
//	int min = 0;
//	int max = len - 1;
//
//	while (min <= max)
//	{
//		int mid = (max + min) / 2;
//		if (arr[mid] < num)
//		{
//			min = mid + 1;
//		}
//		else if (arr[mid] > num)
//		{
//			max = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
int Interpolation_Search(int arr[], int len, int num)//插值查找，返回索引，没有返回-1
{
	int min = 0;
	int max = len - 1;

	while (min <= max)
	{
		int mid = min + ((num - arr[min]) / (arr[max] - arr[min])) * (max - min);
		if (arr[mid] < num)
		{
			min = mid + 1;
		}
		else if (arr[mid] > num)
		{
			max = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main16()
{
	////基本查找
	//int arr[] = { 1,2,3,411,234,14124 };
	//int num = 1;
	//int len = sizeof(arr) / sizeof(arr[0]);
	//printf("%d\n", order(arr, len, num));

	





	//二分查找，一定要有顺序
	int arr[] = { 7,23,79,81,103,127,131,147 };
	int num = 131;

	int len = sizeof(arr) / sizeof(arr[0]);

	int index = Interpolation_Search(arr, len, num);
	printf("%d\n", index);

	//插值查找
	//数据要有序，且数据尽可能均匀一点的时候效率更高



	return 0;
}
