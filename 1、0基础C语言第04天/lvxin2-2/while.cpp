#include <stdio.h>
//�ؼ��֣�if else while
int main()
{
	int i = 1,sum = 0;//��ʼ����
	while (i < 100)//��������i����ÿ��+1������100��ʱ�����
	{//��һ�ν�����i = 1,99�ܽ�����100�������ܽ���
		sum = sum + i;
		i = i + 1;//������
	}
	printf("sum = %d\n", sum);
	return 0;
}