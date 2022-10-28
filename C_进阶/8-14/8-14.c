#define _CRT_SECURE_NO_WARNINGS 1
//喝汽水
//#include <stdio.h>
//
//int Drink(int money)
//{
//	static int bottle;
//	int count = 0;
//	while (money >= 1)
//	{
//		if ((money % 2) == 1)
//		{
//			count++;
//		}
//		money = money / 2;
//
//		bottle += money;
//	}
//	if (count != 1)
//	{
//		Drink(count);
//	}
//	return bottle;
//}
//int main(void)
//{
//	static int count = 0;
//	int money = 0;
//	int ret = 0;
//	scanf("%d", &money);
//	if (money > 0)
//	{
//		ret = Drink(money);
//	}
//	else
//	{
//		ret = 0;
//	}	
//	printf("%d\n", ret+money);
//	return 0;
//}
//
//int total = 0;
//int money = 0;
//int empty = 0;
//scanf("%d", &money);
//total = money;
//empty = money;
//while (empty >=2 )
//{
//	toatl += empty / 2;
//	empty = empty / 2 + empty % 2;
//}

////判断是否为Lilynumber
//#include <stdio.h>
//#include <math.h>
//int main(void)
//{
//	for (int i = 10000; i < 99999; i++)
//	{
//		int k = 0;
//		int sum = 0;
//		for (int  j = 1; j <= 4; j++)
//		{
//			k = (int)pow(10, j);
//			sum += (i %k ) * (i / k);
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int arr[9] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	for (int i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int left = 0;
//	int right = sz - 1;
//	while ((right-left) > 1)
//	{
//		while (((arr[left] % 2) != 0)&&(left < right))
//		{
//			left++;
//		}
//		while (((arr[right] % 2) == 0) && (left < right))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			right--;
//			left++;
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int flag1 = 0;
//	int flag2 = 0;
//	int flag3 = 0;
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (arr[i] <= arr[i + 1])
//			flag1 = 1;
//		else
//		{
//			flag1 = 0;
//			break;
//		}
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (arr[i] >= arr[i + 1])
//			flag2 = 1;
//		else
//		{
//			flag2 = 0;
//			break;
//		}
//	}
//
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (arr[i] == arr[i + 1])
//			flag3 = 1;
//		else
//		{
//			flag3 = 0;
//			break;
//		}
//	}
//	if ((flag2 == 1) || (flag1 == 1) || (flag3 == 1))
//		printf("sorted");
//	else
//		printf("unsorted");
//	return 0;
//}
//
//for (int i = 0; i < n; i++)
//{
//	scanf("%d", &arr[i]);
//	if (i > 0)
//	{
//		if (arr[i] > arr[i + 1])
//			flag1 = 1;
//		else
//			flag2 = 1;
//	}
//}
//if (flag1 + flag2 = 1)
//{
//	printf("");
//}

//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int max = 0;//假设最大值是0
//    int min = 100;//假设最小值是100
//    int i = 0;
//    int score = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &score);
//        if (score > max)
//            max = score;
//        if (score < min)
//            min = score;
//    }
//    printf("%d\n", max - min);
//
//    return 0;

