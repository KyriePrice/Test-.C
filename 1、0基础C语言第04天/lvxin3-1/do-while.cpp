#include <stdio.h>
//int main()
//{
//	int i = 200, sum = 0;
//	while (i <= 100)
//	{
//		sum += i;//sum = sum + i;
//		++i;//�ȼ���i=i+1 i++ ++i; i+=1;
//	}
//	printf("����ǣ�%d\n", sum);
//	return 0;
//}

int main()
{
	int i = 200, sum = 0;
	do
	{
		++i;//�ȼ���i=i+1 i++ ++i; i+=1;
		sum += i;
	}
	while (i <= 100);
	printf("����ǣ�%d\n", sum);
	return 0;
}
