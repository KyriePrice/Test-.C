#include <stdio.h>
//�������㣺+ - * / %(ģ���㣩������
int main()
{
	int i = 100, sum = 0;
	//�������31�ı����ͽ���ѭ����
	while (i < 130)
	{
		sum += 100;
		if (i % 31 == 0)
			break;
		++i;
	}
	printf("ѭ������ʱ��i=%d\n", i);
	return 0;
}