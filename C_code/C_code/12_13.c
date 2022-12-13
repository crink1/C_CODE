#include<stdio.h>
#define 定义常量和宏
#define M 100
#define STR "hello bit"

#define MAX(x, y)  ((x)>(y)?(x):(y))

int main()
{
	printf("%d\n", M);
	printf("%s\n", STR);

	int a = 10;
	int b = 20;
	int m = MAX(a + 3, b);
	//int m = (a > b ? a : b);
	printf("%d\n", m);

	return 0;
}