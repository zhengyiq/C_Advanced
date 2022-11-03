#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//int main(void)
//{
//	//int* ptr = (int*)malloc(40);//我们使用malloc函数在堆区申请了40个字节大小的空间,实际上就是十个整型的空间
//	//这样声明空间不太好计算，建议使用下面这种方式
//	int num = 10;
//	int* ptr = (int*)malloc(sizeof(int) * num);//这样使用动态内存的申请更加的方便
//
//
//	if (NULL == ptr)//判断指针是否为空
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	//使用
//	for (int  i = 0; i < 10; i++)
//	{
//		*(ptr + i) = i;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", (ptr[i]));
//	}
//
//	free(ptr);
//	ptr = NULL;//将指针释放的同时需要将其置空，防止其变为野指针
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	while (1)
//	{
//		malloc(10);
//	}
//	return 0;
//}

//int main()
//{
//	//40个字节 - 10个整型
//	//malloc(40);
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//
////calloc = malloc+memset

//int test()
//{
//	int num = 10;
//	int* p = (int*)malloc(sizeof(int) * num);
//		if (p == NULL)
//	{
//		//
//		return 1;
//	}
//	//...使用
//	if (1)
//		return 2;
//
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}
////内存泄漏

//#include <stdio.h>
//
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	//增加空间
//	int* ptr = (int*)realloc(p, sizeof(int)*20);//调整之后新的大小
//	//当realloc开辟失败的是，返回的是NULL
//
//	if (ptr != NULL)
//	{
//		p = ptr;
//		ptr = NULL;
//	}
//	//这一块需要特别的注意我们不可以将之前空间开辟的p指针直接指向我们使用realloc开辟的空间，如果直接将p指针指向realloc的空间，如果空间开辟失败那么我们原先数据就会丢失。
//
//
//	for (int i = 10; i < 20; i++)
//	{
//		*(p + i) = i;
//	}
//
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}
//
//int main()
//{
//	int*p = (int*)realloc(NULL, 40);//等价于malloc(40);
//	return 0;
//}

#include <stdio.h>

int globalVal = 1;
static int staticGlobalVar = 1;

void Test()
{
	static int staticVar = 1;
	int localVar = 1;
	int num1 = 10;
	char arr[] = "abcd";
	char* pc = NULL;
	int* ptr1 = (int*)malloc(sizeof(int));
	int* ptr2 = (int*)calloc(4,sizeof(int));
	int* ptr3 = (int*)realloc(ptr2,sizeof(int));

	free(ptr1);
	free(ptr2);
	free(ptr3);
}
