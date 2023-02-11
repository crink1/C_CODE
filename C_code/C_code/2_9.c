
//
//int strlen(char* str)
//{
//	int count = 0;
//	while (*str!=0)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* string)
//{
//	int len = strlen(string);
//	char temp = *string;
//	*string = *(string + len - 1);
//	*(string + len - 1) = '\0';
//	if (strlen(string+1) >= 2)
//	{
//		reverse_string(string + 1);
//	}
//	*(string + len - 1) = temp;
//}
//
//
//int main()
//{
//	char arr[] = { "abcdef" };
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//
//}