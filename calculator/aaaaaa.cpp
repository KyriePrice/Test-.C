#include <stdio.h>

int main()
{
	int m, n;//设立2个内存变量
	puts("请输入2个整数：");//注释：向控制台输出一些提示文字
	scanf_s("%d %d", &m, &n);//阻塞等待输入，用m和n两个变量来接收用户的2个整数；
	printf("=%d", m + n);
	return 0;
}