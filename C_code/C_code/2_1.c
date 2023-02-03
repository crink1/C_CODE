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
		printf("请输入：");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				menu();
				break;
			case 0:
				printf("退出游戏");
				break;
			default:
				printf("选择错误\n");
				break;
		}
	} while (input);
	
	return 0;
}