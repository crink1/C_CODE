#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>

int main()
{
	int a = 100;
	int* p = &a;//pa��ָ�����
	printf("%d\n", a);
	printf("%d", *p);
	return 0;
}