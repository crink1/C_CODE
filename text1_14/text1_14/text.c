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
//��������������sizeof�ڣ�����������ʾ�������飬���������������Ĵ�С��
//&������������������ʾ�������飬ȡ��������������ĵ�ַ
//����֮�⣬���������е�����������������׵�ַ
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