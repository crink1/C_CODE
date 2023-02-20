//#include<stdio.h>
//#include<string.h>
//void sw(char arr[], int left, int right) {
//    int tmp = 0;
//    while (left < right)
//    {
//        tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//        left++;
//        right--;
//    }
//
//}
//
//int main() {
//    char arr[100];
//    int i = 0;
//    int tmp = 0;
//    gets(arr);
//    char *arr2 = arr;
//    int left = 0;
//    int sz = strlen(arr);
//    int right = 0;
//    sw(arr, 0, sz - 1);
//    while (i<=sz)
//    {
//        if (arr[i] == ' ' || arr[i]=='\0')
//        {
//            
//            right = i - 1;
//            tmp = right + 2;
//            sw(arr, left, right);
//            left = i + 1;
//        }
//        i++;
//
//    }
//
//    printf("%s", arr2);
//    return 0;
//}