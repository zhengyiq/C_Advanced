#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//int main(void)
//{
//	//int* ptr = (int*)malloc(40);//����ʹ��malloc�����ڶ���������40���ֽڴ�С�Ŀռ�,ʵ���Ͼ���ʮ�����͵Ŀռ�
//	//���������ռ䲻̫�ü��㣬����ʹ���������ַ�ʽ
//	int num = 10;
//	int* ptr = (int*)malloc(sizeof(int) * num);//����ʹ�ö�̬�ڴ��������ӵķ���
//
//
//	if (NULL == ptr)//�ж�ָ���Ƿ�Ϊ��
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	//ʹ��
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
//	ptr = NULL;//��ָ���ͷŵ�ͬʱ��Ҫ�����ÿգ���ֹ���ΪҰָ��
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
//	//40���ֽ� - 10������
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
//	//�ͷ�
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
//	//...ʹ��
//	if (1)
//		return 2;
//
//	//�ͷ�
//	free(p);
//	p = NULL;
//	return 0;
//}
////�ڴ�й©

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
//	//���ӿռ�
//	int* ptr = (int*)realloc(p, sizeof(int)*20);//����֮���µĴ�С
//	//��realloc����ʧ�ܵ��ǣ����ص���NULL
//
//	if (ptr != NULL)
//	{
//		p = ptr;
//		ptr = NULL;
//	}
//	//��һ����Ҫ�ر��ע�����ǲ����Խ�֮ǰ�ռ俪�ٵ�pָ��ֱ��ָ������ʹ��realloc���ٵĿռ䣬���ֱ�ӽ�pָ��ָ��realloc�Ŀռ䣬����ռ俪��ʧ����ô����ԭ�����ݾͻᶪʧ��
//
//
//	for (int i = 10; i < 20; i++)
//	{
//		*(p + i) = i;
//	}
//
//	//�ͷ�
//	free(p);
//	p = NULL;
//	return 0;
//}
//
//int main()
//{
//	int*p = (int*)realloc(NULL, 40);//�ȼ���malloc(40);
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
