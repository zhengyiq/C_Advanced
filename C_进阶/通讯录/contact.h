#pragma once

#include <stdio.h>
#include <string.h>
#include <assert.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

//��ʾһ���˵���Ϣ
typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	int age;
	char addr[MAX_ADDR];
}PI;

//ͨѶ¼
typedef struct Contact
{
	PI data[MAX];
	int sz;
}Con;

//ͨѶ¼��ʼ��
void InitContact(Con* pc);

//ͨѶ¼�������
void AddContact(Con* pc);

//ͨѶ¼��������
void SearchContact(const Con* pc);

//ͨѶ¼ɾ������
void DelContact(Con* pc);

//ͨѶ¼����
void ShowContact(Con* pc);