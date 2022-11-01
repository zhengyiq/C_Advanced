#pragma once

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3
#define INC_SZ 2
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
//��̬�汾
typedef struct Contact
{
	PI *data;//ָ�������ݵĿռ�
	int sz;
	int capaticy;//����
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

//ͨѶ¼�޸�
void ModifyContact(Con* pc);

//ͨѶ¼����
void SqrtContact(Con* pc);

//ͨѶ¼������
void DestoryContact(Con* pc);

