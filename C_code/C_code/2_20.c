#include<stdio.h>
int main()
{
	int x = 20;
	int i = 0;
	for (i = 0; x>0; i++)
	{
		x--;
		if (i % 2 == 0)
		{
			x++;
		}
	}
	printf("%d", i-1);
	return 0;
}