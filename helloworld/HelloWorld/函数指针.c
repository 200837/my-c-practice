//#include<stdio.h>
//int jia(int num1, int num2);
//int jian(int num1, int num2);
//int main()
//{
//	printf("请输入两个数\n");
//	int num1, num2;
//	scanf("%d", &num1);
//	scanf("%d", &num2);
//	printf("请输入操作代码\n");
//	//1:+
//	//2:-
//	int num3;
//	scanf("%d", &num3);
//
//	//定义函数指针数组
//	int (*arr[2])(int, int) = { jia,jian };
//	int res = arr[num3-1](num1,num2);//注意索引是num3-1
//	printf("结果是%d\n", res);
//
//	
//
//
//
//
//	return 0;
//}
//int jia(int num1,int num2)
//{
//	return (num1 + num2);
//}
//int jian(int num1, int num2)
//{
//	return (num1 - num2);
//}
//
//
//
