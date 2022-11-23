#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <stdlib.h> 
#include <string.h>

int cmp_int (const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int cmp_float(const void* e1, const void* e2)
{
	if (*(float*)e1 > *(float*)e2)
	{
		return 1;
	}
	else if (*(float*)e1 < *(float*)e2)
	{
		return -1;
	}
	else
		return 0;
}

void Swap(char* e1, char* e2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = *e1;
		*e1 = *e2;
		*e2 = temp;
		e1++;
		e2++;
	}
}

void dubble(void* base, int sz, int width, int (*temp)(void* e1, void* e2))
{
	int i = 0;
	int j = 0;
	//ÌÉµÄ´ÎÊý
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - i - 1; j++)
		{
			if (temp((char*)base + width * j, (char*)base + width * (j + 1)) > 0)
			{
				Swap((char*)base + width * j, (char*)base + width * (j + 1), width);
			}
		}
	}
}
int main()
{
	int arr[] = { 9 ,8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	dubble(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}