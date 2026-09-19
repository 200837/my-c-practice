#include<stdio.h>
//void order1(int arr[], int len);
//int main()
//{
//	int arr[] = { 11001,12,1,666,23,436 };
//	int len = sizeof(arr) / sizeof(int);
//	order1(arr, len);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
//
//	return 0;
//}
//
//void order1(int arr[],int len)//冒泡排序，相邻两个比大小，一次能使最大值到最右边
//{
//	for (int j = 0; j < len-1; j++)
//	{
//		for (int i = 0; i < len - 1-j; i++)//先理解内循环做什么，外循环就是做了多少次内循环
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				int temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;
//			}
//		}
//	}
//}



//选择排序
//把小的先挪到左侧
int main17()
{
	int arr[] = { 2,4,3,1,5 };
	int len = sizeof(arr) / sizeof(int);
	for (int j = 0; j < len-1; j++)
	{
		for (int i = j+1; i < len; i++)//j+1：没有必要和自己比较
		{
			if (arr[j] > arr[i])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < len; i++)
	{
		printf("%d\n", arr[i]);
	}
	
	return 0;
}