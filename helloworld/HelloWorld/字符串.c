//#include<stdio.h>
//#include<string.h>
////int main()
////{
////	//char arr[] = "abcd";//arr2是一个数组
////	////{ 'a','b','c','d' ,'\0'};
////	//char* arr1 = "abcd";//arr1是一个地址,abcd只读
////	//char* arr2 = "abcd";
////
////	//printf("%s", arr);
////	//arr1[0] = 'Q';
////	//printf("%p\n", arr1);
////	//printf("%p\n", arr2);
////
////	//char str[10] = "abc";
////	//char* str = NULL;报错
////	/*scanf("%s", str);
////	printf("%s\n", str);
////	int len = sizeof(str) / sizeof(int);
////	*/
////	/*char* p = str;
////	while (1)
////	{
////		
////		if (*p == '\0')
////		{
////			break;
////		}
////		printf("%c\n", *p);
////		p++;
////	}*/
////
////
////
////	//char str[3][100] =
////	//{
////	//	"zhangsan",
////	//	"lisi",
////	//	"wangwu"
////	//};
////	//for (int i = 0; i < 3; i++)
////	//{
////	//	char* p = str[i];
////	//	printf("%s\n", p);//传入的是指针
////	//}
////	/*char* str[3] = { "zhangsan","lisi","wangwu" };
////	for (int i = 0; i < 3; i++)
////	{
////		printf("%s\n", str[i]);
////	}
////*/
////	//char str[4] = "abc";
////	//
////	//printf("%zu\n", strlen(str));
////	//return 0;
////	char* rightusrname = "zhangsan";
////	char* rightpassword = "1234";
////
////
////	for (int i = 1; i < 4; i++)
////	{
////		printf("write\n");
////		char usrname[10];
////		scanf("%s", usrname);
////
////		printf("write\n");
////		char usrpwd[10];
////		scanf("%s", usrpwd);
////
////		if (!strcmp(usrname, rightusrname) && !strcmp(usrpwd, rightpassword))
////		{
////			printf("right");
////
////		}
////		else
////		{
////			if (i == 3)
////			{
////				printf("locked");
////			}
////			printf("try again ,still have %d times to try",3-i);
////		}
////
////		
////	}
////
////}