#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{//公司的员工的销售提成为每销售一件提成20元，如果销售量大于100件则额外奖励500元。
	int n = 0, sal = 0;
	puts("请输入你本月的销售量：");
	scanf("%d", &n);
	sal = n * 20;
	if (n > 100)
		sal = sal + 500;

	printf("你本月总共销售了%d件，提成是%d\n", n, sal);

	return 0;
}
