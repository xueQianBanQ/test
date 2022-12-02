#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);                                             //abbbbcif
//	char* s1 = p1;                                                   //bbc
//	char* s2 = p2;
//	char* cur = p1;
//	if (p2 == '\0') return p1;
//	while (*cur)
//	{
//		s2 = p2;
//		s1 = cur;
//		while ((*s1 == *s2)&&(*s2 != '\0')&&(*s1 != '\0'))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//找到子串
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;//提前结束
//		}
//		cur++;
//	}
//	return NULL;//找不到子串
//}
//
//int main()
//{
//	char p1[] = "bbca";
//	char p2[] = "bbcafd";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("子串存在\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	char arr[] = "1234.aaf@fsad";
//	char* p = "@.";
//	for (char* ret = strtok(arr, p); ret != '\0'; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

void* my_memcpy(void* dest, const void* src, int num)
{
	assert(dest && src);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}


//自己写的memmove
void* my_memmove(void* dest, const void* src, int num)
{
	assert(dest && src);
	void* ret = dest;
	if(src < dest)
	{
		while(num--)
		*((char*)dest + num) = *((char*)src + num);
	}
	else
	{

		while (num--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	return ret;
}
////优化
//void* my_memmove(void* dest, const void* src, int num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}



int main()
{
	int arr1[] = { 1, 2, 3,4,5 ,6, 7, 8, 9, 10};
	int arr2[5] = { 0 };
	//my_memcpy(arr1 + 2, arr1 , 20);//memmove可以处理内存重叠的情况
	my_memmove(arr1 + 2, arr1, 20);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}

	return 0;
}