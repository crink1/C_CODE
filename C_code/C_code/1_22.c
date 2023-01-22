#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 0, j = 0, k = 0,c = 0;
	scanf("%d", &k);
	for (i = 1; i <= k; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ",i,j,i*j);
		}
		printf("\n");
	}
	
	return 0;
}