//������2 3 5 7 11 13 17 19 23
//������4 6 8 9 10 
#include <stdio.h>

int main()
{
	int n;

	int i = 2;
	while (i != 0)
	{
		printf("����һ�����������������ж��Ƿ���������");
		scanf_s("%d", &n);//19
		//ÿ���ڲ�ѭ��֮ǰע��ؼ�����Ҫ���³�ʼ��
		i = 2;
		while (i < n)//35
		{
			if (n % i == 0)
				break;

			++i;
		}
		if (i < n)
			printf("������������ǣ�%d �Ǻ���\n", n);
		else
			printf("������������ǣ�%d ������\n", n);
	}
	return 0;
}