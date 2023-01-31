//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//
//void reverse(int* parr,int sz)
//{
//    int left = 0;
//    int right = sz - 1;
//    while (left < right)
//    {
//        parr[left] = parr[left] + parr[right];
//        parr[right] = parr[left] - parr[right];
//        parr[left] = parr[left] - parr[right];
//        left++;
//        right--;
//    }
//}
//
//int main()
//{
//    int i = 0;
//    int arr1[10] = {0};
//    
//    for (i = 0; i < 10; i++)
//    {
//       scanf("%d", &arr1[i]);
//    }
//    int sz = sizeof(arr1) / sizeof(arr1[0]);
//    reverse(arr1,sz);
//    for (i = 0; i < 10; i++)
//    {
//       printf("%d ", arr1[i]);
//    }
//
//    return 0;
//}