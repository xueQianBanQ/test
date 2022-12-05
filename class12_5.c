#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//
//{
//
//	int i, j, a[2][3] = { {1,2,3}, {4,5,6} };
//	//int(*p)[3] = a;
//	int* p[2] = {a[0], a[1]};
//	for (i = 0; i < 2; i++)        //变量i表示行数
//
//	{
//
//		for (j = 0; j < 3; j++)	//变量j表示列数
//
//			printf("a[%d][%d]=%d ", i, j, p[i][j]);
//
//		printf("\n");
//
//	}
//
//
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//
//{
//
//	int i, j, temp, a1 = 2, a2 = 4, a3 = 6, a4 = 5, a5 = 9;
//
//	int* p[5] = { &a1,&a2,&a3,&a4,&a5 };  //将变量a1~a5的地址分别赋给指针数组的各个元素
//
//
//
//	for (i = 0; i < 4; i++)	             //利用冒泡排序法将5个变量排序
//
//	{
//
//		for (j = i + 1; j < 5; j++)
//
//		{
//
//			if (*p[i] > *p[j])
//
//			{
//
//				temp = *p[i];  *p[i] = *p[j];  *p[j] = temp;
//
//			}
//
//		}
//
//	}
//
//	for (i = 0; i < 5; i++)
//
//		printf("%d ", *p[i]);
//
//	printf("\n");
//	printf("%d\n", a1);
//	printf("%d\n", a2);
//	printf("%d\n", a3);
//	return 0;
//
//}


//#include<stdio.h>
//
//int main()
//
//{
//
//	char* pm[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
//	int m;
//	printf("please input 1-7：");
//	scanf("%d", &m);
//	if (m < 1 || m > 7)              //若输入的不是1-12之间的整数，则输出错误信息
//	{
//		printf("illegal input\n");
//	}
//	else
//	{
//		printf("%s", *(pm + m - 1));	//输出指针元素指向的字符串
//	}
//	printf("\n");
//	return 0;
//
//}

//int main()
//{
//	int a[2][3] = { 1,2 ,3,4,5, 6 };
//	int i, j;
//	int* p[2] = { a[0], a[1] };
//	int** pp = p;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", pp[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int  main(int argc, char* argv[])
//{
//	while(--argc)
//	{
//		printf("%s\n", *++argv);
//	}
//}
//
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[10];
//	gets(str);
//	char* p = str;
//	int len = strlen(p);
//	int i = 0;
//	char max = str[0];//记录最大值
//	int subscript = 0;//记录下标
//	for (i = 1; i < len; i++)
//	{
//		if (max < str[i])
//		{
//			max = str[i];
//			subscript = i;
//		}
//	}
//	puts(str);
//	printf("max=%c\n", max);
//	printf("下标为%d\n", subscript);
//	return 0;
//}

#include <stdio.h>

char* Max(char* str)
{
	char* max = str;
	str++;
	while (*str)
	{
		if (*max < *str)
		{
			max = str;
		}
		str++;
	}
	return max;
}

int main()
{
	char str[10];
	gets(str);
	char* ret = Max(str);
	printf("%s\n", ret);
	return 0;
}