#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////����һ���ṹ��ı���
////Stu ���� + �绰 + �Ա� + ����
//struct Stu
//{
//	char name[20];
//	char telep[20];
//	char sex[10];
//	int age;
//} s1,s2,s3;//ȫ�ֱ���
//
//struct Stu s4;//ȫ�ֱ���
//
//int main()
//{
//	struct Stu s5;//�ֲ�����
//	return 0;
//}


////�ṹ���������
//
//struct Node
//{
//	int age;
//	struct Node* next;//������д��struct Node n,����ѭ���˰�
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
//#pragma pack(2)//����Ĭ�϶�����
//struct S3
//{
//	char c1;
//	char c2;
//	int a;
//};
//#pragma pack()//ȡ��Ĭ�϶�����
////һ����Ϊ���ö�����ʱ�� ����2 4 8 16 �ȵ�2�Ĵη���
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
//	//offsetof()��ʹ��
//	//�����ڽṹ���ƫ����
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

//��ֵ
void Print1(struct S temp)
{
	printf("%c %d %lf\n", temp.a, temp.b, temp.c);
}

//��ַ
void Print2(const struct S* ps)
{
	printf("%c %d %lf\n", ps->a, ps->b, ps->c);
}

//��ַ�û��Ǵ�ֵ�ã�
// �������ε�ʱ������Ҫѹջ�ģ�����ʱ��Ϳռ��ϵ�ϵͳ����
//�������Ľṹ��Ľϴ󣬲���ѹջ��ϵͳ�����Ƚϴ󣬻�ʹϵͳ�������½�
//
int main()
{
	struct S s1 = { 0 };
	Init(&s1);
	Print1(s1);
	Print2(&s1);
	return 0;
}