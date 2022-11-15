#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int check_sys(void)
//{
//	int a = 1;
//	//小端是 01 00 00 00
//	//大端是 00 00 00 01
//	char* p = &a;
//	//小端取01，大端取00
//	return *p;
//}
//int main()
//{
//	//检验字节序是大端还是小端
//	//小端是一个数据的低位存储在低地址，高位存储在高地址
//	//大端是一个数据的低位存储在高地址，高位存储在低地址
//	int ret = check_sys();//返回1是小端， 返回0是大端
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	char* p = &arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	printf("%c\n", *pc);
//	printf("%s\n", p);
//	printf("%c\n", *p);
//
//	return 0;
//}


#include <stdio.h>
int main()
{
	char* p = "abcdefg";
	printf("%s\n", p);

	return 0;
}