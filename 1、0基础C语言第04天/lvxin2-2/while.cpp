#include <stdio.h>
//关键字：if else while
int main()
{
	int i = 1,sum = 0;//初始化区
	while (i < 100)//条件区：i经过每次+1，到达100的时候结束
	{//第一次进来：i = 1,99能进来，100结束不能进来
		sum = sum + i;
		i = i + 1;//递增区
	}
	printf("sum = %d\n", sum);
	return 0;
}