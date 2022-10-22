#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int print(int n)
{
	static int count = 0;
	if (!count)
	{
		printf("%d\n", 1);
		count++;
	}
	if (n == 1)
	{
		//printf("%d ", n); 
		//printf("\n");
		return 1;
	}
	else
	{
		printf("%d ", 1);
		for (int i = 1; i < n; i++)
		{
			printf("%d ", print(n - 1) + print(n - 1));
		}
		printf("%d ", 1);
		printf("\n");
		return print(n - 1) + print(n - 1);
	}
}


//´òÓ¡Ñî»ÔÈý½Ç
int main(void)
{
	int a[10][10];


	return 0;
}