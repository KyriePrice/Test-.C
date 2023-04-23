#include <stdio.h>
//五则运算：+ - * / %(模运算）求余数
int main()
{
	int i = 100, sum = 0;
	//如果遇到31的倍数就结束循环；
	while (i < 130)
	{
		sum += 100;
		if (i % 31 == 0)
			break;
		++i;
	}
	printf("循环结束时：i=%d\n", i);
	return 0;
}