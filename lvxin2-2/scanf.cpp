#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int nNumb = 150;
	char sName[20];
	printf("������һ��Ա���Ĺ��š��������Կո�������");
	scanf("%d %s", &nNumb, &sName);
	//����������ڴ˴�������ϵͳ��˼����һ��ڸ��ƻ���
	//���վ���ǿ���߳���ǿ�Ƴ�������������ƽʱ�����˵��bug

	printf("������Ĺ��ţ�%d \n", nNumb);
	printf("�������������%s \n", sName);
	return 0;
}
