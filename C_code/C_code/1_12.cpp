#include<stdio.h>
int main()
{
again:
	printf("A");
	printf("B");
	printf("C");
	goto again;
	return 0;
}