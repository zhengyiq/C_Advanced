#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
int main(void)
{
	int* ptr = (int*)malloc(40);//����ʹ��malloc�����ڶ���������40���ֽڴ�С�Ŀռ�,ʵ���Ͼ���ʮ�����͵Ŀռ�
	//���������ռ䲻̫�ü��㣬����ʹ���������ַ�ʽ
	int num = 10;
	int* ptr = (int*)malloc(sizeof(int) * num);//����ʹ�ö�̬�ڴ��������ӵķ���


	if (NULL == ptr)//�ж�ָ���Ƿ�Ϊ��
	{
		printf("%s\n", strerror(errno));
		return 1;
	}

	//ʹ��
	for (int  i = 0; i < 10; i++)
	{
		*(ptr + i) = i;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", (ptr[i]));
	}

	free(ptr);
	ptr = NULL;//��ָ���ͷŵ�ͬʱ��Ҫ�����ÿգ���ֹ���ΪҰָ��

	return 0;
}


