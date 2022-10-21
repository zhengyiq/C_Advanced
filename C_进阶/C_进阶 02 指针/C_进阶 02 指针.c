#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	char *c[] = { "ENTER","NEW","POINT","FIRST" };
//	char**cp[] = { c + 3,c + 2,c + 1,c };
//	char***cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char *a[] = { "work","at","alibaba" };
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}
//
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int *p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}
//
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}

//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2,1
//	return 0;
//}
//

//#include <stdio.h>
//
//int main(void)
//{
//	//一维数组
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));// 16
//	//a表示表示整个数组的大小
//	printf("%d\n", sizeof(a + 0));// 4/8
//	//数组的首元素地址
//	printf("%d\n", sizeof(*a));// 4
//	//数组首元素的大小
//	printf("%d\n", sizeof(a + 1));// 4/8
//	//数组第二个元素的地址
//	printf("%d\n", sizeof(a[1]));// 4
//	//数组第一个元素所占内现的大小
//	printf("%d\n", sizeof(*&a));// 16
//	//对整个数组的地址解引用得到整个数组的大小
//	//*和&抵消
//	printf("%d\n", sizeof(&a + 1));// 4/8
//	//数组首地址跳过整个数组大小的内存后的地址
//	printf("%d\n", sizeof(&a[0]));// 4/8
//	//数组首元素的地址
//	printf("%d\n", sizeof(&a[0] + 1));// 4/8
//	//数组第二个元素的地址
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	//字符数组
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));// 6
//	//数组所占空间的大小
//	printf("%d\n", sizeof(arr + 0));// 4/8
//	//数组首元素的地址
//	printf("%d\n", sizeof(*arr));// 1
//	//数组首元素所占空间的大小
//	printf("%d\n", sizeof(arr[1]));// 1
//	//数组第二个元素所占空间的大小
//	printf("%d\n", sizeof(&arr));// 4/8
//	//整个数组的地址
//	printf("%d\n", sizeof(&arr + 1));// 4/8
//	//数组首地址跳过整个数组大小的内存后的地址
//	printf("%d\n", sizeof(&arr[0] + 1));// 4/8
//	//数组第二个元素的地址
//
//}

//#include <stdio.h>
//
//int main(void)
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));// 随机值
//	//未识别到'\0'
//	printf("%d\n", strlen(arr + 0));// 随机值
//	//printf("%d\n", strlen(*arr));// 数组首元素即'a'，报错
//	//printf("%d\n", strlen(arr[1]));// 报错
//	printf("%d\n", strlen(&arr));// 随机值
//	printf("%d\n", strlen(&arr + 1));// 随机值
//	printf("%d\n", strlen(&arr[0] + 1));// 随机值 - 1
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));// 7
//	//字符串数组包括'\0'
//	printf("%d\n", sizeof(arr + 0));// 4/8
//	//数组首元素的地址
//	printf("%d\n", sizeof(*arr));// 1
//	//数组首元素所占空间大小
//	printf("%d\n", sizeof(arr[1]));// 1
//	//数组第二个元素所占空间大小
//	printf("%d\n", sizeof(&arr));// 4/8
//	//整个数组的地址
//	printf("%d\n", sizeof(&arr + 1));// 4/8
//	//数组首地址跳过整个数组大小的内存后的地址
//	printf("%d\n", sizeof(&arr[0] + 1));// 4/8
//	//数组第二个元素的地址
//	return 0;
//}

//
//#include <stdio.h>
//
//int main(void)
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));// 6
//	//数组的长度不包括'\0'
//	printf("%d\n", strlen(arr + 0));// 6
//	//数组首元素地址到'\0'的长度
//	//printf("%d\n", strlen(*arr));// err
//	//printf("%d\n", strlen(arr[1]));// err
//	printf("%d\n", strlen(&arr));// 6
//	//数组的地址，首元素地址
//	printf("%d\n", strlen(&arr + 1));// 随机值2
//	printf("%d\n", strlen(&arr[0] + 1));// 6 - 1
//	return 0;
//}

//#include <stdio.h>

