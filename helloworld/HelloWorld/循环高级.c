#include<stdio.h>
int main12()
{
	//无限循环
	/*for (;;)
	{
		
	}*/

	//while (1)
	//{
	//	printf("helloworld\n");
	//}

	//for (;;)
	//{
	//	printf("helloworld\n");
	//}
	//do
	//{
	//	printf("helloworld\n");
	//} while (1);


	//break
	//for (int i = 1; i <= 100; i++)
	//{
	//	if (i % 3 == 0 && i % 5 == 0)
	//	{
	//		printf("%d", i);
	//		break;
	//	}
	//}
	

	//continue:跳过本次循环

	//for (int i = 1; i<=5;i++)
	//{
	//	if (i == 3)
	//	{
	//		continue;
	//	}
	//	printf("在吃第%d个包子\n", i);
	//}

	/*for (int i = 1; i <= 7; i++)
	{
		for (int j = 1; j <= 8; j++)
		{
			printf("*");
		}
		printf("\n");

	}*/
	
	/*int a = 5;
	for (int i = 1; i <= 5; i++)
	{
		
		for (int j = 1; j <= a; j++)
		{
			printf("*");
		}
		printf("\n");
		a--;
	}*/
	/*int a = 5;
	for (int i = 5; i > 0; i--)
	{
		
		for (int j = i; j <= 5; j++)
		{
			printf("*");
		}
		printf("\n");
		
	}*/
	


	//打印九九乘法表
	//for (int i = 1; i <= 9; i++)
	//{
	//	for (int j = 1; j <= i; j++)
	//	{
	//		printf("%d * %d = %d\t", j, i, j * i);//  \t:制表符 
	//		
	//	}
	//	printf("\n");
	//}

	/*printf("zhangsan\t23\n");
	printf("name\t\tage");*/
	// \t能够自动补全空格，至少补一个，最多补8个，补到8个单位长度的倍数。



	//找质数


	//抽丝拨茧大法
	//找出每一个数
	//判断是否为质数
	//统计
	
	//int number = 100;
	//int count = 0;//几个质数
	//
	//for (int i = 2; i <= number; i ++ )//遍历1-100
	//{
	//	int tof = 0;//有无能被整除的数
	//	for (int j = 2; j < i; j++)//判断i是否为质数
	//	{
	//		if (i % j == 0)
	//		{
	//			tof++;
	//			break;
	//		}
	//	}
	//	if (tof == 0)
	//	{
	//		count++;
	//	}
	//}
	//printf("有%d个质数\n",count);


	//1-10的范围
	//i的i次方
	//求和
	//long long plus = 0L;
	//for (int i = 1; i <= 10; i++)
	//{
	//	long long answer = 1;
	//	for (int j = 1; j <= i; j++)
	//	{
	//		answer = answer * i;
	//		
	//	}
	//	plus = plus + answer;
	//}
	//printf("%lld", plus);//longlong 使用%lld
	

	//和为15的数字练习
	//0-1000
	// 34 
	// 3 4
	//每一位拆开来
	for (int i = 1; i <= 1000; i++)
	{
		int num = i;//将num和i分开来，不让i被干扰陷入死循环
		int temp = 0;
		while (num > 0)
		{
			temp = temp + (num % 10);
			num = num / 10;
		}
		if (temp == 15)
		{
			printf("%d\n", i);
		}
	}



	



	


	return 0;
}