#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>


//�ṹ����δ֪��С�Ĳ���

//struct S
//{
//	int i;
//	int* a;
//};
//int main()
//{
//	struct S* p = (struct S*)malloc(sizeof(struct S));
//	p->a = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p->a + i) = i;
//		}
//		for (i = 0; i < 5; i++)
//		{
//			printf("%d ", *(p->a + i));
//		}
//		printf("\n"); 
//		int* ptr = (int*)realloc(p->a, 40);
//		if (ptr != NULL)
//		{
//			p->a = ptr;
//			for (i = 5; i < 10; i++)
//			{
//				*(p->a + i) = i;
//			}
//			for (i = 0; i < 10; i++)
//			{
//				printf("%d ", *(p->a + i));
//			}
//			printf("\n");
//		}
//	}
//	free(p->a);
//	p->a = NULL;
//	free(p);
//	p = NULL;
//}


//�Ľ�    ���ýṹ�����������


struct S
{
	int n;
	int arr[0];//��ռ�ڴ�
};//��ʱsizeof(struct S) == 4

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5*sizeof(int));
	if (ps == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			ps->arr[i] = i;
		}
		for (i = 0; i < 5; i++)
		{
			printf("%d ", ps->arr[i]);
		}
		printf("\n");
		int* ptr = realloc(ps, 44);
		if (ptr != NULL)
		{
			ps = ptr;
			for (i = 5; i < 10; i++)
			{
				ps->arr[i] = i;
			}
			for (i = 0; i < 10; i++)
			{
				printf("%d ", ps->arr[i]);
			}
			printf("\n");

		}
	}
	free(ps);
	ps = NULL;
	return 0;
}


//�������������һ�ֵĺô�
//1.free�ͷ��٣������׳���
// 2.�������鿪�ٵĿռ�������һ��ģ��ڶ�ȡ�ǣ� �Ĵ�����Ч�ʸ�
//