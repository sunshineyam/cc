#include <stdio.h>
int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		/*if ((year % 4 == 0) && (year % 100 != 0))||(year % 400 == 0))
	{
	printf("%d ", year);
	count++;
	}*/
		if (year % 4 == 0)
		{
			if (year % 100 != 0)
			{
				count++;
				printf("%d ", year);
			}
		}
		if (year % 400 == 0)
		{
			count++;
			printf("%d ", year);
		}
	}
	printf("\ncount = %d\n", count);
	getchar();
	return 0;
}