#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <errno.h>
//#include <string.h>
//#include <stdlib.h>

//malloc���÷�

//int main()
//{
//	//����10�����εĿռ�
//	int *p = (int* )malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//��ӡ����ԭ��
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
//	//�����ѿ��ٵĿռ仹��ȥ
//	free(p);
//	//��ʱp�����Է��������ַ
//	//����
//	p = NULL;
//	return 0;
//}


//calloc���÷�
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
	//��ʱ�ռ䲻�����ˣ�reallor�����ͻ�׷�ӿ�����Ҫ�Ŀռ�
	// reallorʹ��ע������
	// 1.���ԭ����ַ�������㹻��Ҫ׷�ӵĿռ䣬ֱ��׷�ӣ�������ǰ��ĵ�ַ
	// 2.���ԭ����ַ����û���㹻��Ҫ׷�ӵĿռ䣬 �������¿���һ���ռ䣬�ٽ���ǰ��Ԫ�ؿ������¿��ٵĿռ�
	// ���ͷ�ԭ���Ŀռ�
	// 3.�����µı������ж�һ�£�����
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
	//��Ȼ��Ҫ�ͷ�
	free(p);
	p = NULL;
	return 0;
}