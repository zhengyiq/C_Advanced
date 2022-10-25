#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void)
{
	//打开文件
	//相对路径
	//FILE* pf = fopen("F:\\code\\text.txt", "w");
	//绝对路径
	FILE* pf = fopen("text.txt","r");
	//判断是否读写成功
	if (NULL == pf)
	{
		perror("fopen");
	}


	//写文件
	//for (int i = 0; i < 26; i++)
	//{
	//	fputc('a'+ i,pf);
	//}
	//读文件
	//for (int i = 0; i < 26; i++)
	//{
	//	int ch = fgetc(pf);
	//	printf("%c ", ch);
	//}
	int ch = 0;

	while ((ch = fgetc(pf)) != EOF)
	{
		printf("%c ", ch);
	}


	
	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}