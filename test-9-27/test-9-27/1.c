#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

	//错误
	/*int a = 0, b = 0, i = 0;
	int count = 0;
	for (a = 0; a < 10; a++)
	{
	for (b = 1; b < 10; b++)
	{
	i = a * 10 + b;
	if ((a == 9) || (b == 9))
	count++;
	}
	}
	printf("count=%d", count);*/
	
	//正确
	/*int i = 0,  count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
	printf("count=%d", count);*/


	/*int i = 0, p = 1;
    float sum = 0;
	for (i = 1; i <=100; i++)
	{
	sum = sum + 1.0/ i*p;
	p = -p;
	}
	printf("%f", sum);*/

	/*int i = 0, j = 0;
	float sum = 0, sum1 = 0, sum2 = 0;
	for (i = 1; i < 100; i+=2)
	{
	sum1 = sum1+1.0/ i;
	}
	for (j = 2; j <= 100; j += 2)
	{
	sum2 = sum2 - 1.0/ j;
	}
	sum = sum1 + sum2;
	printf("%f", sum);*/


//void print_arr(int arr[5], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr1[5] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int tmp = 0;
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	print_arr(arr1, 5);
//	print_arr(arr2, 5);



	/*int a;
	scanf("%d", &a);
	int sum = a + a*a + a*a*a + a*a*a*a + a*a*a*a*a;
	printf("%d", sum);*/


	/*int a = 0, b = 0, c = 0;
	int n = 0;
	for (a = 1; a < 10; a++)
	{
	for (b = 0; b < 10; b++)
	{
	for (c = 0; c < 10; c++)
	{
	n = a * 100 + b * 10 + c;
	if (n == (a*a*a) + (b*b*b) + (c*c*c))
	printf("%d\n", n);
	}
	}
	}*/


	//int main()
	//{
	//	char diamond[][5] = {{' ',' ','*' }, { ' ','*',' ','*'}, { '*', ' ', ' ', ' ','*', }, { ' ','*',' ','*'}, { ' ',' ','*'}};
	//	int i, j;
	//	for (i = 0; i < 5; i++)
	//	{
	//		for (j = 0; j < 5; j++)
	//			printf("%c", diamond[i][j]);
	//		printf("\n");
	//	}


//int main()
//{
	/*int num = 20;
	int * p = &num;
	*p = 20;
	printf("%p ",p);*/


	/*int i = 1;
	while (i <= 10)
	{
		i = i + 1;
		if (i == 5)
			continue;
		printf("%d ", i);
		
	}*/

	/*int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int key = 7;
	int mid = 0;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid]>key)
		{
			right = mid - 1;
		}
		else
		{
			break;
		}
	}
	if (left <= right)
		printf("找到了%d\n",mid);
	else
		printf("找不到");*/


//int BinarySearch(int arr[], int key, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] <key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int key = 7;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	ret = BinarySearch(arr, key, sz);
//	if (ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了 %d\n",ret);
//
//	system("pause");
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	char password[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:<");
//		scanf("%s", password);
//		//假设密码是88888
//		if (strcmp(password, 88888) == 0)
//			break;
//		else
//			printf("密码错误请重新输入\n");
//	}
//	if (i < 3)
//		printf("登陆成功\n");
//	else
//		printf("退出程序");
//	system("pause");
//	return 0;
//}


//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("***************\n");
//	printf("***************\n");
//	printf("****  1.play  *\n");
//	printf("****  0.exit  *\n");
//	printf("***************\n");
//}
//void game()
//{
//	int num = 0;
//	int ret = rand()%100 + 1;
//	while (1)
//	{
//		printf("请输入数字:>");
//		scanf("%d", &num);
//		if (ret > num)
//		{
//			printf("猜小了\n");
//		}
//		else if (ret < num)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int) time (NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("选择错误");
//			break;
//		}
//	} while (input);
	/*system("pause");
	return 0;
}*/


#include <stdio.h>
int main()
{
	char c1, c2;
	c1 = getchar();
	c2 = c1 + 32;
	putchar(c2);
	putchar('\n');
	system("pause");
	return 0;
}