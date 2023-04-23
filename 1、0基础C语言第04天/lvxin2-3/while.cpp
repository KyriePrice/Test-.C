#include <stdio.h>
int main()
{
	int i = 90, sum = 0;
	while (i <= 100)//90 91 ...99 100
	{
		sum += i;//sum = sum + i;
		++i;//等价于i=i+1 i++ ++i; i+=1;
	}
	printf("结果是：%d\n", sum);
	return 0;
}
