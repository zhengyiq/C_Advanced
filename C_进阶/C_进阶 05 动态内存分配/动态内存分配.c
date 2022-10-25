#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
int main(void)
{
	int* ptr = (int*)malloc(40);//我们使用malloc函数在堆区申请了40个字节大小的空间,实际上就是十个整型的空间
	//这样声明空间不太好计算，建议使用下面这种方式
	int num = 10;
	int* ptr = (int*)malloc(sizeof(int) * num);//这样使用动态内存的申请更加的方便


	if (NULL == ptr)//判断指针是否为空
	{
		printf("%s\n", strerror(errno));
		return 1;
	}

	//使用
	for (int  i = 0; i < 10; i++)
	{
		*(ptr + i) = i;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", (ptr[i]));
	}

	free(ptr);
	ptr = NULL;//将指针释放的同时需要将其置空，防止其变为野指针

	return 0;
}


