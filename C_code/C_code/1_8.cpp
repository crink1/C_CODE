#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int age = 0;
	//输入
	scanf("%d", &age);

	if (age < 18)
	{
		printf("未成年\n");
	}
	else if (age>=18 && age<30)
	{
		printf("青年\n");
	}
	else if (age >= 30 && age < 50)
	{
		printf("中年\n");
	}
	else if (age >= 60 && age < 90)
	{
		printf("老年\n");
	}
	else
	{
		printf("老寿星\n");
	}

	/*if (age < 18)
	{
		printf("未成年\n");
		printf("不要吸烟\n");
	}
	else
	{
		printf("成年\n");
	}*/

	/*if (age < 18)
		printf("未成年\n");*/

	return 0;
}