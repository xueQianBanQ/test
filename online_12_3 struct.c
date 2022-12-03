#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////声明一个结构体的变量
////Stu 姓名 + 电话 + 性别 + 年龄
//struct Stu
//{
//	char name[20];
//	char telep[20];
//	char sex[10];
//	int age;
//} s1,s2,s3;//全局变量
//
//struct Stu s4;//全局变量
//
//int main()
//{
//	struct Stu s5;//局部变量
//	return 0;
//}


////结构体的自引用
//
//struct Node
//{
//	int age;
//	struct Node* next;//不可以写成struct Node n,就死循环了啊
//};
//
//int main()
//{
//	return 0;
//}

//struct T
//{
//	char a;
//};
//
//struct S
//{
//	int a;
//	struct T st;
//	char c[20];
//	double b;
//};
//
//int main()
//{
//	//struct S s1 = { 1, "asdf", 4.3 };
//	struct S s1 = { 1, {'d'}, "asdf", 4.3 };
//	printf("%d %s %lf\n", s1.a, s1.c, s1.b);
//	printf("%c\n", s1.st.a);
//	return 0;
//}

//
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//#pragma pack(2)//设置默认对齐数
//struct S3
//{
//	char c1;
//	char c2;
//	int a;
//};
//#pragma pack()//取消默认对齐数
////一般人为设置对齐数时， 设置2 4 8 16 等等2的次方数
//
//#include <stddef.h>
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	struct S2 s2 = { 0 };
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof(s1));
//	printf("%d\n", sizeof(s2));
//	printf("%d\n", sizeof(s3));
//
//	//offsetof()的使用
//	//变量在结构体的偏移量
//	printf("%d\n", offsetof(struct S2, c1));
//	printf("%d\n", offsetof(struct S2, c2));
//	printf("%d\n", offsetof(struct S2, a));
//	return 0;
//}

struct S
{
	char a;
	int b;
	double c;
};

void Init(struct S* ps)
{
	ps->a = 'w';
	ps->b = 2;
	ps->c = 3.2;
}

//传值
void Print1(struct S temp)
{
	printf("%c %d %lf\n", temp.a, temp.b, temp.c);
}

//传址
void Print2(const struct S* ps)
{
	printf("%c %d %lf\n", ps->a, ps->b, ps->c);
}

//传址好还是传值好？
// 函数传参的时候是需要压栈的，会有时间和空间上的系统开销
//如果传入的结构体的较大，参数压栈的系统开销比较大，会使系统的性能下降
//
int main()
{
	struct S s1 = { 0 };
	Init(&s1);
	Print1(s1);
	Print2(&s1);
	return 0;
}