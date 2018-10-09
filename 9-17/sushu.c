#include <stdio.h>
#include<math.h>
int main()
{
	int i ,j,k,count=0;
	for (i = 100; i <= 200; i++)
	{
		k = sqrt(i);
		for (j = 2; j <= k; j++)
		{
			if (i%j == 0)
				break;
		}
		if (j > k)
		{
			count++;
			printf("%d ", i);

		}
	}
	printf("\ncount= %d\n", count);
	/*int i = 0 ,j=0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i*j);
		}
		printf("\n");
	}*/
	getchar();
	return 0;
}