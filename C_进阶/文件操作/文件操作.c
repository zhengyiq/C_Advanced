#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void)
{
	//���ļ�
	//���·��
	//FILE* pf = fopen("F:\\code\\text.txt", "w");
	//����·��
	FILE* pf = fopen("text.txt","r");
	//�ж��Ƿ��д�ɹ�
	if (NULL == pf)
	{
		perror("fopen");
	}


	//д�ļ�
	//for (int i = 0; i < 26; i++)
	//{
	//	fputc('a'+ i,pf);
	//}
	//���ļ�
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


	
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}