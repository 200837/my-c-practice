#include "stdio.h"
#include "stdlib.h"

void main() {
	printf("Hello World!\n");
}




//int main() {
//	while (1)
//	{
//		int input1 = 0;
//		int input2 = 0;
//		int option = 0;
//		printf("请输入一个数字\r\n");
//		scanf_s("%d", &input1);
//		printf("请输入另一个数字\r\n");
//		scanf_s("%d", &input2);
//		printf("请输入操作选项对应的数字\r\n :1-加法, 2-减法, 3-乘法, 4-除法\r\n");
//		scanf_s("%d", &option);
//		switch (option)
//		{
//		case 1:
//			printf("结果是:%d\r\n", input1 + input2);
//			break;
//		case 2:
//			printf("结果是:%d\r\n", input1 - input2);
//			break;
//		case 3:
//			printf("结果是:%d\r\n", input1 * input2);
//			break;
//		case 4:
//			if (input2 == 0) {
//				printf("除数不能为0\r\n");
//				break;
//			}
//			printf("结果是:%d\r\n", input1 / input2);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	while (a<=100)
//	{
//		if (a % 2 == 1)
//		{
//			printf("%d是奇数\r\n", a);
//		}
//		a++;
//	}
//}


//int main()
//{
//	int a = 1;
//	int b = 100;
//	int temp = 0;
//
//	int *pa = &a;
//	int *pb = &b;
//	
//	temp = *pa;
//	a = *pb;
//	b = temp;
//	printf("a=%d,b=%d\r\n", a, b);
//	
//}

//int main()
//{
//	int input_Data[4] = {1,2,3,4};
//	int sum = 0;
//	double average = 0;
//	int length = sizeof(input_Data) / sizeof(input_Data[0]);
//	int *arr1 = (int*)malloc(length * sizeof(int));
//	if (arr1 == NULL)
//	{
//		printf("内存炸了\r\n");
//		return -1;
//	}
//	for (int i = 0; i < length; i++)
//	{
//		arr1[i] = input_Data[i];
//	}
//	
//	for (int i = 0; i < length; i++)
//	{
//		printf("%d\r\n", arr1[i]);
//	}
//	for(int i = 0; i < length; i++)
// {
// sum = sum + arr1[i];
// }
// average = sum / (double)length;
// printf("平均值是:%.4f\r\n", average);
//	free(arr1);
//	arr1 = NULL;//建议置空以防止野指针
//	return 0;
//}

//也就是说malloc三大注意事项1，判断返回值是否为NULL,2,free释放内存，3.释放后置空指针
//typedef struct ScoreSheet
//{
//	char name[1000];
//	int score;
//}SS;
//SS noname37;
//int main()
//{
//	printf("请输入姓名和成绩\r\n");
//	scanf_s("%s %d", noname37.name, (unsigned)_countof(noname37.name), &noname37.score);//scanf_s在输入数组时需要指定数组的长度
//	printf("姓名:%s,成绩:%d\r\n", noname37.name, noname37.score);
//}