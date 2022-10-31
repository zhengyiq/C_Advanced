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
		printf("ͨѶ¼�����޷��������\n");
		return;
	}
	
	//�����˵���Ϣ
	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰����:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("����������:>");
	scanf("%d", &pc->data[pc->sz].age);//����Ҫȡ��ַ
	printf("������סַ:>");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("�ɹ������ϵ��\n");
}

int SearchContact(const Con* pc)
{
	char name[20];
	assert(pc);
	printf("������Ҫ���ҵ��˵�����:>");
	scanf("%s", name);
	for (int i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[pc->sz].name, name))
		{
			return i;
		}
		else
			printf("ͨѶ¼��û��¼������˵���Ϣ");
			return -1;
	}
}

void DelContact(Con* pc)
{
	char name[MAX_NAME];
	assert(pc);		
	assert(pc->sz > 0);
	printf("������Ҫɾ�����˵�����:>");
	scanf("%s", name);
	

}


void ShowContact(const Con* pc)
{
	assert(pc);
	//printf("%20s\t%5s\t%5s\t%12s\t%30s\n","����", "�Ա�", "����", "�绰", "סַ");//�Ҷ���
	printf("%-10s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "�Ա�", "����", "�绰", "סַ");//�����

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