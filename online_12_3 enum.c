#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//
//ö�ٺ�#define ��ȣ�ö�ٵ��ŵ�
// 1.�����ͣ������Ͻ�
// 2.��ֹ������Ⱦ��#define��������ͬ������
// 3.���ڵ���
// 4.�������ö������
// 5.(������Ǻ�����)���Ӵ���Ŀɶ��ԺͿ�ά����
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