#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x = 0, y = 0;
	printf("请输入两个数字【格式是：x=…,y=…】：");
	scanf("x=%d,y=%d", &x, &y);//scanf不能是混合各种内容进行输入，不能像printf那样使用

	printf("你输入的是：x = % d, y = % d\n", x,y);
	return 0;
}
