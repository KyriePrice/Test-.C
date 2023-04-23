#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n1, n2, n3;//代表3个学号
	char s1[20], s2[20], s3[20];
	float m1, m2, m3;//math
	float c1, c2, c3;//chinese
	float e1, e2, e3;//english
	float sum = 0;
	printf("请输入第1个学生的信息：");
	scanf("%d %s %f %f %f", &n1, s1, &m1, &c1, &e1);
	printf("请输入第2个学生的信息：");
	scanf("%d %s %f %f %f", &n2, s2, &m2, &c2, &e2);
	printf("请输入第3个学生的信息：");
	scanf("%d %s %f %f %f", &n3, s3, &m3, &c3, &e3);
	//puts("学号\t姓名\t数学\t语文\t英语\t总分\t平均分");//puts自带换行
	printf("学号\t姓名\t数学\t语文\t英语\t总分\t平均分\n");//必须手动指定换行
	sum = m1 + c1 + e1;//95.5 100
	printf("%-6d%-16s%6g%6g%6g%6g%6.1f\n", n1, s1, m1, c1, e1,sum,sum/3);
	sum = m2 + c2 + e2;
	printf("%-6d%-16s%6g%6g%6g%6g%6.1f\n", n2, s2, m2, c2, e2, sum, sum / 3);
	sum = m3 + c3 + e3;
	printf("%-6d%-16s%6g%6g%6g%6g%6.1f\n", n3, s3, m3, c3, e3, sum, sum / 3);
	sum = m1 + m2 + m3;
	printf("数学平均分是：%0.1f\n", sum / 3);
	sum = c1 + c2 + c3;
	printf("语文平均分是：%0.1f\n", sum / 3);
	sum = e1 + e2 + e3;
	printf("英语平均分是：%0.1f\n", sum / 3);
	return 0;
}