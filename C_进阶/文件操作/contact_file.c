#define _CRT_SECURE_NO_WARNINGS 1

#include "contact_file.h"

void InitContact(Con* pc)
{
	assert(pc);
	pc->capaticy = DEFAULT_SZ;
	PI* tmp = (PI*)malloc(sizeof(PI) * pc->capaticy);
	if (tmp != NULL)
	{
		pc->data = tmp;
	}
	else
	{
		perror("InitContact()");
	}
	pc->sz = 0;
}

static int CheckCapaticy(Con* pc)
{
	if (pc->sz == pc->capaticy)
	{
		PI* tmp = (PI*)realloc(pc->data, sizeof(PI) * (pc->capaticy + INC_SZ));
		if (tmp == NULL)
		{
			perror("AddContact()");
			return -1;
		}
		else
		{
			pc->data = tmp;
			pc->capaticy += INC_SZ;
			printf("增容成功\n");
			return 1;
		}
	}
	else
		return 1;
}

void AddContact(Con* pc)
{
	assert(pc);
	if (-1 == CheckCapaticy(pc))
	{
		return;
	}
	else
	{
		//增加人的信息
		printf("请输入名字:>");
		scanf("%s", pc->data[pc->sz].name);
		printf("请输入性别:>");
		scanf("%s", pc->data[pc->sz].sex);
		printf("请输入电话号码:>");
		scanf("%s", pc->data[pc->sz].tele);
		printf("请输入年龄:>");
		scanf("%d", &pc->data[pc->sz].age);//变量要取地址
		printf("请输入住址:>");
		scanf("%s", pc->data[pc->sz].addr);
		pc->sz++;
		printf("成功添加联系人\n");
	}
}

void SearchContact(const Con* pc)
{
	char name[20];
	assert(pc);
	printf("请输入要查找的人的名字:>");
	scanf("%s", name);
	FindByName(pc, name);
}
static int FindByName(const Con* pc, char* name)//限制了函数的使用范围
{
	for (int i = 0; i < pc->sz; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
		{
			printf("\n");
			printf("%-10s\t%-5s\t%-5s\t%-12s\t%-30s\n", "姓名", "性别", "年龄", "电话", "住址");//左对齐
			printf("已找到名字匹配的联系人\n");
			printf("%-10s\t", pc->data[i].name);
			printf("%-5s\t", pc->data[i].sex);
			printf("%-5d\t", pc->data[i].age);
			printf("%-12s\t", pc->data[i].tele);
			printf("%-3s\t", pc->data[i].addr);
			printf("\n");
			return i;
		}
		else
			//printf("通讯录中没有录入这个人的信息\n");
			return -1;
	}
}

void DelContact(Con* pc)
{
	char name[MAX_NAME];
	int end = pc->sz - 1;
	assert(pc);
	assert(pc->sz > 0);
	printf("请输入要删除的联系人的名字:>");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("找不到要删除的联系人\n");
	}
	else
	{
		while (ret < end)
		{
			pc->data[ret] = pc->data[ret + 1];
			ret++;
		}
		pc->sz--;
		printf("已成功删除联系人\n");
	}
}


void ShowContact(const Con* pc)
{
	assert(pc);
	//printf("%20s\t%5s\t%5s\t%12s\t%30s\n","姓名", "性别", "年龄", "电话", "住址");//右对齐
	printf("%-10s\t%-5s\t%-5s\t%-12s\t%-30s\n", "姓名", "性别", "年龄", "电话", "住址");//左对齐

	for (int i = 0; i < pc->sz; i++)
	{
		printf("%-10s\t", pc->data[i].name);
		printf("%-5s\t", pc->data[i].sex);
		printf("%-5d\t", pc->data[i].age);
		printf("%-12s\t", pc->data[i].tele);
		printf("%-3s\t", pc->data[i].addr);
		printf("\n");
	}
}


void ModifyContact(Con* pc)
{
	char name[MAX_NAME];
	printf("请输入要修改的联系人的名字:>");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (-1 == ret)
	{
		printf("要修改的联系人不存在\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", pc->data[ret].name);
		printf("请输入性别:>");
		scanf("%s", pc->data[ret].sex);
		printf("请输入电话号码:>");
		scanf("%s", pc->data[ret].tele);
		printf("请输入年龄:>");
		scanf("%d", &pc->data[ret].age);//变量要取地址
		printf("请输入住址:>");
		scanf("%s", pc->data[ret].addr);
		printf("成功修改联系人\n");
	}
}

int CmpPIByAge(const void*e1, const void*e2)
{
	return ((PI*)e1)->age - ((PI*)e2)->age;
}

void SqrtContact(Con* pc)
{
	qsort(pc->data, pc->sz, sizeof(PI), CmpPIByAge);
	printf("成功排序\n");
}

void DestoryContact(Con* pc)
{
	assert(pc);
	free(pc->data);
	pc->data = NULL;
	pc->capaticy = 0;
	pc->sz = 0;
}

void SaveContact(Con* pc)
{
	//打开文件
	FILE* pfw = fopen("data.txt", "wb");
	if (pfw == NULL)
	{
		perror("SaveContact::fopen");
	}
	//写文件
	for (int i = 0; i < pc->sz; i++)
	{
		fwrite(pc->data + i, sizeof(PI), 1, pfw);
	}
	//关闭文件
	fclose(pfw);
}

void LoadContact(Con* pc)
{
	//打开文件
	FILE* pfr = fopen("data.txt", "rb");
	if (pfr == NULL)
	{
		perror("LoadContact::fopen");
		return;
	}
	//读文件

	PI tmp = { 0 };
	while (fread(&tmp, sizeof(PI), 1, pfr) == 1)
	{
		//考虑增加容量
		CheckCapaticy(pc);
		pc->data[pc->sz] = tmp;
		pc->sz++;
	}
	//关闭文件
	fclose(pfr);
}
