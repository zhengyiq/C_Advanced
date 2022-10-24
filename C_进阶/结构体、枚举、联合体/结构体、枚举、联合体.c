#define _CRT_SECURE_NO_WARNINGS 1




//#include <stdio.h>
//
//struct Book
//{
//	char Name[20];
//	char Author[20];
//	float Price;
//}b1;
//struct
//{
//	char Name[20];
//	char Author[20];
//	float Price;
//}b2;
//struct
//{
//	char Name[20];
//	char Author[20];
//	float Price;
//}*p;
//int main(void)
//{
//	p = &b2;
//
//	return 0;
//}

//struct Node
//{
//	int data;
//	struct Node* Next;
//};
//
//struct Node
//{
//	int data;
//	struct Node Next;
//};

//struct Point
//{
//	int x;
//	int y;
//}p1; 
//struct Point p = { x, y };//结构体变量的定义与初始化
//
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10, {4,5}, NULL }; //在定义结构体变量的基础上，进行初始化操作
//struct Node n2 = { 20, {5, 6}, NULL };//结构体的嵌套初始化

//#include <stdio.h>
//
//int main(void)
//{
//	struct S1
//	{
//		char c1;
//		int i;
//		char c2;
//	};
//	printf("%d\n", sizeof(struct S1));//12
//	struct S2
//	{
//		char c1;
//		char c2;
//		int i;
//	};
//	printf("%d\n", sizeof(struct S2));//8
//	struct S3
//	{
//		double d;
//		char c;
//		int i;
//	};
//	printf("%d\n", sizeof(struct S3));//16
//	struct S4
//	{
//		char c1;
//		struct S3 s3;
//		double d;
//	};
//	printf("%d\n", sizeof(struct S4));//32
//	return 0;
//}

//#include <stdio.h>
//#pragma pack(8)//设置默认对齐数为8
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//#pragma pack(1)//设置默认对齐数为1
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//int main()
//{
//	printf("%d\n", sizeof(struct S1));//12
//	printf("%d\n", sizeof(struct S2));//6
//	return 0;
//}

//#include <stdio.h>
//
//struct S
//{
//	int data[1000];
//	int num;
//};
//struct S s = { {1,2,3,4}, 1000 };
////结构体传参
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
////结构体地址传参
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s); //传结构体
//	print2(&s); //传地址
//	return 0;
//}

//struct A
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//#include <stdio.h>
//
//int main(void)
//{
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}

//enum Day//星期
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//enum Sex//性别
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//#include <stdio.h>
//enum Color//颜色
//{
//	RED = 5,
//	GREEN = 4,
//	BLUE = 3,
//	YELLOW
//}c;
//int main(void)
//{
//	c = YELLOW;
//	printf("%d", c);
//	return 0;
//}


//union Un
//{
//	char c;
//	int i;
//};
////联合变量的定义
//union Un un;
////计算连个变量的大小
//printf("%d\n", sizeof(un));

//#include <stdio.h>
//
//
//union un
//{
//	char c;
//	int i;
//};
//
//int check_sys()
//{
//	union un check;
//	check.i = 1;
//	return check.c;
//}
//
//
//int main(void)
//{
//	int ret = 0;
//	ret = check_sys();
//	if (ret)
//		printf("小端");
//	else
//		printf("大端");
//
//	return 0;
//}

#include <stdio.h>

int main(void)
{
	union Un1
	{
		char c[5];
		int i;
	};
	union Un2
	{
		short c[7];
		int i;
	};
	//下面输出的结果是什么？
	printf("%d\n", sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));
	return 0;
}