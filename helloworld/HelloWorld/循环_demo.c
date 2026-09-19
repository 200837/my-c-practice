#include<stdio.h>
#pragma warning(disable : 4996)
int main11()
{
	//for (int i = 1; 1; i++)//初始化语句;条件判断语句;条件控制语句
	//{
	//	printf("test");
	//}

	//for (int i = 1; i <= 5; i++)
	//{
	//	printf("%d\n", i);
	//}
	//for (int i = 5; i !=0 ; i--)
	//{
	//	printf("%d\n", i);
	//}


	/*int plus = 0;
	for (int i = 1; i <= 5; i++)
	{
		plus = i + plus;
		
	}
	printf("%d", plus);*/
	
	/*变量的生命周期:变量只在所属的大括号中有效*/
	//if (1)
	//{
	//	int a;
	//}
	//printf("%d", a);//


	/*int a = 100;
	int sum = 0;
	for (int i = 0; i <= a; i+=2)
	{
		sum = i + sum;
	}
	printf("%d", sum);
	*/

	//int a = 100;
	//int sum = 0;
	//for (int i = 1; i <= a; i++)
	//{
	//	if (i % 2 != 0)
	//	{
	//		sum = i + sum;
	//	}
	//}
	//printf("%d\n", sum);
	//	
	//int a;
	//int b;
	//int sum = 0;
	//printf("请输入文本\n");
	//scanf("%d", &a);//scanf不能打\n!
	//scanf("%d", &b);
	//if (a <= b)
	//{
	//	for (int i = a; i <= b;i++)
	//	{
	//		if (i % 6 == 0 && i % 8 == 0)
	//		{
	//			sum += i;
	//		}
	//	}
	//	printf("%d", sum);
	//}
	//else
	//{
	//	printf("数字存在问题");
	////}
	//int i = 1;
	//while (i < 10)
	//{
	//	printf("%d", i);
	//	i++;
	//}

	/*float a = 1;
	while (a >= 2)
	{
		a /= 2;
		printf("%f\n", a);
	}
	if (a == 1.0)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	;*/


	//double thick = 0.1;
	//int time = 0;
	//while (thick < 8844430)
	//{
	//	thick += thick;
	//	++time;
	//}
	//printf("%d", time);//27
//整数反转
	/*int a = 4321;
	int rev = 0;
	while (a > 0)
	{
		int temp = a % 10;
		
		a = a / 10;
		rev = temp + rev * 10;
	}
	printf("%d",rev);*/


	/*int ip = 1949;
	int i = 1;
	while (i*i<=ip)
	{
		i++;
	}*/
	//printf("%d", i-1);


	


	/*int a = 121;
	int b = a;
	int output = 0;
	while (a !=0)
	{
		int temp = a % 10;
		a /= 10;
		output = temp + output * 10;
	
	}
	printf("%d\n", output);
	if (output == b)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}*/


//分析问题
//11：3+3+3    +2
//
//
//int dividend = 11;
//int divisor = 3;
//int shang=0;
//
//while (dividend >= 3)
//{
//	dividend -= 3;//计算机中除法实质是减法
//	shang++;
//}
//printf("%d\n", shang);
//printf("%d\n", dividend);

//int plus = 0;
//while (plus+3 < dividend)//0 3 6 9
//{
//	plus = plus + divisor;//3 6 9 12
//	shang++;
//	
//}
//yu = dividend - plus;
//printf("%d\n", shang);
//
//printf("%d\n", yu);

//do while
//int i = 1;
//	do {
//		printf("%d\n", i);
//		i++;
//	} while(i <= 5);



return 0;
}