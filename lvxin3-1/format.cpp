#include <stdio.h>

int main()
{//三种基础数据类型：等号右边是常量也可能是变量或者表达式，等号左边一定是变量
	int a = 888;
	int b = a;
	int c = 666 + b;
	float f1 = 888.8832f;
	float f2 = f1 * 2.6f;//精度
	char s1[20] = "abcde";
	char s2[] = "吕鑫老师正在讲解数据类型";
	printf("刚给a变量放入的数据是：%d,他的十六进制：%x", a,a);
	printf("另外给b变量放入的数据是：%d\n", b);
	printf("还有给c变量放入的数据是：%d\n", c);
	//printf("浮点数f1=%f,f2=%f\n", f1,f2);
	//printf("浮点数f1=%0.2f,f2=%0.2f\n", f1, f2);
	printf("浮点数f1=%g,f2=%g\n", f1, f2);
	printf("a变量的地址是：%p,b的地址是：%p\n", &a,&b);
	printf("a变量的地址是：%p,b的地址是：%p\n", &s1, &s2);
	printf("字符串s1内部放入的数据是：%s\n", s1);
	printf("字符串s2内部放入的数据是：%s\n", s2);

	return 0;
}