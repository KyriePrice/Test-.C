#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[80];
	int i;

	printf("Enter your name:����Ҫ����79���ַ��� ");
	scanf("%79s", str);
	//��ʾ�㲻Ҫ����79���ַ����ܹ��ռ�80����ҪԤ��һ����β����
	printf("Enter your age: ");
	scanf("%d", &i);
	printf("Mr. %s , %d years old.\n", str, i);
	printf("Enter a hexadecimal number: ");
	scanf("%x", &i);
	printf("You have entered %#x (%d).\n", i, i);

	return 0;
}