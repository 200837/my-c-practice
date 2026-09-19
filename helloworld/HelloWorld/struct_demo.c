#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

//typedef struct spot
//{
//	char name[10];
//	int count;
//}S;
//
//int main()
//{
//	S spot1[] = { {"A",0}, { "B",0 }, { "C",0 }, { "D",0 } };
//	srand(time(NULL));
//	for (int i = 0; i < 80; i++)
//	{
//		
//		int choose = rand() % 4;
//		spot1[choose].count++;
//		/*switch (num)
//		{
//		case(1):spot1[0].count++; break;
//		case(2):spot1[1].count++; break;
//		case(3):spot1[2].count++; break;
//		case(4):spot1[3].count++; break;*/
//		//}
//	}
//	int max = spot1[0].count;
//	char maxspot[10];
//	strcpy(maxspot, spot1[0].name);
//	for (int i = 0; i < 4; i++)
//	{
//		int temp = spot1[i].count;
//		if (max < temp)
//		{
//			max = temp;
//			strcpy(maxspot, spot1[i].name);
//		}
//	}
//	
//
//
//
//
//	
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%s %d\n", spot1[i].name, spot1[i].count);
//	}
//	printf("去%s\n",maxspot);
//	return 0;
//}

//内存对齐
//typedef struct stu
//{
//	double d;
//	char b;
//	int c;
//}S;//c不支持在结构体中赋值
//
//int main()
//{
//	int a;
//	S stu1 = { 1.0,'a',100 };
//	printf("%zu\n", sizeof(stu1));
//	printf("%d\n",&stu1.d);
//}