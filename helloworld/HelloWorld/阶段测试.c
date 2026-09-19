#include<stdio.h>
#pragma warning(disable : 4996)
int main7()
{
	float lg, wd, ht;
	printf("请分别输入长宽高");
	scanf("%f %f %f", &lg, &wd, &ht);
	printf("A面面积是%.2f\n", lg * wd);
	printf("B面面积是%.2f\n", wd * ht);
	printf("C面面积是%.2f\n", lg * ht);
	printf("B面面积是%.2f\n", wd * ht);
	printf("体积是%.2f\n", wd * ht * lg);

}