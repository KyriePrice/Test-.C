#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0, sal = 0;
	puts("�������㱾�µ���������");
	scanf("%d", &n);
	if (n < 100)
		sal = n * 20;
	else
		sal = n * 30;
	printf("�㱾��������%d�����������Ϊ��%d\n",n,sal);
	return 0;
}