#include<stdio.h>
int main9()
{
	/*int a1 = 10;*/
	/*if (a1 >= 10)
	{
		printf("%d", a1);
	}
	return 0;*/

	//if (a1 - 2)//非0表示“是”
	//{
	//	printf("helloworld");
	//}

	/*int love = 100;
	if (love >= 60)
	{
		printf("ok");
	}
	else
	{
		printf("好吧，那我去睡觉了");
	}*/



	//int ticket1_x = 2;
	//int ticket1_y = 3;
	//int ticket2_x = 3;
	//int ticket2_y = 3;
	//
	//if (ticket2_y == ticket1_y&&(ticket1_x == ticket2_x-1||ticket1_x == ticket2_x + 1))//判断是否相等要用==,不能用=，注意
	//{
	//	printf("看电影");
	//}
	//else
	//{
	//	printf("玩游戏");
	//}
	//

	int money = 100;
	if (0 < money && money < 100)
	{
		printf("你是第一等级用户");
	}
	else if (money <= 199)
	{
		printf("你是第二等级用户");
	}
	else if(money <= 10000)
	{
		printf("你是最高等级用户");
	}
	//首先if不能加上;
	//其次最后可以用else，但那是不加任何条件的时候

	return 0;
}