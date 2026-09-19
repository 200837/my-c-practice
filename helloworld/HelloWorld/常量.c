#include <stdio.h>
#include <windows.h>
#include <locale.h>  // 新增区域设置头文件
	//一个项目中不能有两个main函数，否则会报错
int main2() {
    //定义一个变量a
    //vc中变量必须在最上面定义
    int a;

	//一条语句可以定义多个变量
    int x = 1, y = 2, z = 3;

    //变量一定要赋值，不然使用该变量会报错
    /*eg:int m;
    printf("%d", m);*/
    //整型常量
    a = 10;
    //浮点型常量
    float b = 3.14;

    float e = .93; // 0.93
    float f = 18.;  // 18.0
    float g = 1e-3; // 0.001
    float h = 1.34e10; // 13400000000.0

    //字符型常量
    //字符型必须有且只有一个字符，且必须用单引号括起来
    char c = 'a';
    //字符串型常量
    char d[] = "helloworld";


    //输出常量
    printf("%d\n", a);//decimal
    printf("%f\n", f);//floating-point
    printf("%c\n", c);//character
    printf("%s\n", d);//string
   
	//下面的输出不知道为什么存在乱码，可能是因为控制台编码问题,
    printf("这是小明他现在%d岁了\n",18);
    printf("这是%s，他现在%d岁了\n", "小明", 18);
   


    float money = 100.01;
    money = money + 2;
    printf("now you have %f$", money);
    return 0;
}
