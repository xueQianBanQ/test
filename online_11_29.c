#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>


////左旋  
//void reverse(char* arr, int k)
//{
//	assert(arr);
//	int i = 0;
//	int j = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)//进行几次左旋
//	{
//		char temp = *arr;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = temp;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}
//
//int is_left_move(char* arr1, char* arr2)
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	strncat(arr1, arr1, len1);
//	char* a = strstr(arr1, arr2);
//	if (a == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//
//}
//
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 0)
//	{
//		printf("NO!\n");
//	}
//	else
//	{
//		printf("Yes!\n");
//	}
//	return 0;
//}


int FindNum(int(*arr)[3], int k, int* px, int* py)
{
	int i = 0;
	int j = *py - 1;
	while (i <= *px - 1 && j >= 0)
	{
		if (k > arr[i][j])
		{
			i++;
		}
		else if (k < arr[i][j])
		{
			j--;
		}
		else
		{
			*px = i;
			*py = j;
			return 1;
		}
	}
	*px = -1;
	*py = -1;
	return 0;
}


int main()
{
	int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int k = 7;
	int x = 3;
	int y = 3;
	int ret = FindNum(arr, k, &x, &y);
	if (ret == 0)
	{
		printf("没有\n");
	}
	else
	{
		printf("有\n");
		printf("下标为(%d,%d)\n", x, y);
	}
	return 0;
}