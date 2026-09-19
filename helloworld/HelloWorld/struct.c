#include<stdio.h>
#include<string.h>

// num:输入整数, buf:输出数组, 返回:位数
int get_bits_array(int num, int buf[])
{
    int cnt = 0;
    if (num == 0) // 单独处理0
    {
        buf[0] = 0;
        return 1;
    }
    while (num > 0)
    {
        buf[cnt] = num % 10; // 取出个位
        num = num / 10;      // 去掉个位
        cnt++;
    }
    // 反转数组，变成高位在前
    for (int i = 0; i < cnt / 2; i++)
    {
        int temp = buf[i];
        buf[i] = buf[cnt - 1 - i];
        buf[cnt - 1 - i] = temp;
    }
    return cnt;
}

int main(void)
{
    int arr[10];
    int len = get_bits_array(123, arr);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
//typedef struct stu
//{
//	char name[10];
//	int age;
//}S;
//void changestu(S* stu1);
//
//int main()
//{
//	S stu1 = { "aaa",1 };
//	changestu(&stu1);
//	printf("改变后是%s %d\n", (stu1).name, (stu1).age);
//	return 0;
//}
//void changestu(S* stu1)
//{
//	printf("改变前是%s %d\n", (*stu1).name, (*stu1).age);
//	printf("请输入改变的名字和年纪\n");
//	scanf("%s %d", &(*stu1).name,&(*stu1).age);
//	
//	
//}
//
//typedef struct message
//{
//	int phonegnumber;
//	char address[100];
//}M;
//typedef struct stu
//{
//	char name[10];
//	int age;
//	M message;
//}S;
//
//int main()
//{
//	S stu1 = { "aaa",10,{120000	,"idk"} };
//	printf("%d\n", stu1.message.phonegnumber);
//	return 0;
//}