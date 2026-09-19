#include<stdio.h>
int main10()
{
	//switch 相对case效率更高
	/*int week = 1;
	switch (week)
	{
		case 1:
			printf("1");
			break;
		case 2:
			printf("2");
			break;
		case 3:
			printf("3");
			break;
		case 4:
			printf("4");
			break;
		case 5:
			printf("5");
			break; 
		case 'a':
			printf("1");
			break;
		default:
			break;
	}*/

	int month = 8;
	switch (month)
	{
	case 3:
	case 4:
	case 5:
		printf("现在是春季");
			break;
	case 6:
	case 7:
	case 8:
		printf("现在是夏季");
		break;
	case 9:
	case 10:
	case 11:
		printf("现在是秋季");
		break;
	case 12:
	case 1:
	case 2:
		printf("现在是冬季");
		break;
	default:
		break;
	}
	//当case没有遇到break时，会将case里的代码继续执行，直到switch内代码执行完为止
	//叫做case穿透

	return 0;
}