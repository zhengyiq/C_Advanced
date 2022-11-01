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

//ตÝน้
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


#include <stdio.h>
#include <stdlib.h>
#define n 6
int cmp(const void* e1, const void* e2)
{
	return *((int*)e1) - *((int*)e2);
}
int main() {
	//int n = 0;
	//scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	qsort(arr, n, sizeof(int), cmp);

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}