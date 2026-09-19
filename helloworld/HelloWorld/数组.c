#include<stdio.h>
void printarr(int arr[], int len)//这里传递的实际上是一个变量，记录了首地址，而非数组本身
{
	for (int i = 0; i < len; i++)
	{
		printf("%d", arr[i]);
	}
}
int main14()//14
{

	//double arr[80];//80指长度（80个int数据）
	//数组定义不能修改
	//数组可以通过隐式转换存储小的数据

	//int arr[] = { 1,2,3 };//3
	//int arr[5] = { 1,2,3 };//5
	//int age[5] = { 11,1,12,2,2 };
	////默认值0，0.0,'\0',NULL
	//int num = age[4];//获取
	//printf("%d\n", age[4]);
	//age[4] = 1;
	//printf("%d\n", age[4]);

	//int len =长度;
	//int arr[5] = { 1,2,3,4,5 };
	//for (int i = 0; i < len; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}
	//
	/*int a = 10;
	printf("%p\n", &a);
	*/
	//int arr[] = { 1,2,3 };
	//printf("%p\n", &arr);
	//printf("%p\n", &arr[0]);//&表示首地址
	//printf("%p\n", &arr[1]);//一个int4字节，相差4
	//printf("%p\n", &arr[2]);//索引实际上是内存的偏移量
	//printf("%d", sizeof(arr)/4);

	//数组的注意事项
	//1数组传递的实际上是数组的首地址，如果要在函数中数组遍历，必须传递数组长度
	//int arr[] = { 1,2,3,4,5 };
	//int len = sizeof(arr) / sizeof arr[0];
	//printarr(arr, len);
	////索引从0开始，到长度-1结束



	//return 0;


	
}
