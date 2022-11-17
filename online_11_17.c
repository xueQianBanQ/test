#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*p1)[10] = &arr;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p1)[i]);
//
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p\n", p1[i]);
//
//	}
//	return 0;
//}


int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int(*p1)[10] = &arr;
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr);
	
	}     
	return 0;
}