#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 2;
//	printf("%d,%d", i++, i-=2);
//	return 0;
//}

//int main()
//{
//	int a = 5, b = 4, d = 2;
//	if (a > b > c)
//	{
//		printf("%d\n", d);
//	}
//	else if ((c - 1 >= d) == 1)
//	{
//		printf("%d\n", d + 1);
//	}
//	else
//		printf("%d\n", d + 2);
//}

//int main()
//{
//	short int m = 32767, n = 032767;
//	printf("%d, %d\n", m, n);
//	return 0;
//}
int sum(int a, int b)
{
	
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int div(int a, int b)
{
	return a / b;
}

int cul(int a, int b)
{
	return a * b;
}

int main()
{
	int a = 10;
	int b = 20;
	int (*p)(int, int) = sum;
	int (*ps[4])(int, int) = { sum, sub, cul, div };
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d\n", ps[i](2, 3));//5, -1, 6, 0
	}
	return 0;
}