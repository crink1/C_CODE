#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
typedef int type;//�Զ�������
//int main()
//{
//	int a = 20;
//	int b = 10;
//	//��Ŀ������
//	int max=a > b ? a : b;
//	printf("%d",max);
//  return 0;
//}
int main()
{	
	type x = 6;
	int a = 3;
	int b = 5;
	int c = 100;
	//���ű��ʽ���������Ҽ��㣬���Ϊ���һ�����ʽ
	int d = (a += 2, b = a - 5, c = a + b);
	printf("%d%d", d, x);
	return 0;
}