#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	/*printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);*/
//
//
//	//д��־�ļ�
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n",
//			__FILE__, __LINE__, __DATE__, __TIME__, i);
//		printf("%s\n", __FUNCTION__);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


// Ԥ����ָ��(��#��ͷ��)
// #include
// #define
// 
//


//#define ��
// 
//#define SQUARE(X) X*X
//int main()
//{
//	//int ret = SQUARE(5);
//	//printf("%d\n", ret);
//	//int ret = SQUARE(5 + 1);//5 + 1* 5 + 1 == 11
//	//printf("%d\n", ret);//  11
//
//	//���Կ���#define SQUARE(X) (X)*(X) ---> ��Ҫ���ģ���
//
//	return 0;
//}

//�ٱ���

//#define DOUBLE(X) (X) + (X)
//int main()
//{
//	int ret = 10 * DOUBLE(5);//����100 ����10 * 5 + 5 == 55 
//	printf("%d\n", ret);
//	//���Բ�Ҫ���ģ��� Ӧ����ôд#define DOUBLE(X) ((X) + (X))
//	return 0;
//}
//


//#��##���÷�

//void print(int a)
//{
//	printf("the value a is %d\n", a);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	print(a);
//	print(b);//���ʵ��the value b is 20;
//	return 0;
//}

//#define PRINT(X) printf("the value"#X"is %d\n", X)
//int main()
//{
//	/*printf("hello world\n");
//	printf("hello" " world\n");
//	printf("hel" "lo" " world\n");*/
//	int a = 10;
//	int b = 20;
//	PRINT(a);//printf("the value""a""is %d\n", a)
//	PRINT(b); //printf("the value""b""is %d\n", b)
//	return 0;
//}

//
//#define CAT(X,Y) X##Y
//int main()
//{
//	int Class84 = 2022;
//	printf("%d\n", Class84);//2022
//	//printf("%d\n", Class##84);//����
//	printf("%d\n", CAT(Class, 84));//2022
//	return 0;
//}


////�������ϸ�����ʱ
//#define MAX(X, Y)  ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 11;
//	/*int ret = MAX(a, b);
//	printf("%d\n", ret);*/
//	int max = MAX(a, b);//��ֱ���滻((a++)>(b++)?(a++):(b++))  
//	printf("%d\n", max);//12
//	printf("%d\n", a);//11
//	printf("%d\n", b);//13
//	return 0;
//}



//��ͺ���������
// �����о�һ�º�ĺô�
// 
//������2�ֺô�
//
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max1 = Max(a, b);
//	int max2 = MAX(a, b);
//	//���˺�ͺ���������������
//	float c = 1.2;
//	float d = 2.3;
//	float max3 = MAX(c, d);//��ʱֻ�к���ԣ� ��Ҫ�ú���ʱ����Ҫ�ٴ���һ������
//
//	//
//	//�����ڵ��ú����ǣ� ���е��úͷ��صĿ�����
//	//���û�����Ե���ʱ���ῴ�ĺ�������ǰ����˺ܶ������  
//	//
//	//
//	return 0;
//}


//��Ļ���
//
// 1.�����������û�������֮��Ľ����i+1���Ǹ����ã���i++�Ǹ����ã�
// 2.ÿ��ʹ�ú��ʱ��һ�ݺ궨��Ĵ��뽫���뵽�����С����Ǻ�Ƚ϶̣�������ܴ�������ӳ���ĳ���
//3.����û�����Ե�
// 4.����ܻ��������������ȼ������⣬���³������׳���
// 5.�����������޹أ� Ҳ�Ͳ����Ͻ�
// 6���ܵݹ�
//


//�������ɺ�����ɲ��˵��£����Ǵ������͡�
//
//#define SIZEOF(type) sizeof(type)
//int main()
//{
//	int ret = sizeof(int);
//	ret = SIZEOF(int);
//	printf("%d\n", ret);
//
//}
//#include <stdlib.h>
//#define MALLOC(num,type) (type*)malloc(num * sizeof(type))
//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//	int* p2 = MALLOC(5, int);
//}

//////////////////////////////////////////////////////////////// ��������ָ�� ///////////////

//#undef ȡ��#define ������
//
//#define MAX 100
//int main()
//{
//	printf("%d\n", MAX);
//#undef MAX
//	printf("%d\n", MAX);//������
//	return 0;
//}


//#ifdef �� #endif

////#define DEBUG//���Ƿ��壬������ִ�и���䣬 ����������ԣ� ��Ԥ�����н��ᱻɾ��
//int main()
//{
//	//int DEBUG = 0;//ֻ��ͨ��#define DEBUG������
// 	int arr[10] = { 1, 2, 3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}



//#if  #elif #else #endif

//
//int main()
//{
//#if 1==1
//	printf("hehe\n");
//#elif 1 == 2
//	printf("haha\n");
//#else 
//	printf("�ٺ�\n");
//#endif
//	return 0;
//}


//#if define()��#endif

//#define DEBUG 0
//int main()
//{
//#if defined(DEBUG)
//	printf("haha\n");//����ű���
//#endif
//
//#if !defined(DEBUG)
//	printf("hehe\n");
//#endif
//
//#ifdef DEBUG
//	printf("hehe\n");//����ű���
//#endif
//
//#ifndef DEBUG
//	printf("hehe\n");
//#endif
//	return 0;
//}


//////////////////////������������ָ�� ����if�� else if һ��Ƕ��ʹ��

//#pragma once
//��ͷ�ļ�#include "game.h"�����ö��ʱ
// ��game.h�еĿ�ͷ���#pragma once �����ͱ����˴��������
//
// ���ߣ����������ϵı������¾������֣����ڴ󲿷ֶ�������ķ�������ͷ�ļ������ʹ�ã�
// #ifndef __TEXT_H__
// #define __TEXT_H__
// ͷ�ļ�����
// #endif
//


#include <stddef.h>
#define OFFSETOF(struct_name, member_name) (int)&(((struct_name*)0)->member_name)

struct S
{
	char c1;
	int i;
	char c2;
};
int main()
{
	/*printf("%d\n", offsetof(struct S, c1));
	printf("%d\n", offsetof(struct S, i));
	printf("%d\n", offsetof(struct S, c2));*/
	printf("%d\n", OFFSETOF(struct S, c1));
	printf("%d\n", OFFSETOF(struct S, i));
	printf("%d\n", OFFSETOF(struct S, c2));
	return 0;
}