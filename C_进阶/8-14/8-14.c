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

//#include <stdio.h>
//
//int main() {
//
//	//输入
//	int n = 5;
//	int m = 6;
//	int arr1[5];
//	int arr2[6];
//	//scanf("%d %d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//
//	//输出
//	int j = 0;
//	int k = 0;
//	for (int i = 0; i < n+m-1; i++)
//	{
//
//		if ((arr1[k] < arr2[j]) && (k < n))
//		{
//			printf("%d ", arr1[k]);
//			k++;
//		}
//		else if ((arr1[k] >= arr2[j]) && (j < m))
//		{
//			printf("%d ", arr2[j]);
//			j++;
//		}
//		else
//			;
//		if (k == n)
//		{
//			printf("%d ", arr2[j]);
//			j++;
//		}
//		else if(j == m)
//		{
//			printf("%d ", arr1[k]);
//			k++;
//		}
//		else;
//	}
//
//
//	return 0;
//}


//#include <stdio.h>
//
//int main() 
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int m = 2 * n + 1;
//		for (int i = 0; i < n; i++) 
//		{
//			//打印空格
//			for (int j = i; j < n; j++) 
//			{
//				printf("  ");
//			}
//			for (int j = 0; j < 1 + i; j++) 
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		for (int i = 0; i < n + 1; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		for (int i = 0; i < n; i++) 
//		{
//			for (int j = 0; j < i + 1; j++) 
//			{
//				printf("  ");
//			}
//			for (int j = i; j < n; j++) 
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三； b==2 a==3
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b==2) + (a==3) == 1) &&
//							((b==2) + (e==4) == 1) &&
//							((c==1) + (d==2) == 1) &&
//							((c==5) + (d==3) == 1) &&
//							((e==4) + (a==1) == 1))
//						{
//							if((a * b * c * d * e == 120) &&(a+b+c+d+e==15))
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//



//
//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer!='A') + (killer=='C') + (killer=='D') + (killer!='D') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}
//