#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0, sal = 0;
	puts("请输入你本月的销售量：");
	scanf("%d", &n);
	if (n < 100)
		sal = n * 20;
	else
		sal = n * 30;
	printf("你本月销售了%d件，销售提成为：%d\n",n,sal);
	return 0;
}