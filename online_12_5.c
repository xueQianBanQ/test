#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <errno.h>
//#include <string.h>
//#include <stdlib.h>

//malloc的用法

//int main()
//{
//	//开辟10个整形的空间
//	int *p = (int* )malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//打印错误原因
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//
//		{
//			printf("%d ", *(p + i));
//		}
//		printf("\n");
//	}
//	//主动把开辟的空间还回去
//	free(p);
//	//此时p还可以访问这个地址
//	//所以
//	p = NULL;
//	return 0;
//}


//calloc的用法
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//		printf("\n");
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//reallor
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
int main()
{
	int* p = (int*)malloc(20);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
	}

	//
	//此时空间不够用了，reallor函数就会追加开辟需要的空间
	// reallor使用注意事项
	// 1.如果原来地址后面有足够你要追加的空间，直接追加，返回最前面的地址
	// 2.如果原来地址后面没有足够你要追加的空间， 将会重新开辟一个空间，再将先前的元素拷贝到新开辟的空间
	// 并释放原来的空间
	// 3.得用新的变量来判断一下，如下
	//
	int* ptr = realloc(p, 40);
	if (ptr == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		p = ptr;
		int i = 0;
		for (i = 5; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
		printf("\n");
	}
	//仍然需要释放
	free(p);
	p = NULL;
	return 0;
}