#include <stdio.h>
int main()
{
	int a[] = { 1, 23, 6, 7, 88, 9, 10, 11, 12, 16 };
	int i, max = a[0];
	for (i = 0; i < 10; i++)
	{
		if (max < a[i])
			max = a[i];
	}
	printf("max=%d\n", max);
	system("pause");
	return 0;
}