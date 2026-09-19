#include<stdio.h>
#pragma warning(disable : 4996)
int main6()
{
	/*int ip;
	printf("请输入年纪\n");
	scanf_s("%d", &ip);
	printf("%d", ip);
	*/
	
	/*char ip1 = "a";
	printf("%zu\n", sizeof(ip1));

	char ip2[4] = "aaa";
	printf("%s", ip2);*/
	
//字符串的定义:char str[字节数],,
// 	   ps：英文数字英语符号都只占一个字节，中文一个2字节，记得结束标记还会有1字节！！！
//	
	/*char str[3];
	scanf("%s", &str);
	printf("%s", str);*/
	
	//char ip3[3];
	//printf("请输入你的年纪\n");
	//scanf("%s", &ip3);
	//printf("你的年纪是%s岁", ip3);

	//char ip4[100];
	////scanf的第一个参数要与输入相对应
	//scanf("aaa%s", &ip4);
	//printf("%s",ip4);//输入aaa18才是18岁

	
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	printf("%d", num1+ num2);
	
	
	
	
	
	return 0;
}