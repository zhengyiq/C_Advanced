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
//struct Point p = { x, y };//�ṹ������Ķ������ʼ��
//
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10, {4,5}, NULL }; //�ڶ���ṹ������Ļ����ϣ����г�ʼ������
//struct Node n2 = { 20, {5, 6}, NULL };//�ṹ���Ƕ�׳�ʼ��

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
//#pragma pack(8)//����Ĭ�϶�����Ϊ8
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//#pragma pack(1)//����Ĭ�϶�����Ϊ1
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
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
////�ṹ�崫��
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
////�ṹ���ַ����
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s); //���ṹ��
//	print2(&s); //����ַ
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

//enum Day//����
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//enum Sex//�Ա�
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//#include <stdio.h>
//enum Color//��ɫ
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
////���ϱ����Ķ���
//union Un un;
////�������������Ĵ�С
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
//		printf("С��");
//	else
//		printf("���");
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
	//��������Ľ����ʲô��
	printf("%d\n", sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));
	return 0;
}