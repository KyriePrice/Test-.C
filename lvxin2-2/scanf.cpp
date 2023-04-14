#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int nNumb = 150;
	char sName[20];
	printf("请输入一个员工的工号、姓名【以空格间隔】：");
	scanf("%d %s", &nNumb, &sName);
	//软件崩溃就在此处，操作系统在思考这家伙在搞破坏吗？
	//最终决定强制踢出，强制程序结束，这就是平时大家所说的bug

	printf("你输入的工号：%d \n", nNumb);
	printf("你输入的姓名：%s \n", sName);
	return 0;
}
