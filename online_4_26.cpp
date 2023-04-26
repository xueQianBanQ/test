#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
//namespace Q
//{
//	int rand = 0;
//}
//
//int main()
//{
//	return 0;
//}

//int a = 0;
//namespace Q
//{
//	int a = 1;
//}
//int main()
//{
//	int a = 2;
//	printf("%d\n", a);
//	printf("%d\n", ::a);
//	printf("%d\n", Q::a);
//}




//int a = 0;
//namespace Q
//{
//	int a = 1;
//}
//using namespace Q;
//int main()
//{
//	//没有有局部变量冲突
//	//int a = 2;
//	printf("%d\n", a);
//}

//using namespace std;
//int main()
//{
//	std::cout << "hello world" << std::endl;
//	std::cout << "hello world" << std::endl;
//	cout << "hello world" << endl;
//	cout << "hello world" << endl;
//	cout << "hello world" << endl;
//	cout << "hello world" << endl;
//	cout << "hello world" << endl;
//	return 0;
//}
//using std::cout;
//using std::endl;
//int main()
//{
//	cout << "hello world" << endl;
//	cout << "hello world" << endl;
//	cout << "hello world" << endl;
//	cout << "hello world" << endl;
//	cout << "hello world" << endl;
//	cout << "hello world" << endl;
//	cout << "hello world" << endl;
//	return 0;
//}

using namespace std;
namespace N1
{
	int a = 0;
	namespace N1
	{
		int a = 1;
		int sum(int a, int b)
		{
			return a + b;
		}
	}
}
int main()
{
	cout << N1::a << endl;
	cout << N1::N1::a << endl;
	cout << N1::N1::sum(2, 5) << endl;
	return 0;
}