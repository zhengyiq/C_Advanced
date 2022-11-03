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
			printf("���ݳɹ�\n");
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
}

void SearchContact(const Con* pc)
{
	char name[20];
	assert(pc);
	printf("������Ҫ���ҵ��˵�����:>");
	scanf("%s", name);
	FindByName(pc, name);
}
static int FindByName(const Con* pc, char* name)//�����˺�����ʹ�÷�Χ
{
	for (int i = 0; i < pc->sz; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
		{
			printf("\n");
			printf("%-10s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "�Ա�", "����", "�绰", "סַ");//�����
			printf("���ҵ�����ƥ�����ϵ��\n");
			printf("%-10s\t", pc->data[i].name);
			printf("%-5s\t", pc->data[i].sex);
			printf("%-5d\t", pc->data[i].age);
			printf("%-12s\t", pc->data[i].tele);
			printf("%-3s\t", pc->data[i].addr);
			printf("\n");
			return i;
		}
		else
			//printf("ͨѶ¼��û��¼������˵���Ϣ\n");
			return -1;
	}
}

void DelContact(Con* pc)
{
	char name[MAX_NAME];
	int end = pc->sz - 1;
	assert(pc);
	assert(pc->sz > 0);
	printf("������Ҫɾ������ϵ�˵�����:>");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("�Ҳ���Ҫɾ������ϵ��\n");
	}
	else
	{
		while (ret < end)
		{
			pc->data[ret] = pc->data[ret + 1];
			ret++;
		}
		pc->sz--;
		printf("�ѳɹ�ɾ����ϵ��\n");
	}
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


void ModifyContact(Con* pc)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸ĵ���ϵ�˵�����:>");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (-1 == ret)
	{
		printf("Ҫ�޸ĵ���ϵ�˲�����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", pc->data[ret].name);
		printf("�������Ա�:>");
		scanf("%s", pc->data[ret].sex);
		printf("������绰����:>");
		scanf("%s", pc->data[ret].tele);
		printf("����������:>");
		scanf("%d", &pc->data[ret].age);//����Ҫȡ��ַ
		printf("������סַ:>");
		scanf("%s", pc->data[ret].addr);
		printf("�ɹ��޸���ϵ��\n");
	}
}

int CmpPIByAge(const void*e1, const void*e2)
{
	return ((PI*)e1)->age - ((PI*)e2)->age;
}

void SqrtContact(Con* pc)
{
	qsort(pc->data, pc->sz, sizeof(PI), CmpPIByAge);
	printf("�ɹ�����\n");
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
	//���ļ�
	FILE* pfw = fopen("data.txt", "wb");
	if (pfw == NULL)
	{
		perror("SaveContact::fopen");
	}
	//д�ļ�
	for (int i = 0; i < pc->sz; i++)
	{
		fwrite(pc->data + i, sizeof(PI), 1, pfw);
	}
	//�ر��ļ�
	fclose(pfw);
}

void LoadContact(Con* pc)
{
	//���ļ�
	FILE* pfr = fopen("data.txt", "rb");
	if (pfr == NULL)
	{
		perror("LoadContact::fopen");
		return;
	}
	//���ļ�

	PI tmp = { 0 };
	while (fread(&tmp, sizeof(PI), 1, pfr) == 1)
	{
		//������������
		CheckCapaticy(pc);
		pc->data[pc->sz] = tmp;
		pc->sz++;
	}
	//�ر��ļ�
	fclose(pfr);
}
