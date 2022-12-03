#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//union Un
//{
//	char c;
//	int i;
//};
////
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	//得出联合体要么用c 要么用i；
//	//不可以一起使用，改变i 也就改变了c
//	return 0;
//}


//int main()
//{
//	//int a = 0x11223344;
//	////
//	//// 低地址--------------------------------------->高地址
//	////.....[][][][][][11][22][33][44][][][][][][][][][][][][].....大端存储
//	////.....[][][][][][44][33][22][11][][][][][][][][][][][][].....小端存储
//	//// 讨论一个数据，在内存中存放的字节顺序
//	//// 大小端字节存储的顺序
//	////
//	//char* p = (char)a;
//	//if (p == 0x11)
//	//{
//	//	printf("该计算器是大端存储\n");
//	//}
//	//else
//	//{
//	//	printf("该计算器是小端存储\n");
//	//}
//	union Un u;
//	u.i = 1;
//	//[01][00][00][00]//小端
//	//[00][00][00][01]//大端
//	if (1 == u.c)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

union Un
{
	int i;// 4
	char a[5];//1不是5,相当于5个char 

};
union U
{
	int i;
	char s1;
	char s2;
	char s3;
	char s4;
	char s5;
	char s6;
	char s7;
};

int main()
{
	union Un s;
	union U s1;
	printf("%d\n", sizeof(s));//8
	//所以最大类型字节数4不够，因为char [5] 要5个字节，所以要扩大，且要是最大类型字节数的整数倍
	printf("%d\n", sizeof(s1));
	s1.i = 0x11223344;
	printf("%x\n", s1.s1);
	printf("%x\n", s1.s2);
	printf("%x\n", s1.s3);
	printf("%x\n", s1.s4);
	printf("%x\n", s1.s5);
	printf("%x\n", s1.s6);
	printf("%x\n", s1.s7);
	//都存在第一个空间里了呗
	return 0;
}