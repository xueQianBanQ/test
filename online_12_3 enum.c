#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//
//枚举和#define 相比，枚举的优点
// 1.有类型，更加严谨
// 2.防止命名污染，#define不能有相同的名字
// 3.便于调试
// 4.便于设置多个常量
// 5.(这个不是很明白)增加代码的可读性和可维护性
//
enum Sex
{
	MALE,
	FEMALE = 9,
	SECRET
};

enum Color
{
	RED = 2,
	GREEN,
	BLUE = 8
};

int main()
{
	enum Sex s = FEMALE;
	s = SECRET;  
	printf("%d\n", s);
	printf("%d %d %d\n", MALE, FEMALE, SECRET);
	printf("%d %d %d\n", RED, GREEN, BLUE);
	return 0;
}