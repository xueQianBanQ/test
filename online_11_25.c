#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int aa[2][5] = { 1, 2,3 ,4 ,5,6,7,8,9,10 };
//	int* ptr1 = (&aa + 1);
//	int* ptr2 = (aa + 1);
//	printf("%d, %d\n", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//
//}
//int main()
//{
//	char *a[] = { "work", "at", "alibaba" };
//	char** pa = a;
//	printf("%s\n", *pa + 1);
//	printf("%s\n", *a + 1);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	printf("%d\n", ++a);
//	printf("%d\n", ++a);
//	return 0;
//}
// 
// 
// 倒叙字符串
//#include <string.h>
//#include <assert.h>
//void reverse(char* arr)
//{
//	assert(arr);
//	int len = strlen(arr);
//	char* left = arr;
//	char* right = arr + len - 1;
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s", arr);
//	gets(arr);
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//判断是否为自幂数
#include <math.h>
int main()
{
	int i = 0;//循环
	int arr[4] = {0};
	int a = 0;
	int count = 0;//打印好看点
	for (i = 0; i < 10000; i++)
	{
		int a = i;
		int n = 0;//判断位数
		while (a > 0)
		{
			arr[n] = a % 10;
			a = a / 10;
			n++;
		}
		int j = 0;
		int sum = 0;
		for (j = 0; j < n; j++)
		{
			sum += pow(arr[j], n);
		}
		if (sum == i)
		{
			printf("%d ", i);
			count++;
			if (count % 5 == 0 && count != 0)
			{
				printf("\n");
			}
		}
	}
}