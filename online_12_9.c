#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}


////
//// �Ӽ�������
//// �Ӽ������
//// ����&��Ļ�����ⲿ�豸
//// 
//// ����-��׼�����豸
//// ��Ļ-��׼����豸
//// ��һ������Ĭ�ϴ򿪵������豸
//// 
//// stdin  FILE*  ����
//// stdout FILE*  ��Ļ
//// stderr FILE*  
////
//
//
//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	fgets(buf, 1024, pf);
//	puts(buf);
//	//printf("%s", buf);
//	fgets(buf, 1024, pf);
//	puts(buf );
//	//printf("%s", buf); 
// flose(pf);
// pf = NULL;
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	char but[1024] = { 0 };
//	//fgets(but, 1024, stdin);
//	//fputs(but, stdout);
//	
//	//�ȼ���
//
//	//gets(but);
//	//puts(but);
//
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100, 3.14, "bit" };
//	FILE* pf = fopen("text.txt", "w");
//	if (NULL == pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
// //��ʽ�����������
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = {0};
//	FILE* pf = fopen("text.txt", "r");
//	if (NULL == pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//��ʽ������������
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


struct S
{
	int n;
	float score;
	char arr[10];
};

int main()
{
	struct S s = { 100, 3.14, "bit" };
	struct S temp = { 0 };
	char buffer[1024] = { 0 };
	//�Ѹ�ʽ��������ת�����ַ�����buffer
	sprintf(buffer, "%d %f %s", s.n, s.score, s.arr);
	printf("%s\n", buffer);
	//���ַ�����������ת���ɸ�ʽ������
	sscanf(buffer, "%d %f %s", &(temp.n), &(temp.score), temp.arr);
	printf("%d %f %s", temp.n, temp.score, temp.arr);
	return 0;
}