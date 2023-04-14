#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[80];
	int i;

	printf("Enter your name:（不要超过79个字符） ");
	scanf("%79s", str);
	//提示你不要超过79个字符，总共空间80个还要预留一个结尾符号
	printf("Enter your age: ");
	scanf("%d", &i);
	printf("Mr. %s , %d years old.\n", str, i);
	printf("Enter a hexadecimal number: ");
	scanf("%x", &i);
	printf("You have entered %#x (%d).\n", i, i);

	return 0;
}