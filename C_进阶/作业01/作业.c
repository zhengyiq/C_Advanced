#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void)
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &m, &n);
	int arr1[1000];
	int arr2[1000];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr2[i]);
	}
	int j = 0;
	int k = 0;

	while (j<n && k<m)
	{
		if (arr1[j] < arr2[k])
		{
			printf("%d", arr1[j]);
			j++;
		}

	}


	return 0; 
}




//#include <stdio.h>
//
//void move_odd_even(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int temp = 0;
//
//	while (left < right)
//	{
//		//从左向右找一个偶数停下来
//		while ((left < right) && (arr[left] % 2 == 1))//如果全是奇数，产生问题越界
//		{
//			left++;
//		}
//
//		//从右向左找一个偶数停下来
//		while ((left < right) && (arr[right] % 2 == 0))
//		{ 
//			right--;
//		}
//		if (left < right)
//		{
//			temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//			left++;
//			right--;//可以跳过循环
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
//}
//
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move_odd_even(arr, sz);
//	return 0;
//}