#define _CRT_SECURE_NO_WARNINGS 1
//
#include <stdio.h>
//
//int main(void)
//{
//	//打开文件
//	//相对路径
//	//FILE* pf = fopen("F:\\code\\text.txt", "w");
//	//绝对路径
//	FILE* pf = fopen("test.txt","w+");
//	//判断是否读写成功
//	if (NULL == pf)
//	{
//		perror("fopen");
//	}
//
//
//	//写文件
//	//for (int i = 0; i < 26; i++)
//	//{
//	//	fputc('a'+ i,pf);
//	//}
//	//读文件
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
//	//关闭文件
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
//	//写文件
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
//	//写文件-一行一行写
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
//	//把s中的数据写到文件中
//
//	FILE* pf = fopen("test.txt", "r+");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	fprintf(pf, "%s %d %f", s.name, s.age, s.score);
//	
//	rewind(pf);
//
//	//读文件
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
//	//二进制读文件
//	fwrite(&s, sizeof(s), 1, pf);
//
//	rewind(pf);
//
//	//二进制的读文件
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
//	//能够把这个结构体的数据，转换成字符串
//	//"zhangsan 20 95.5"
//	sprintf(buf, "%s %d %f", s.name, s.age, s.score);//以字符串的形式打印
//	printf("%s\n", buf);
//
//	//能否将buf中的字符串，还原成一个结构体数据呢？
//	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
//	printf("%s %d %f\n", tmp.name, tmp.age, tmp.score);//以结构的形式打印
//
//	return 0;
//}

//文件的随机读写
//
//int main()
//{
//	FILE*pf = fopen("test.txt", "r");//文件中存放的是26个小写字母
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
//	fseek(pf, 0, SEEK_END);//文件末尾返回的是EOF即-1
//	ch = fgetc(pf);
//	printf("%d ", ch);//-1
//
//	fseek(pf, -1, SEEK_END);//从文件末尾往前寻找时，偏移量需要使用负数。
//	ch = fgetc(pf);
//	printf("%c ", ch);//z
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE*pf = fopen("test.txt", "r");//文件中存放的是26个小写字母
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
//	printf("文件读取一次后的偏移量:%d\n", ret);
//	   	 
//	fseek(pf, -1, SEEK_END);
//	ch = fgetc(pf);
//	printf("%c\n", ch);//z
//	ret = ftell(pf);
//	printf("文件读取到z后的偏移量:%d\n", ret);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


#include <windows.h>
//VS2017 WIN10环境测试

int main()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//先将代码放在输出缓冲区
	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
	Sleep(10000);
	printf("刷新缓冲区\n");
	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
	Sleep(10000);

	fclose(pf);
	//注：fclose在关闭文件的时候，也会刷新缓冲区
	pf = NULL;
	return 0;
}