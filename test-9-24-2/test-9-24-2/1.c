#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
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
	

	/*int i = 0, p = 1, sum = 0;
	for (i = 1; i < 100; i++)
	{
		sum = sum + (1 / i)*p;
		p = -p;
	}
	printf("%d", sum);*/

	/*int i = 0, j = 0;
	int sum = 0, sum1 = 0, sum2 = 0;
	for (i = 1; i < 100; i+=2)
	{
		sum1 = sum1+1 / i;
	}
	for (j = 2; j <= 100; j += 2)
	{
		sum2 = sum2 - 1 / j;
	}
	sum = sum1 + sum2;
	printf("%d", sum);*/


	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 6, 7, 8, 9, 10 };
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		int tmp = 0;
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	for (i = 0; i < 5; i++)

	{
		printf("%d", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d", arr2[i]);
	}


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
	
	system("pause");
	return 0;
}