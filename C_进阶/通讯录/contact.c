#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void InitContact(Con* pc)
{
	assert(pc);
	pc->sz = 0;
	memset(pc->data, 0, MAX * sizeof(PI));
}

void AddContact(Con* pc)
{
	assert(pc);

	if(pc->sz == MAX)
	{
		printf("通讯录已满无法添加数据\n");
		return;
	}
	
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

int SearchContact(const Con* pc)
{
	char name[20];
	assert(pc);
	printf("请输入要查找的人的名字:>");
	scanf("%s", name);
	for (int i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[pc->sz].name, name))
		{
			return i;
		}
		else
			printf("通讯录中没有录入这个人的信息");
			return -1;
	}
}

void DelContact(Con* pc)
{
	char name[MAX_NAME];
	assert(pc);		
	assert(pc->sz > 0);
	printf("请输入要删除的人的名字:>");
	scanf("%s", name);
	

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