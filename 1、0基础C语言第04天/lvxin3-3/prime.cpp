//素数：2 3 5 7 11 13 17 19 23
//合数：4 6 8 9 10 
#include <stdio.h>

int main()
{
	int n;
	int flag = 0;
	int i = 2;
	printf("请输一个整数，我来帮你判断是否是素数：");
	scanf_s("%d", &n);//19
	while (i < n)
	{
		if (n % i == 0)
		{
			flag = 1;
			break;//找到了一个拆分的整数，不是素数
		}
			
		++i;
	}
	if(flag == 0)
		printf("你输入的数字是：%d 是素数", n);
	else
		printf("你输入的数字是：%d 是合数", n);

	return 0;
}