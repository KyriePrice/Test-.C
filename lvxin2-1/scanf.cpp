#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int nNumb;
	char sName[20];
	//下面这行代码是一个错误的scanf的用法
	printf("请输入你的工号和姓名:");
	scanf("%d*%s", &nNumb, &sName);

	printf("你输入的工号是：%d \n", nNumb);
	printf("你输入的姓名是：%s \n", sName);
	return 0;
}
