#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int i = 0;
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int arr2[10] = { 0,9,8,7,6,5,4,3,2,1 };
	int temp[10];
    for (i = 0; i < 10; i++)
    {
        temp[i] = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp[i];
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr1[i]);
    }
	return 0;
}