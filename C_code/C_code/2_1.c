#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int input = 0;
	do
	{
		printf("�����룺");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				break;
			case 0:
				break;
			default:
				printf("ѡ�����\n");
				break;
		}
	} while (1);
	
	return 0;
}