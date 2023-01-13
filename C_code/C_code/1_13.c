#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char str[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("输入：“你好”。取消关机");
	scanf("%s", str);
	if (strcmp(str, "你好") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}