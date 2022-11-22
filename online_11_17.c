#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
////计算器
//void menu()
//{
//	printf("******************************\n");
//	printf("*******1.Sum    2.Sub*********\n");
//	printf("*******3.Mul    4.Div*********\n");
//	printf("********* 0.exit *************\n");
//	printf("******************************\n");
//}
//
//int Sum(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input;
//	int x, y;
//	int ret;
//	int(*calcu[])(int, int) = { 0, Sum, Sub, Mul, Div };
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		while (getchar() != '\n');
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个数:>");
//			scanf("%d%d", &x, &y);
//			ret = calcu[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出。\n");
//		}
//		else
//		{
//			printf("选择错误。\n");
//		}
//	} while (input);
//	return 0;
//}

#include <stdlib.h> 
#include <string.h>
//
//int cmp_int (const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int cmp_float(const void* e1, const void* e2)
//{
//	if (*(float*)e1 > *(float*)e2)
//	{
//		return 1;
//	}
//	else if (*(float*)e1 < *(float*)e2)
//	{
//		return -1;
//	}
//	else
//		return 0;
//}


//void test1()
//{
//	int arr[6] = { 3, 1, 9,4,62,2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void test2()
//{
//	float arr[6] = { 1.3, 4.2, 2.3, 9.4, 4.3, 5.4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", arr[i]);
//	}
//	printf("\n");
//}

void test3()
{
	struct Stu
	{
		int age;
		char name[20];
	};
	struct Stu s[3] = { {"shenyan", 18}, {"chenlinyi", 3}, {"qianyaqi", 27} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), temp_struct);
}
int temp_struct(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}


int main()
{
	/*test1();
	test2();*/
	test3();
	return 0;
}