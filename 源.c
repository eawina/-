#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int ret=0,ch=0;
	char password[20] = { 0 };
	printf("�������û�����:>");
	scanf("%s",&password);
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("��ȷ�ϣ�Y/N��:");
	ret = getchar();
	if (ret == 'Y')
		printf("ȷ�ϳɹ�");
	else
		printf("����ȷ��");

	return 0;
}