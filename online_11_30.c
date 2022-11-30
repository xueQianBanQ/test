#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>


//int main()
//{
//	if ((int)(strlen("abf") - strlen("abcdef")) > 0)
//	{
//		printf("haha\n");
//	}
//	else
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//char* my_strcpy(char* arr1,const char* arr2)
//{
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//	char* pa = arr1;
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return pa;
//}
//
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "dsaf";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



//char* my_strcat(char* arr1, const char* arr2)
//{
//	assert(arr1 && arr2);
//	char* pa = arr1;
//	int len = strlen(arr1);
//	int i = 0;
//	while (*arr2 != '\0')
//	{
//		*(arr1 + len + i) = *arr2;
//		arr2++;
//		i++;
//	}
//	*(arr1 + len + i) = *arr2;
//	return pa;
//}


char* my_strcat(char* arr1, const char* arr2)
{
	assert(arr1 && arr2);
	char* pa = arr1;
	int len = strlen(arr1);
	int i = 0;
	while (*arr1 != '\0')
	{
		arr1++;
	}
	while (*arr1++ = *arr2++)
	{
		;
	}
	return pa;
}
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}