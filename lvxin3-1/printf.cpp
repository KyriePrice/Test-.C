#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int nNumb;
	char sName[20];
	float fSalary = 0.0f;

	printf("������һ��Ա���Ĺ��š������͹��ʡ��Կո�����\n");
	scanf("%d %s %f", &nNumb, &sName, &fSalary);
	printf("������Ĺ��ţ�%d\t������%s\t���ʣ�%f\n",
		nNumb, sName, fSalary);

	printf("nNumb�ĵ�ַ�ǣ�0x%p\nsName�ĵ�ַ�ǣ�0x%p\n fSalary�ĵ�ַ�ǣ�0x%p\n",
		&nNumb, sName, &fSalary);

	return 0;
}
