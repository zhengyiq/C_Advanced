#define _CRT_SECURE_NO_WARNINGS 1
//
#include <stdio.h>
//
//int main(void)
//{
//	//���ļ�
//	//���·��
//	//FILE* pf = fopen("F:\\code\\text.txt", "w");
//	//����·��
//	FILE* pf = fopen("test.txt","w+");
//	//�ж��Ƿ��д�ɹ�
//	if (NULL == pf)
//	{
//		perror("fopen");
//	}
//
//
//	//д�ļ�
//	//for (int i = 0; i < 26; i++)
//	//{
//	//	fputc('a'+ i,pf);
//	//}
//	//���ļ�
//	//for (int i = 0; i < 26; i++)
//	//{
//	//	int ch = fgetc(pf);
//	//	printf("%c ", ch);
//	//}
//	int ch = 0;
//
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//
//
//	
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r+");
//	if (pf == NULL)
//	{
//		perror("fopen");
//	}
//
//	//д�ļ�
//	for (int  i = 0; i < 26; i++)
//	{
//		fputc( 'a' + i, pf);
//	}
//
//	rewind(pf);
//
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c\n", ch);
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r+");
//	if (pf == NULL)
//	{
//		perror("fopen");
//	}
//
//	//д�ļ�-һ��һ��д
//	fputs("hello\n", pf);
//	fputs("world   !!       !!!!\n", pf);
//
//	rewind(pf);
//
//	char arr[20] = { 0 };
//	while ((fgets(arr, 2, pf) != NULL))
//	{
//		printf("%s", arr);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = { "zhangsan", 20, 95.5f };
//	struct S s2 = { 0 };
//	//��s�е�����д���ļ���
//
//	FILE* pf = fopen("test.txt", "r+");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	fprintf(pf, "%s %d %f", s.name, s.age, s.score);
//	
//	rewind(pf);
//
//	//���ļ�
//	fscanf(pf, "%s %d %f", s2.name, &(s2.age), &(s2.score));
//	
//	printf("%s %d %f\n", s2.name, s2.age, s2.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//int ch = fgetc(stdin);
//	//fputc(ch, stdout);
//
//	//char arr[10] = { 0 };
//	//fgets(arr, 10, stdin);
//	//fputs(arr,stdout);
//
//	//int a = 0;
//	//fscanf(stdin, "%d", &a);
//	//fprintf(stdout, "%d", a);
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = { "zhangsan", 20, 95.5f };
//	struct S s2 = { 0 };
//
//	FILE* pf = fopen("test.txt", "rb+");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//�����ƶ��ļ�
//	fwrite(&s, sizeof(s), 1, pf);
//
//	rewind(pf);
//
//	//�����ƵĶ��ļ�
//	fread(&s2, sizeof(s2), 1, pf);
//
//	printf("%s %d %f\n", s2.name, s2.age, s2.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	char name[10];
//	int age;
//	float score;
//};
//
//int main()
//{
//	char buf[100] = {0};
//	struct S tmp = { 0 };
//
//	struct S s = { "zhangsan", 20, 95.5f };
//	//�ܹ�������ṹ������ݣ�ת�����ַ���
//	//"zhangsan 20 95.5"
//	sprintf(buf, "%s %d %f", s.name, s.age, s.score);//���ַ�������ʽ��ӡ
//	printf("%s\n", buf);
//
//	//�ܷ�buf�е��ַ�������ԭ��һ���ṹ�������أ�
//	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
//	printf("%s %d %f\n", tmp.name, tmp.age, tmp.score);//�Խṹ����ʽ��ӡ
//
//	return 0;
//}

//�ļ��������д
//
//int main()
//{
//	FILE*pf = fopen("test.txt", "r");//�ļ��д�ŵ���26��Сд��ĸ
//	if (pf == NULL)
//	{
//		perror("fopen()");
//		return 1;
//	}
//	int ch = 0;
//	ch = fgetc(pf);
//	printf("%c ", ch);//a
//
//	fseek(pf, 0, SEEK_SET);
//
//	ch = fgetc(pf);
//	printf("%c ", ch);//a
//
//	fseek(pf, 2, SEEK_SET);
//	ch = fgetc(pf);
//	printf("%c ", ch);//c
//
//	fseek(pf, 0, SEEK_END);//�ļ�ĩβ���ص���EOF��-1
//	ch = fgetc(pf);
//	printf("%d ", ch);//-1
//
//	fseek(pf, -1, SEEK_END);//���ļ�ĩβ��ǰѰ��ʱ��ƫ������Ҫʹ�ø�����
//	ch = fgetc(pf);
//	printf("%c ", ch);//z
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE*pf = fopen("test.txt", "r");//�ļ��д�ŵ���26��Сд��ĸ
//	if (pf == NULL)
//	{
//		perror("fopen()");
//		return 1;
//	}
//	int ch = 0;
//	ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	int ret = ftell(pf);
//	printf("�ļ���ȡһ�κ��ƫ����:%d\n", ret);
//	   	 
//	fseek(pf, -1, SEEK_END);
//	ch = fgetc(pf);
//	printf("%c\n", ch);//z
//	ret = ftell(pf);
//	printf("�ļ���ȡ��z���ƫ����:%d\n", ret);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


#include <windows.h>
//VS2017 WIN10��������

int main()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//�Ƚ�����������������
	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
	Sleep(10000);
	printf("ˢ�»�����\n");
	fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
	Sleep(10000);

	fclose(pf);
	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
	pf = NULL;
	return 0;
}