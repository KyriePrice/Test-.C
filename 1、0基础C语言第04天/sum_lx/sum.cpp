#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n1, n2, n3;//����3��ѧ��
	char s1[20], s2[20], s3[20];
	float m1, m2, m3;//math
	float c1, c2, c3;//chinese
	float e1, e2, e3;//english
	float sum = 0;
	printf("�������1��ѧ������Ϣ��");
	scanf("%d %s %f %f %f", &n1, s1, &m1, &c1, &e1);
	printf("�������2��ѧ������Ϣ��");
	scanf("%d %s %f %f %f", &n2, s2, &m2, &c2, &e2);
	printf("�������3��ѧ������Ϣ��");
	scanf("%d %s %f %f %f", &n3, s3, &m3, &c3, &e3);
	//puts("ѧ��\t����\t��ѧ\t����\tӢ��\t�ܷ�\tƽ����");//puts�Դ�����
	printf("ѧ��\t����\t��ѧ\t����\tӢ��\t�ܷ�\tƽ����\n");//�����ֶ�ָ������
	sum = m1 + c1 + e1;//95.5 100
	printf("%-6d%-16s%6g%6g%6g%6g%6.1f\n", n1, s1, m1, c1, e1,sum,sum/3);
	sum = m2 + c2 + e2;
	printf("%-6d%-16s%6g%6g%6g%6g%6.1f\n", n2, s2, m2, c2, e2, sum, sum / 3);
	sum = m3 + c3 + e3;
	printf("%-6d%-16s%6g%6g%6g%6g%6.1f\n", n3, s3, m3, c3, e3, sum, sum / 3);
	sum = m1 + m2 + m3;
	printf("��ѧƽ�����ǣ�%0.1f\n", sum / 3);
	sum = c1 + c2 + c3;
	printf("����ƽ�����ǣ�%0.1f\n", sum / 3);
	sum = e1 + e2 + e3;
	printf("Ӣ��ƽ�����ǣ�%0.1f\n", sum / 3);
	return 0;
}