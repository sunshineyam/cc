#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n-1)+fib(n-2);
//
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d", ret);
//		system("pause");
//		return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	int i = 0;
//	if (n <= 2)
//		return 1;
//	else
//	{
//		for (i = 2; i < n; i++)//i控制循环次数
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}

//递归
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//int pow_recursion(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	if (k == 1)
//	{
//		return n;
//	}
//		return n*pow_recursion(n, k-1);
//}
//int main()
//{ 
//	int n = 0;
//	int k = 0;
//	int ret = 0;
//	scanf("%d,%d", &n, &k);
//	ret = pow_recursion(n, k);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}

//迭代
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//int pow_iteration(int n, int k)
//{
//	int i = 0;
//	int t = n;
//	if (k == 0)
//	{
//		return 1;
//	}
//	if (k == 1)
//	{
//		return n;
//	}
//	else
//	{
//		for (i = 1; i < k; i++)//控制次数
//		{
//			n = n*t;
//		}
//		return n;
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int ret = 0;
//	scanf("%d,%d", &n, &k);
//	ret = pow_iteration(n, k);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	system("pause");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int DigitSum(int n)
//{
//	int sum = 0;
//	int t = 0;
//	if (n != 0)
//	{
//			t = n % 10;
//			n = n / 10;
//			sum = t + DigitSum(n);
//	}
//	return sum;
//
//	/*if (n!=0)
//		return DigitSum(n);*/
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n",DigitSum(n));
//	system("pause");
//	return 0;
//}

//递归
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int fac(int n)
//{
//	if (n == 0)
//		return 1;
//	if (n == 1)
//		return 1;
//	return n*fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//    ret = fac(n);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}

//迭代
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int fac(n)
//{
//	int i = 0;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 1;
//	else
//	{
//		for (i = 1; i < n; i++)
//		{
//			n = n*i;
//		}
//		return n;
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fac(n);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//int strlen(char *str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return strlen(str +1) + 1;
//
//}
//int main()
//{
//	char *str = "abcdef";
//	int length = strlen(str);
//	printf("%d", length);
//	system("pause");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//int strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//
//}
//int main()
//{
//	char* str = "abcdef";
//	int length = strlen(str);
//	printf("%d", length);
//	system("pause");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void bubble_sort(int arr[10])
//{
//	int i, j, tmp;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (arr[i]>arr[i+1])
//				/*swop(arr[j], arr[j + 1]);*/
//			{
//				tmp = arr[i];
//				arr[i] = arr[i+1];
//				arr[i+1] = tmp;
//			}
//		}
//		/*bubble_sort(arr[i], arr[i + 1]);*/
//	}
//}
//int main()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	bubble_sort(arr);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//冒泡排序
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void bubble_sort(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++) //控制趟数
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++) //控制对数
//		{
//			int tmp = 0;
//			if (arr[j]>arr[j + 1])
//		    tmp = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = tmp;
//		}
//	}
//}
//void print_arr(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	printf("\n");
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	printf("\n");
//	system("pause");
//	return 0;
//}

#include <stdio.h>
int main()
{
	
	system("pause");
	return 0;
}

