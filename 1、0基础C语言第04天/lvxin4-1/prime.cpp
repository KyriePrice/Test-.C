//素数：2 3 5 7 11 13 17 19 23
//合数：4 6 8 9 10 
#include <stdio.h>

int main()
{
	int n;

	int i = 2;
	while (i != 0)
	{
		printf("请输一个整数，我来帮你判断是否是素数：");
		scanf_s("%d", &n);//19
		//每次内层循环之前注意关键变量要重新初始化
		i = 2;
		while (i < n)//35
		{
			if (n % i == 0)
				break;

			++i;
		}
		if (i < n)
			printf("你输入的数字是：%d 是合数\n", n);
		else
			printf("你输入的数字是：%d 是素数\n", n);
	}
	return 0;
}