//int main(void)
//{
//	char *p = "abcdef";
//	printf("%d\n", sizeof(p));// 4/8
//	//指针所占内存的大小
//	printf("%d\n", sizeof(p + 1));// 4/8
//	//指针所占内存的大小
//	printf("%d\n", sizeof(*p));// 1
//	//首元素的类型
//	printf("%d\n", sizeof(p[0]));// 1
//	//首元素的类型
//	printf("%d\n", sizeof(&p));// 4/8
//	//首元素的地址
//	printf("%d\n", sizeof(&p + 1));// 4/8
//	//数组首地址跳过整个数组大小的内存后的地址
//	printf("%d\n", sizeof(&p[0] + 1));// 4/8
//	//第二个元素的地址
//	return 0;
//}
//
//int main(void)
//{
//	char *p = "abcdef";
//	printf("%d\n", strlen(p));// 6
//	printf("%d\n", strlen(p + 1));// 5
//	//printf("%d\n", strlen(*p));// err
//	//printf("%d\n", strlen(p[0]));// err
//	printf("%d\n", strlen(&p));// 6?
//	printf("%d\n", strlen(&p + 1));// 随机值
//	printf("%d\n", strlen(&p[0] + 1));// 5
//	return 0;
//}

#include <stdio.h>

//int main(void)
//{
//	//二维数组
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));// 48
//	//数组所占空间大小
//	printf("%d\n", sizeof(a[0][0]));// 4
//	//数组首元素所占空间大小
//	printf("%d\n", sizeof(a[0]));// 16
//	//二维数组第一行元素所占空间
//	printf("%d\n", sizeof(a[0] + 1));// 4/8
//
//	printf("%d\n", sizeof(*(a[0] + 1)));// 4
//
//	printf("%d\n", sizeof(a + 1));// 4/8
//	//数组首地址跳过整个数组大小的内存后的地址
//	printf("%d\n", sizeof(*(a + 1)));// 16
//	//数组第一行元素所占空间大小
//	printf("%d\n", sizeof(&a[0] + 1));// 4/8
//	//数组第二行元素地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));// 16
//	//数组第二行元素所占空间
//	printf("%d\n", sizeof(*a));// 16
//	//数组第一行元素所占空间大小
//	printf("%d\n", sizeof(a[3]));// 16
//	//越界
//	return 0;
//}

//int main(void)
//{
//	int a = 10;
//	const int* pa = &a;
//	printf("%d ", *pa);
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int cmp(const void* e1, const void* e2)
//{
//	return *((int*)e1) - *((int*)e2);
//}
//
//void Swap(char* buf1, char* buf2, int width)
//{
//	for (int i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
////void Swap(const void* e1, const void* e2,int width)
////{
////	for (int i = 0; i < width; i++)
////	{
////		char tmp = *(char*)e1;
////		*(char*)e1 = *(char*)e2;
////		*(char*)e2 = tmp;
////		((char*)e1)++;
////		((char*)e2)++;
////	}
////}
//void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1,const void* e2))
//{
//	int flag = 1;
//	for (int  i = 0; i < sz-1; i++)
//	{
//		for (int j = 0; j < sz-1-i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1)*width)>0)
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1)*width, width);
//				flag = 0;
//			}
//
//			//if (arr[j] > arr[j + 1])
//			//{
//			//	int temp = arr[j];
//			//	arr[j] = arr[j + 1];
//			//	arr[j + 1] = temp;
//			//}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//
//}
//
////void bubble_sort(int arr[] , int sz)
////{
////	int flag = 1;
////	for (int  i = 0; i < sz-1; i++)
////	{
////		for (int j = 0; j < sz-1-i; j++)
////		{
////			if (arr[j] > arr[j + 1])
////			{
////				int temp = arr[j];
////				arr[j] = arr[j + 1];
////				arr[j + 1] = temp;
////				flag = 0;
////			}
////		}
////		if (flag == 1)
////		{
////			break;
////		}
////	}
////
////}
//
////void qsort(void* base, 
////			 size_t num, 
////		     size_t size, 
////			 int(*cmp)(const void*, const void*));
//
//struct Stu
//{
//	char Name[15];
//	int age[3];
//};
//
//int cmp02_name(const void* e1, const void* e2)
//{
//	//Returns an integral value indicating the relationship between the strings:
//	return strcmp(((struct Stu*)e1)->Name, ((struct Stu*)e2)->Name);//转换类型是临时的，需要加上()
//}
//int cmp02_age(const void* e1, const void* e2)
//{
//	//Returns an integral value indicating the relationship between the strings:
//	return strcmp(((struct Stu*)e1)->age, ((struct Stu*)e2)->age);//转换类型是临时的，需要加上()
//}
////void test03()
////{
////	struct stu s[3] = { {"zhangsan",15 }, {"lisi", 25},{"wangwu", 30} };
////	int sz = sizeof(s) / sizeof(s[0]);
////	qsort(s, sz, sizeof(s[0]), cmp02_age);
////}
//void test02()
//{
//	struct Stu s[3] = { {"zhangsan",15 }, {"lisi", 25},{"wangwu", 30} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), cmp02_name);
//	bubble_sort(s, sz, sizeof(s[0]), cmp02_name);
//}
//void test01()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//qsort(arr, sz, sizeof(arr[0]), cmp01);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main(void)
//{	
//	//test01();
//	test02();
//	//bubble_sort(arr, sz);
//
//	return 0;
//}


