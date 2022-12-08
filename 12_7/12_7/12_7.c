#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
typedef int type;//自定义类型
//int main()
//{
//	int a = 20;
//	int b = 10;
//	//三目操作符
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
	//逗号表达式，从左向右计算，结果为最后一个表达式
	int d = (a += 2, b = a - 5, c = a + b);
	printf("%d%d", d, x);
	return 0;
}