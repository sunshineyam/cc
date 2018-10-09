//#include <stdio.h> 
//void swop(int *px, int *py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int a = 13;
//	int b = 2;
//	swop(&a, &b);
//	printf("a=%d b=%d", a, b);
//	system("pause");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int is_leap_year(int year)
//{
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		return 1;
//	else 
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	int ret = 0;
//	scanf("%d", &year);
//	ret = is_leap_year(year);
//	if (ret==1)
//		printf("是闰年");
//	else
//		printf("不是闰年");
//	system("pause");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int is_prime(int num)
//{
//	int i;
//	int sum = 0;
//	if (num != 2)
//	{
//		for (i = 2; i < num; i ++)
//		{
//			if (num%i == 0)
//			{
//				sum = 0;
//				break;
//			}
//			if (num%i != 0)
//			{
//				sum = 1;
//			}
//		}
//		if (num == 2)
//			sum = 1;
//	}
//	if (num == 2)
//		sum = 1;
//	return sum;
//}
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	scanf("%d", &num);
//	ret = is_prime(num);
//	if (ret == 1)
//		printf("是素数");
//	else
//		printf("不是素数");
//	system("pause");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void mul(int a)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= a; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d\t", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a = 0;
//	printf("请输入要打印的乘法口诀表:>");
//	scanf("%d", &a);
//	mul(a);
//	system("pause");
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{

	system("pause");
	return 0;
}