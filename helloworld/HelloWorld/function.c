#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
//int sum(int a, int b)//形参1和形参2
//{
//	int sum = a + b;
//	
//	return sum;
//}
//函数里面不能有其他函数
int main13()//13
{
	/*
	int i = sum(10, 100);
	printf("%d\n", i);*/
	//double i = pow(2,3.5);
	//printf("%lf\n", i);
	//;

	//printf("%lf\n", sqrt(4));

	//printf("%lf\n", ceil(3.14));

	//printf("%lf\n", floor(3.14));

	//printf("%d\n", abs(-3));//int

	/*long long res = time(NULL);*/
	//srand(1);//设置种子
	//for (int i = 1; i <= 10; i++)
	//{
	//	int a = rand();
	//	printf("%d\n", a);
	////}
	//srand(time(NULL));
	///* printf("%d", rand());*/
	////随机数范围3-98
	////包左不包右，包头不包尾3-99
	////拿着尾巴减开头96
	////修改代码
	//printf("%d\n", rand()%96+3);




	//猜数字小游戏
	/*srand(time(NULL));
	int a = (rand()%100)+1;
	while (1)
	{
		int input;
		printf("猜一个0-100的整数\n");
		scanf_s("%d", &input);
		if (input > a)
		{
			printf("太大了\n");
		}
		else if (input < a)
		{
			printf("太小了\n");
		}
		else if(input==a)
		{
			break;
		}
		
	}
	printf("猜对了！\n");*/
	
	return 0;
}