#include<stdio.h>

//int main()//1
//{
//	//int a = 10;
//	//int* p = &a;
//	//p = p + 1;//+一个步长（即int的占用空间（4字节））
//	//printf("%p\n", p);
//	//p = p + 1;
//	//printf("%p\n", p);
//	//p = p - 2;
//	//printf("%p\n", p);
//
//
//	int arr[] = {1,2,3,4,5,6};
//	int* p = &arr[0];
//	p = p + 1;
//	p = p - 1;
//	printf("%p\n", p);
//
//	int* p1 = &arr[5];
//	printf("相隔了%d个步长\n", p1 - p);
//
//
//	//野指针：指针指向的空间还未分配
//	//悬空指针：指针指向的空间被分配但已经释放
//
//
//	//
//
//	return 0;
//}








//void指针，让函数更具通用性
//void swap(void* p1, void* p2, int len);
//
//int main()
//{
//	long a = 10L;
//	long b = 20L;
//	printf("%ld %ld\n", a, b);
//	int len = sizeof(a);
//	swap(&a, &b, len);
//
//
//	printf("%ld %ld\n", a, b);
//
//
//	return 0;
//}
//
//void swap(void* p1, void* p2, int len)
//{
//	char* pc1 = (char*)p1;
//	char* pc2 = (char*)p2;
//	for (int i = 0; i < len; i++)
//	{
//		char temp = *pc1;
//		*pc1 = *pc2;
//		*pc2 = temp;//注意是修改内存的值
//
//		pc1++;
//		pc2++;
//		
//	}
//}
