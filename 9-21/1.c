#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, b, z;
	scanf("%d%d",&a,&b);
	z = a;
	a = b;
	b = z;
	printf("%d%d",a,b);
	system("pause");
	return 0;
}