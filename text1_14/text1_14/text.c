#include<stdio.h>


void bubble_sort(int arr[],int sz)
{
	int i = 0, j = 0;
	
	for (i = 0; i < sz-1; i++)
	{
		for (j = 0; j < sz - i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				arr[j] = arr[j] + arr[j + 1];
				arr[j + 1] = arr[j] - arr[j + 1];
				arr[j] = arr[j] - arr[j + 1];
			}
		}
	}
}
//数组名单独放在sizeof内，这里的数组表示整个数组，计算的是整个数组的大小。
//&数组名，这里的数组表示整个数组，取出的是整个数组的地址
//除此之外，遇到的所有的数组名都是数组的首地址
int main()
{
	int arr[] = { 3,5,4,8,1,6,9,0,2,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(&arr,sz);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}