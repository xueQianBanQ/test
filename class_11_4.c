#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int check_sys(void)
//{
//	int a = 1;
//	//С���� 01 00 00 00
//	//����� 00 00 00 01
//	char* p = &a;
//	//С��ȡ01�����ȡ00
//	return *p;
//}
//int main()
//{
//	//�����ֽ����Ǵ�˻���С��
//	//С����һ�����ݵĵ�λ�洢�ڵ͵�ַ����λ�洢�ڸߵ�ַ
//	//�����һ�����ݵĵ�λ�洢�ڸߵ�ַ����λ�洢�ڵ͵�ַ
//	int ret = check_sys();//����1��С�ˣ� ����0�Ǵ��
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
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