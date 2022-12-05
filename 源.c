#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int m,a;
	scanf("%d",&m);
	if (m >= 90 && m <= 100)
		a = 1;
	else if (m >= 80 && m < 90)
		a = 2;
	else if (m >= 70 && m < 80)
		a = 3;
	else if (m >= 60 && m < 70)
		a = 4;
	else if (m >= 0 && m <= 60)
		a = 5;
	else
		printf("ÊäÈë´íÎó");
	switch (a)
	{
	case 1:
		printf("A");
		break;
	case 2:
		printf("B");
		break;
	case 3:
		printf("C");
		break;
	case 4:
		printf("D");
		break;
	case 5:
		printf("E");
		break;
	}
	return 0;
}