//������2 3 5 7 11 13 17 19 23
//������4 6 8 9 10 
#include <stdio.h>

int main()
{
	int n;
	int flag = 0;
	int i = 2;
	printf("����һ�����������������ж��Ƿ���������");
	scanf_s("%d", &n);//19
	while (i < n)
	{
		if (n % i == 0)
		{
			flag = 1;
			break;//�ҵ���һ����ֵ���������������
		}
			
		++i;
	}
	if(flag == 0)
		printf("������������ǣ�%d ������", n);
	else
		printf("������������ǣ�%d �Ǻ���", n);

	return 0;
}