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
//	//�ó�������Ҫô��c Ҫô��i��
//	//������һ��ʹ�ã��ı�i Ҳ�͸ı���c
//	return 0;
//}


//int main()
//{
//	//int a = 0x11223344;
//	////
//	//// �͵�ַ--------------------------------------->�ߵ�ַ
//	////.....[][][][][][11][22][33][44][][][][][][][][][][][][].....��˴洢
//	////.....[][][][][][44][33][22][11][][][][][][][][][][][][].....С�˴洢
//	//// ����һ�����ݣ����ڴ��д�ŵ��ֽ�˳��
//	//// ��С���ֽڴ洢��˳��
//	////
//	//char* p = (char)a;
//	//if (p == 0x11)
//	//{
//	//	printf("�ü������Ǵ�˴洢\n");
//	//}
//	//else
//	//{
//	//	printf("�ü�������С�˴洢\n");
//	//}
//	union Un u;
//	u.i = 1;
//	//[01][00][00][00]//С��
//	//[00][00][00][01]//���
//	if (1 == u.c)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

union Un
{
	int i;// 4
	char a[5];//1����5,�൱��5��char 

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
	//������������ֽ���4��������Ϊchar [5] Ҫ5���ֽڣ�����Ҫ������Ҫ����������ֽ�����������
	printf("%d\n", sizeof(s1));
	s1.i = 0x11223344;
	printf("%x\n", s1.s1);
	printf("%x\n", s1.s2);
	printf("%x\n", s1.s3);
	printf("%x\n", s1.s4);
	printf("%x\n", s1.s5);
	printf("%x\n", s1.s6);
	printf("%x\n", s1.s7);
	//�����ڵ�һ���ռ�������
	return 0;
}