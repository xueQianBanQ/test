#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//typedef struct stu
//{//姓名 年龄 电话 性别
//	char name[20];
//	short age;
//	char tele[11];
//	char sex[5];
//}Stu;
//void print1(Stu s1)
//{
//	printf("name = %s\n", s1.name);
//	printf("age = %hd\n", s1.age);
//	printf("tele = %s\n", s1.tele);
//	printf("sex = %s\n", s1.sex);	
//}
//void print2(Stu* ps)
//{
//	printf("name = %s\n", ps->name);
//	printf("age = %hd\n", ps->age);
//	printf("tele = %s\n", ps->tele);
//	printf("sex = %s\n", ps->sex);
//}
//int main()
//{
//	struct stu s1 = { "沈焱", 18, "12345678", "女" };
//
//	print1(s1);
//	print2(&s1);
//	return 0;
//}


//学习Debug和Relese
//以及学习调试
//F5和F9调试
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10 - i);//F5是直接跳到短点处//F9是设置断点
//	}
//}

////试用relese和Debug
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	//system("pause");
//	return 0;
//}


//#include <stdio.h>

//void my_strcpy(char* dest, char* scr)
//{
//	while (*scr != '\0')
//	{
//		*dest = *scr;
//		scr++;
//		dest++;               /
//
//	}
//	*dest = '\0';
//}

//
//void my_strcpy(char* dest, char* scr)
//{
//	while (*dest++ = *scr++) //利用了’\0'的ASCII值为0， 即假
//	{
//		;                                    //没有规避掉玩家传入空指针的情况，即野指针的状况
//	}
//	*dest = '\0';
//}


//void my_strcpy(char* dest, char* scr)
//{
//	if (dest != NULL && scr != NULL)
//	{
//		while (*dest++ = *scr++)
//		{
//			;                               //如果传入了野指针，并没有显示什么
//		}
//		*dest = '\0';
//	}
//
//}
//#include <stdio.h>
//#include <assert.h>
////void my_strcpy(char* dest, char* scr)
////{
////	assert(dest != NULL);//断言
////	assert(scr != NULL);//断言
////	while (*dest++ = *scr++)
////	{
////		;
////	}
////}
//
//char* my_strcpy(char* dest, const char* scr)
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(scr != NULL);//断言
//	while (*dest++ = *scr++)
//	{
//		;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	char arr1[] = "###################";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}




#include <stdio.h>
#include <assert.h>
int my_strlen(const char* str)
{
	assert(str != NULL);
	int count = 0;
	while (*str++)
	{
		count++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdefg";
	printf("%d\n", my_strlen(arr));
}