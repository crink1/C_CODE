#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr[10] = { 2,4,6,8,0,1,3,5,7,9 };
	int i = 0;
	int j = 0;
	for (i=0;i<10-1;i++)
	{
		for (j = 0; j<10- i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				arr[j] = arr[j] + arr[j + 1];
				arr[j+1] = arr[j] - arr[j + 1];
				arr[j] = arr[j] - arr[j + 1];
			}
		}
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}