//算术运算符
#include<stdio.h>
#pragma warning(disable : 4996)
int main8()
{
	////+-*/%
	////加减乘除取余
	///*printf("%d\n", 10 % 6);*/
	//
	///*
	//tips整数运算一定是整数
	//printf("%f\n", 10 % 6);*///错误

	///*小数计算一定是小数
	//整数和小数运算仍然是小数*/

	///*小数参与计算可能不精确
	//	不能除与0*/
	////取余必须全部都是整数
	///*printf("%d",10.0%3)*/


	////练习
	//int input_num1;
	//int num001;
	//int num002_1;
	//int num002_2;
	//int num003;
	//printf("请输入一个整数\n");
	//scanf("%d", &input_num1);
	//num001 = input_num1 / 100;
	//num002_1 = input_num1 / 10;
	//num002_2 = num002_1 % 10;
	//num003 = input_num1 % 10;
	//printf("%d\n", num001);
	//printf("%d\n", num002_2);
	//printf("%d\n", num003);



	//////隐式转换(大的转化为小的自动进行)
	////在进行计算，赋值时会隐式转换，
	////取值小的和取值大的进行运算，会先转化为大的进行运算
	////char,short在运算时都会先转换为int再运算。


	////强制转换
	///*(short)(变量名)*/
	//short s1 = 10;
	//short s2 = 20;
	//short result = (short)(s1 + s2);
	//printf("%d\n", result);


	//
	////字符相加
	//char aaa = 'a';//先按照acii码表将字符转化为数字，a对应97
	//printf("%d\n", aaa + 1);//98

	////+=
	//int bbb = 1;
	//int ccc = 2;
	//bbb += ccc;
	//printf("%d\n", bbb);

	////逻辑运算符
	////&&（与），||（或）,!（非）
	//printf("%d\n", 1 && 1);//1
	//printf("%d\n", 1 && 0);//0
	//printf("%d\n", 0 && 0);//0
	//printf("%d\n", 0 && 0);//0

	//printf("%d\n", 0 || 0);//0
	//printf("%d\n", 1 || 0);//1

	//printf("%d\n", !(1 || 0));//0


	////练习
	//int ip3;
	//printf("请输入一个2位整数");
	//scanf("%d", &ip3);
	//
	//
	//int ten = ip3 / 10;
	//int ge = ip3 % 10;
	////含有7,return1
	//printf("%d\n", ten != 7 && ge != 7);
	//
	//
	//
	//printf("%d\n", ten != 7 && ge != 7&&(ip3%7)!=0);
	//

	//逻辑运算符的短路效果
	int ddd = 1;
	int eee = 10;
	int fff = 29;
	//ddd > 0 && eee++;//ddd>0则eee+1

	//printf("%d\n", ddd);//1
	//printf("%d\n", eee);//11

	/*三元运算符*/
	
	/*int fff = ddd > eee ? ddd : eee;
	printf("%d",fff);*/

	//三者比大小
	/*int ab_max = ddd > eee ? ddd: eee;
	int max = ab_max > fff ? ab_max : fff;
	printf("%d", max);*/
	int ip4;
	printf("请输入一个整数");
	scanf("%d", &ip4);
	printf("%d\n", (ip4 >= 0 ? ip4 : -ip4, ip4 %= 3, ip4 *= 10));
	

	


	return 0;
}