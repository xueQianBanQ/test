#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//typedef struct stu
//{//���� ���� �绰 �Ա�
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
//	struct stu s1 = { "����", 18, "12345678", "Ů" };
//
//	print1(s1);
//	print2(&s1);
//	return 0;
//}


//ѧϰDebug��Relese
//�Լ�ѧϰ����
//F5��F9����
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
//		printf("%d ", 10 - i);//F5��ֱ�������̵㴦//F9�����öϵ�
//	}
//}

////����relese��Debug
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
//	while (*dest++ = *scr++) //�����ˡ�\0'��ASCIIֵΪ0�� ����
//	{
//		;                                    //û�й�ܵ���Ҵ����ָ����������Ұָ���״��
//	}
//	*dest = '\0';
//}


//void my_strcpy(char* dest, char* scr)
//{
//	if (dest != NULL && scr != NULL)
//	{
//		while (*dest++ = *scr++)
//		{
//			;                               //���������Ұָ�룬��û����ʾʲô
//		}
//		*dest = '\0';
//	}
//
//}
//#include <stdio.h>
//#include <assert.h>
////void my_strcpy(char* dest, char* scr)
////{
////	assert(dest != NULL);//����
////	assert(scr != NULL);//����
////	while (*dest++ = *scr++)
////	{
////		;
////	}
////}
//
//char* my_strcpy(char* dest, const char* scr)
//{
//	char* ret = dest;
//	assert(dest != NULL);//����
//	assert(scr != NULL);//����
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