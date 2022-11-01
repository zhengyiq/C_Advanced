#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <math.h>
//
//int main() {
//	long long  n = 0;
//	long long ret = 0;
//	scanf("%lld", &n);
//	long long i = 0;
//
//	while (n > 0)
//	{
//		if (n % 2 == 0)
//		{
//			ret += 0 * (long long)pow(10, i);
//			i++;
//		}
//		else
//		{
//			ret += 1 * (long long)pow(10, i);
//			i++;
//		}
//		n = n / 10;
//	}
//	printf("%lld", ret);
//	return 0;
//}

//递归
//#include <stdio.h>
//
//int change(int x)
//{
//	if (x < 10)
//	{
//		return x % 2 == 1;
//	}
//	else
//	{
//		return (x % 10 % 2 == 1) + 10 * change(x / 10);
//	}
//}
//
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", change(n));
//	return 0;
//}

//争夺前五名
//#include <stdio.h>
//#include <stdlib.h>
//#define n 6
//int cmp(const void* e1, const void* e2)
//{
//	return *((int*)e1) - *((int*)e2);
//}
//int main() {
//	//int n = 0;
//	//scanf("%d", &n);
//	int arr[n];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	qsort(arr, n, sizeof(int), cmp);
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//数字三角形
//#include <stdio.h>
//
//int main() {
//	int n = 0;
//	while (1 == scanf("%d", &n))
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= n; j++)
//			{
//				if (j <= i)
//					printf("%d ", j);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//正斜线图案
//#include <stdio.h>
//int main() {
//	int n = 0;
//	while (1 == scanf("%d", &n))
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= n; j++)
//			{
//
//				if (i + j == n + 1)
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//long long cmp(const void* e1, const void* e2)
//{
//	return *((long long*)e1) - *((long long*)e2);
//}
//int main()
//{
//	//long long n = 0;
//	//scanf("%lld", &n);
//	long long arr[n];
//	for (long long i = 0; i < n; i++)
//	{
//		scanf("%lld", &arr[i]);
//	}
//	long long src = 0;
//	long long dest = 0;
//	while (src < n)
//	{
//		if (arr[src] == arr[dest])
//		{
//			src++;
//		}
//		else
//		{
//			dest++;
//			arr[dest] = arr[src];
//			src++;
//		}
//	}
//
//	qsort(arr, dest + 1, sizeof(long long), cmp);
//	for (long long i = 0; i < dest + 1; i++)
//	{
//		printf("%lld ", arr[i]);
//	}
//	return 0;
//}
//
//
//#include <stdio.h>
//
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100001] = { 0 };
//	int m = 0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		arr[m] = 1;
//	}
//	for (int i = 1; i <= 100000; i++)
//	{
//		if (arr[i] != 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n + 1];
//	memset(arr, 0, (n + 1) * sizeof(int));
//	int m = 0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		arr[m] = 1;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (arr[i] != 0)
//			printf("%d ", i);
//	}
//	return 0;
//}


//带空格直角三角形
//5*4的数组

//#include <stdio.h>
//
//int main() {
//	int n = 0;
//	while (1 == scanf("%d", &n))
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n - 1 - i; j++)
//			{
//				printf("  ");
//			}
//			for (int j = n - 1; j >= n - 1 - i; j--)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//5*5的数组
//#include <stdio.h>
//
//int main() {
//	int n = 0;
//	while (1 == scanf("%d", &n))
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (i + j < n - 1)
//					printf("  ");
//				else
//					printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}