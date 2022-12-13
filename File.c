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
//// 从键盘输入
//// 从键盘输出
//// 键盘&屏幕都是外部设备
//// 
//// 键盘-标准输入设备
//// 屏幕-标准输出设备
//// 是一个程序默认打开的两个设备
//// 
//// stdin  FILE*  键盘
//// stdout FILE*  屏幕
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
//	//读文件
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
//	//写文件
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
//	//等价于
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
// //格式化的输出数据
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
//	//格式化的输入数据
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
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
//	struct S temp = { 0 };
//	char buffer[1024] = { 0 };
//	//把格式化的数据转换成字符串中buffer
//	sprintf(buffer, "%d %f %s", s.n, s.score, s.arr);
//	printf("%s\n", buffer);
//	//把字符串的数据再转换成格式化数据
//	sscanf(buffer, "%d %f %s", &(temp.n), &(temp.score), temp.arr);
//	printf("%d %f %s", temp.n, temp.score, temp.arr);
//	return 0;
//}


//fread
//struct S
//{
//	char name[20];
//	int i;
//};
//int main()
//{
//	struct S s = { "Q", 120 };
//	FILE* pf = fopen("text.txt", "wb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fwrite(&s, sizeof(struct S), 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



////fwrite
//struct S
//{
//	char name[20];
//	int i;
//};
//int main()
//{
//	//struct S s = { "Q", 120 };
//	struct S temp = { 0 };
//	FILE* pf = fopen("text.txt", "rb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fread(&temp, sizeof(struct S), 1, pf);
//	printf("%s ", temp.name);
//	printf("%d ", temp.i);
//	printf("\n");
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//fseek
//int main()
//{
//	FILE* pf = fopen("text.txt", "r");//abcdef
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	fseek(pf, 1, SEEK_SET);
//	char ch = fgetc(pf);
//	printf("%c\n", ch);
//	fseek(pf, -1, SEEK_CUR);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	fseek(pf, -3, SEEK_END);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	return 0;
//}

//
////ftell和rewind
//int main()
//{
//	FILE* pf = fopen("text.txt", "r");//abcdef
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	fseek(pf, 1, SEEK_SET);
//	char ch = fgetc(pf);
//	printf("%c\n", ch);
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	pos = ftell(pf);
//	printf("%d\n", pos);
//	return 0;
//}


//
////perror
//int main()
//{
//	FILE* pf = fopen("text2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("hehe");
//	}
//	//操作
//}

//feof