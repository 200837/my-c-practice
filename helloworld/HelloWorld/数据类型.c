#include<stdio.h>
int main4()
{
	//整数
	short a = 10;//2字节
	int b = 100;//4字节
	long c = 1000L;//windows 4字节，linux x64 8字节，linux x86 4字节
	long long d = 10000LL;
	printf("%ld\n",c);
	printf("%lld\n", d);

	printf("%zu\n",sizeof(a));
	printf("%zu\n", sizeof(b));
	printf("%zu\n", sizeof(c));
	printf("%zu\n", sizeof(d));

	//无符号整数
	//short int:-32768-32727
	short int e = 32769;//非法
	//unsigned short:0-65535（32768+32767）
	unsigned short f = 32769;
	printf("%d\n", e);
	printf("%u\n",f);
	//小数
	//小数分为3种float double longdouble
	float g = 1.34;//保留6位数字
	printf("%f\n",g);
	double h = 1.34;//保留15位数字
	printf("%lf\n", h);
	printf("%.15lf\n", h);
	long double i = 1.34L;//保留18-19位数字？存疑
	printf("%.15lf\n", i);
	printf("%.20lf\n", i);
	//1.34000000000000007994
	//ps:如果超出了变量的范围，则数据不准
	
	printf("%zu\n",sizeof(g));//4字节
	printf("%zu\n", sizeof(h));//8字节
	printf("%zu\n", sizeof(i));//windows8字节，linux12-16字节
	
	
	//字符,只能是ascii码表中的，1个字节
	char j = 'a';
	char c1 = '1';
	//不能中文，
	printf("%c", c1);
	printf("%zu", sizeof(c1));

	return 0;
}
////数据类型复习
//整数：short int long long long  %d %ld %lld 
//小数：float double long double  %f %
//字符：char 