#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{//��˾��Ա�����������Ϊÿ����һ�����20Ԫ���������������100������⽱��500Ԫ��
	int n = 0, sal = 0;
	puts("�������㱾�µ���������");
	scanf("%d", &n);
	sal = n * 20;
	if (n > 100)
		sal = sal + 500;

	printf("�㱾���ܹ�������%d���������%d\n", n, sal);

	return 0;
}
