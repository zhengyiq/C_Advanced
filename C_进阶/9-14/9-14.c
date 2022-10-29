#define _CRT_SECURE_NO_WARNINGS 1

//杨氏矩阵
//
//#include <stdio.h>
//
//void find_num(int arr[3][3], int k, int *px, int *py)
//{
//	int i = 0;
//	int j = *py - 1;
//	int flag = 0;
//	while (i<=*px-1 && j>=0)
//	{	
//		if (arr[i][j] < k)
//		{
//			i++;
//		}
//		else if (arr[i][j] > k)
//		{
//			j--;
//		}
//		else
//		{
//			flag = 1;
//			*px = i;
//			*py = j;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		*px = -1;
//		*py = -1;
//	}
//}
//
//int main(void)
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//	int x = 3;
//	int y = 3;
//	//返回型参数
//	find_num(arr, k, &x , &y);
//	printf("%d %d", x, y);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//void reverse(char* left, char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//left_move(char* arr, int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	//for (int i = 0; i < k; i++)
//	//{
//	//	char tmp = arr[0];
//	//	for (int j = 0; j < len - 1; j++)
//	//	{
//	//		arr[j] = arr[j + 1];
//	//	}
//	//	arr[len - 1] = tmp;
//	//}
//
//	reverse(arr, arr + k - 1);
//	reverse(arr + k, arr + len - 1);
//	reverse(arr, arr + len - 1);
//
//}
//
//int main(void)
//{
//	char arr[] = "abcdefgi";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k%len(arr)); 
//	printf("%s", arr);
//	return 0;
//} 

#include <stdio.h>
#include <string.h>

//int is_left_move(char* arr, char* arr2)
//{
//	int i = 0;
//	int len = strlen(arr);
//	for (int i = 0; i < len; i++)
//	{
//		char tmp = arr[0];
//		for (int j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = tmp;
//		if (strcmp(arr,arr2)==0)
//		{
//			return 1;
//		}
//	}
//}

//使用strncat和strstr
//int is_left_move(char* arr1, char* arr2)
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	strncat(arr1, arr1, len1);
//	char* ret = strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//		return 1;
//}
//
//int main(void)
//{
//	char arr[20] = "ABCDEF";
//	char arr2[] = "CDEFAB";
//	int ret = is_left_move(arr,arr2);
//	printf("%d", ret);
//	return 0;
//}

//打印空心正方形
//#include <stdio.h>
//
//int main() {
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		//打印第一行
//		for (int i = 0; i < n; i++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//		for (int i = 0; i < n - 2; i++)
//		{
//			printf("* ");
//			for (int j = 0; j < n - 2; j++)
//			{
//				printf("  ");
//			}
//			printf("* ");
//			printf("\n");
//		}
//		for (int i = 0; i < n; i++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//先打印完整的正方形然后再添加约束条件
//#include <stdio.h>
//
//int main(void)
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//BC77
//有序的数组插入一个数
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n + 1];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int num = 0;
//	scanf("%d", &num);
//	int j = n - 1;
//	for (; j >= 0; j--)
//	{
//		if (arr[j] > num)
//		{
//			arr[j + 1] = arr[j];
//		}
//		else
//			break;
//	}
//	arr[j + 1] = num;
//
//	for (int i = 0; i < n + 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//七人投票
//#include <stdio.h>
//
//int main() {
//	int num = 0;
//	int arr[7] = { 0 };
//
//	while (scanf("%d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]) == 7)
//	{
//		int Max = 0;
//		int Min = 100;
//		int sum = 0;
//		for (int i = 0; i < 7; i++)
//		{
//
//			if (arr[i] > Max)
//				Max = arr[i];
//			if (arr[i] < Min)
//				Min = arr[i];
//			sum += arr[i];
//		}
//
//
//		printf("%.2f\n", (sum - Max - Min) / 5.0);
//	}
//	return 0;
//}

//scanf函数的返回值是实际读取数据的个数，如果没有读取数据读取失败返回EOF、
//while (scanf("%d %d", &a, &b) == 2)
//{
//	读取到两个数据返回值为2
//}
//while (scanf("%d %d", &a, &b) != EOF)
//{
//	读到几个数就返回几个数
//}
//while (~scanf("%d %d", &a, &b))
//	{
//		读取失败时返回-1，-1的补码是全1 取反得到0
//	}


//#include <stdio.h>
//
//int main() {
//	enum HTTP
//	{
//		OK = 200,
//		Accepted = 202,
//		Bad_Request = 400,
//		Forbidden = 403,
//		Not_Found = 404,
//		Internal_Server_Error = 500,
//		Bad_Gateway = 502
//	};
//	int state = 0;
//	while (scanf("%d", &state) == 1)
//	{
//		switch (state)
//		{
//		case OK:
//			printf("OK\n");
//			break;
//		case Accepted:
//			printf("Accepted\n");
//			break;
//		case Bad_Request:
//			printf("Bad Request\n");
//			break;
//		case Forbidden:
//			printf("Forbidden\n");
//			break;
//		case Not_Found:
//			printf("Not Found\n");
//			break;
//		case Internal_Server_Error:
//			printf("Internal Server Error\n");
//			break;
//		case Bad_Gateway:
//			printf("Bad Gateway\n");
//			break;
//		default:
//			break;
//		}
//	}
//	return 0;
//}
//
