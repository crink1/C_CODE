#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void menu()
{
	printf("1.play");
	printf("2.exit");

}


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
				menu();
				break;
			case 0:
				printf("�˳���Ϸ");
				break;
			default:
				printf("ѡ�����\n");
				break;
		}
	} while (input);
	
	return 0;
}