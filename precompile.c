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
//	//写日志文件
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


// 预处理指令(以#开头的)
// #include
// #define
// 
//


//#define 宏
// 
//#define SQUARE(X) X*X
//int main()
//{
//	//int ret = SQUARE(5);
//	//printf("%d\n", ret);
//	//int ret = SQUARE(5 + 1);//5 + 1* 5 + 1 == 11
//	//printf("%d\n", ret);//  11
//
//	//所以可以#define SQUARE(X) (X)*(X) ---> 不要吝啬（）
//
//	return 0;
//}

//再比如

//#define DOUBLE(X) (X) + (X)
//int main()
//{
//	int ret = 10 * DOUBLE(5);//不是100 而是10 * 5 + 5 == 55 
//	printf("%d\n", ret);
//	//所以不要吝啬（） 应该这么写#define DOUBLE(X) ((X) + (X))
//	return 0;
//}
//


//#和##的用法

//void print(int a)
//{
//	printf("the value a is %d\n", a);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	print(a);
//	print(b);//如何实现the value b is 20;
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
//	//printf("%d\n", Class##84);//报错
//	printf("%d\n", CAT(Class, 84));//2022
//	return 0;
//}


////当宏遇上副作用时
//#define MAX(X, Y)  ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 11;
//	/*int ret = MAX(a, b);
//	printf("%d\n", ret);*/
//	int max = MAX(a, b);//是直接替换((a++)>(b++)?(a++):(b++))  
//	printf("%d\n", max);//12
//	printf("%d\n", a);//11
//	printf("%d\n", b);//13
//	return 0;
//}



//宏和函数的区别
// 先来研究一下宏的好处
// 
//有如下2种好处
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
//	//到此宏和函数还看不出区别
//	float c = 1.2;
//	float d = 2.3;
//	float max3 = MAX(c, d);//此时只有宏可以， 而要用函数时还需要再创建一个函数
//
//	//
//	//并且在调用函数是， 会有调用和返回的开销，
//	//当用汇编语言调试时，会看的很清晰，前后多了很多汇编代码  
//	//
//	//
//	return 0;
//}


//宏的坏处
//
// 1.宏遇到副作用会有意向之外的结果（i+1不是副作用）（i++是副作用）
// 2.每次使用宏的时候，一份宏定义的代码将插入到程序中。除非宏比较短，否则可能大幅度增加程序的长度
//3.宏是没法调试的
// 4.宏可能会带来运算符的优先级的问题，导致程序容易出错
// 5.宏由于类型无关， 也就不够严谨
// 6不能递归
//


//宏可以完成函数完成不了的事，就是传“类型”
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

//////////////////////////////////////////////////////////////// 条件编译指令 ///////////////

//#undef 取消#define 的作用
//
//#define MAX 100
//int main()
//{
//	printf("%d\n", MAX);
//#undef MAX
//	printf("%d\n", MAX);//报错了
//	return 0;
//}


//#ifdef 和 #endif

////#define DEBUG//看是否定义，定义则执行该语句， 不定义则忽略， 在预处理中将会被删除
//int main()
//{
//	//int DEBUG = 0;//只能通过#define DEBUG来控制
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
//	printf("嘿嘿\n");
//#endif
//	return 0;
//}


//#if define()和#endif

//#define DEBUG 0
//int main()
//{
//#if defined(DEBUG)
//	printf("haha\n");//定义才编译
//#endif
//
//#if !defined(DEBUG)
//	printf("hehe\n");
//#endif
//
//#ifdef DEBUG
//	printf("hehe\n");//定义才编译
//#endif
//
//#ifndef DEBUG
//	printf("hehe\n");
//#endif
//	return 0;
//}


//////////////////////以上条件编译指令 可像if， else if 一样嵌套使用

//#pragma once
//当头文件#include "game.h"被运用多次时
// 在game.h中的开头添加#pragma once 这样就避免了代码的冗余
//
// 或者（这种是在老的编译器下经常出现，现在大部分都用上面的方法避免头文件被多次使用）
// #ifndef __TEXT_H__
// #define __TEXT_H__
// 头文件内容
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