#include<stdio.h>
//int* swap(int* a, int* b)//
//{
//	int temp = *a;
//	static a1 = 10;
//	*a = *b;
//	*b = temp;
//	return &a1;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d %d\n", a, b);
//	printf("%d\n", *swap(&a, &b));
//		//实际上是将ab的值传递过去，ab值不会发生如何变化
//	
//	printf("%d %d\n", a, b);
//	//int a = 10;
//	//int* p = &a;//变量类型* 变量名 = &变量；
//	////这里的变量类型一定与指向的变量的类型相同
//	//printf("%d\n", *p);//*解引用运算符
//	//*p = 200;//用指针存储/修改数据
//	//printf("%d\n", a);
//	//printf("%d\n", p);
//	return 0;
//}
//
//
//void GetMaxandMin(int arr[], int len, int* max, int* min);
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,9,7 };
//	int len = sizeof(arr) / sizeof(int);
//	int max;
//	int min;
//	GetMaxandMin(arr, len, &max, &min);
//	printf("%d %d\n", min, max);
//	return 0;
//}
//
//void GetMaxandMin(int arr[],int len,int* max,int* min)
//{
//	*max = arr[0];
//	for (int i = 1; i < len; i++)
//	{
//		if (arr[i] > *max)
//		{
//			*max = arr[i];
//		}
//	}
//	*min = arr[0];
//	for (int i = 1; i < len; i++)
//	{
//		if (arr[i] < *min)
//		{
//			*min = arr[i];
//		}
//	}
//
//	
//}

//
//int getreminder(int num1, int num2, int* res);
//
//int main()
//{
//	int a = 1004425; int b = 10002352; int res;
//	if (!getreminder(a, b, &res))
//	{
//		printf("%d\n", res);
//	}
//	return 0;
//}
//
//int getreminder(int num1,int num2,int* res)
//{
//	if (num2 == 0)
//	{
//		return 1;
//	}
//	else 
//	{
//		*res = num1 % num2;
//		return 0;
//	}
//}