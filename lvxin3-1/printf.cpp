#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int nNumb;
	char sName[20];
	float fSalary = 0.0f;

	printf("请输入一个员工的工号、姓名和工资【以空格间隔】\n");
	scanf("%d %s %f", &nNumb, &sName, &fSalary);
	printf("你输入的工号：%d\t姓名：%s\t工资：%f\n",
		nNumb, sName, fSalary);

	printf("nNumb的地址是：0x%p\nsName的地址是：0x%p\n fSalary的地址是：0x%p\n",
		&nNumb, sName, &fSalary);

	return 0;
}
