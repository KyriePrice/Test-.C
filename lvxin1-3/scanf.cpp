#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x = 0, y = 0;
	printf("�������������֡���ʽ�ǣ�x=��,y=������");
	scanf("x=%d,y=%d", &x, &y);//scanf�����ǻ�ϸ������ݽ������룬������printf����ʹ��

	printf("��������ǣ�x = % d, y = % d\n", x,y);
	return 0;
}
