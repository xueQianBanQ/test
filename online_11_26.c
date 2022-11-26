#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int calcu_bottle(int n)
//{
//	int sum;
//	if (n == 1)
//	{
//		return 1;
//	}
//	else if(n % 2 == 0)
//	{
//		return n + calcu_bottle(n / 2);
//	}
//	else
//	{
//		return n - 1 + calcu_bottle(n / 2 + 1);
//	}
//}
//int main()
//{
//	int n = 0;//买汽水的钱
//	printf("请输入你想要买汽水的钱:>");
//	scanf("%d", &n);
//	int bottle = calcu_bottle(n);
//	printf("%d", bottle);
//	return 0;
//}
void print(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(arr + i));
	}
	printf("\n");

}
void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int temp = arr[right];
			arr[right] = arr[left];
			arr[left] = temp;
		}

	}

}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);//奇数放前面
	print(arr, sz);
	return 0;
}

