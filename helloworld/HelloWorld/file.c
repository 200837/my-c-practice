////#include<stdio.h>
////int main()
////{
////	char* file = "C:\\Users\\noname37\\Desktop\\aaa.txt";
////	printf("%s\n", file);
////	FILE* fp = fopen(file, "r");
////	if (fp == NULL)
////	{
////		perror("打开文件失败");
////		return 1;
////	}
////	int c;
////	while ((c = fgetc(fp)) != EOF)
////	{
////		printf("%c\n", c);
////	}
////	fclose(fp);
////
////	return 0;
////}
//
//
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	//SetConsoleOutputCP(CP_UTF8);   // 控制台按 UTF-8 解码输出
//	//FILE* fp = fopen("C:\\Users\\noname37\\Desktop\\aaa.txt", "rb");
//	//if (fp == NULL)
//	//{
//	//	perror("打开文件失败");
//	//	return 1;
//	//}
//	/*char arr[1024];
//	char* str;
//	while ((str = fgets(arr, 1024, fp) != NULL))
//	{
//		printf("%s", arr);
//	}
//	return 0;
//
//	fclose(fp);*/
//	/*char arr[4];
//	size_t a;
//	while ((a = fread(arr, 1, 4, fp)) != 0)
//	{
//		for (size_t i = 0; i < a; i++)
//		{
//			printf("%c", arr[i]);
//		}
//	}
//	fclose(fp);
//	return 0;*/
//	
//	FILE* fp1 = fopen("C:\\Users\\noname37\\Desktop\\新建文件夹\\信号与系统_第三版_郑君里_上.pdf","wb");
//	FILE* fp = fopen("C:\\Users\\noname37\\Desktop\\信号与系统_第三版_郑君里_上.pdf","rb");
//
//	int n;
//	char* arr[1024];
//	while ((n = fread(arr, 1, 1024, fp)) != 0)
//	{
//		fwrite(arr, 1, n, fp1);
//	}
//	
//	return 0;
//
//}