//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main(void)
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	int(*p[10])(int, int) = { 0,Add,Sub,Mul,Div };//转移表
//	while (input)
//	{
//		printf("*************************\n");
//		printf(" 1:add 2:sub \n");
//		printf(" 3:mul 4:div \n");
//		printf("*************************\n");
//		printf("请选择：");
//		scanf("%d", &input);
//		if ((input <= 4 && input >= 1))
//		{
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = (*p[input])(x, y);
//		}
//		else
//			printf("输入有误\n");
//		printf("ret = %d\n", ret);
//	}
//	return 0;
//}


//#include <stdio.h>
//
//
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("************1.Add************\n");
//	printf("************2.Sub************\n");
//	printf("************3.Mul************\n");
//	printf("************4.Div************\n");
//	printf("************0.Exit***********\n");
//}
//
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//calc(int (*pf)(int,int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个数:>");
//	scanf("%d%d",&x, &y);
//	printf("结果为%d\n", pf(x, y));
//}
//
//int main(void)
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			break;
//		default:
//			printf("输入错误");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);


//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	printf("%d\n", x + y);
//	return x + y;
//}
//int main(void)
//{
//	int(*pf)(int, int) = &Add;
//	printf("%p\n", Add);
//	printf("%p\n", &Add);
//	printf("%p\n", *pf);
//	printf("%p\n", pf);
//	
//	Add(1, 2);
//	pf(1, 2);
//	(*Add)(1, 2);
//	(*pf)(1, 2);
//	(****pf)(1,2);
//	return 0;
//}



 //void print(int *p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}


//void test(int arr[3][5])//ok？
//{}
//void test(int arr[][])//ok？
//{}
//void test(int arr[][5])//ok？
//{}
////总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
////因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
////这样才方便运算。
//void test(int *arr)//ok？
//{}
//void test(int* arr[5])//ok？
//{}
//void test(int(*arr)[5])//ok？
//{}
//void test(int **arr)//ok？
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}

//#include <stdio.h>
//void test(int arr[])//ok?
//{}
//void test(int arr[10])//ok?
//{}
//void test(int *arr)//ok?
//{}
//void test2(int *arr[20])//ok?
//{}
//void test2(int **arr)//ok?
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int *arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}


//#include <stdio.h>
//
//void Print(int(*p)[5], int r, int c)
//{
//	for (int  i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			printf("%d ", *(((*p)+i)+j));//编写的程序有错误
//			printf("%d ", *((*(p + i)) + j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main(void)
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	//int arr[3][5] = { 15,14,13,12,11,10,9,8,7,6,5,4,3,2,1 };
//	Print(arr, 3, 5);//传入的是首元素的地址
//	return 0;
//}




//#include <stdio.h>
//
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *((*p)+i));
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello";
//	char str2[] = "hello";
//	const char *str3 = "hello";
//	const char *str4 = "hello";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}


//#include <stdio.h>
//
//int main(void)
//{
//	char* p = "abcdef";//常量字符串
//	
//	//const char* p = "abcdef";
//
//	*p = 'w';//err
//	printf("%s", p);//
//	return 0;
//}