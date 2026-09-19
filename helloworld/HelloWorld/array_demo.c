#include<stdio.h>
#include<time.h>	
#include<stdlib.h>
int contains(int arr[], int len, int num);//判断是否有重复数字

int main15()
{
	//int arr1[] = { 33,5,22,44,1 };
	//int max = arr1[0];//默认值不能等于0，不然数组中可能为负数
	//int len = sizeof(arr1) / sizeof(arr1[0]);
	//for (int i = 0; i < len; i++)
	//{
	//	if (arr1[i] > max)
	//	{
	//		max = arr1[i];
	//	}
	//}
	//printf("%d\n", max);

//	srand(time(NULL));
//	int arr1[10] = {0};
//	int sum = 0;
//	for (int i = 0; i < 10;)
//	{
//		int num = (rand() % 100) + 1;//是取余而不是除100！
//		
//		if (!contains(arr1, 10, num))
//		{
//			arr1[i] = num;
//			i++;
//		/*	printf("%d\n", num);*/
//
//		}
//	}
//
//
//	for (int i = 0; i < 10; i++)//求和
//	{
//		sum = sum + arr1[i];
//	}
//	printf("%d\n", sum);
//
//
//	int avg = sum / 10;
//	int count = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr1[i] < avg)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//
//	return 0;
//}
//
//int contains(int arr[], int len, int num)//判断是否有重复数字
//{
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[i] == num)
//		{
//			return 1;
//		}
//	}





	int arr[5] = { 0 };
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("请输入5个数据");
	for (int i = 0; i < len; i++)
	{
		int input;
		scanf_s("%d", &input);
		arr[i] = input;
		
	}

	//for (int i = 0; i < len; i++)//反转数组
	//{
	//	for (int j = len-1; i >= 0; j--)
	//	{
	//		if (i < j)
	//		{
	//			int temp = arr[i];
	//			arr[i] = arr[j];
	//			arr[j] = temp;
	//			
	//		}
	//		else
	//		{
	//			break;
	//		}
	//	}
	//}//错误！！！！！！！对循环的理解存在问题，会内循环先执行玩才跳下一个外循环

	int a = 0;
	int b = len - 1;
	while (a < b)
	{
		int temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
		a++;
		b--;
	}
	

	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}









	return 0;
}

