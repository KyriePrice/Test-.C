#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int nNumb;
	char sName[20];
	//�������д�����һ�������scanf���÷�
	printf("��������Ĺ��ź�����:���Զ��ż����");
	scanf("%d,%s", &nNumb, &sName);

	printf("������Ĺ����ǣ�%d \n", nNumb);
	printf("������������ǣ�%s \n", sName);
	return 0;
}

//int main()
//{
//	int nNumb;
//	char sName[20];
//	//�������д�����һ�������scanf���÷�
//	scanf("��������Ĺ���%d������%s", &nNumb, &sName);
//
//	printf("������Ĺ����ǣ�%d \n", nNumb);
//	printf("������������ǣ�%s \n", sName);
//	return 0;
//}
