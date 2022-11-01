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
//表示一个人的信息
typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	int age;
	char addr[MAX_ADDR]; 
}PI;

//通讯录
//动态版本
typedef struct Contact
{
	PI *data;//指向存放数据的空间
	int sz;
	int capaticy;//容量
}Con;


//通讯录初始化
void InitContact(Con* pc);

//通讯录添加数据
void AddContact(Con* pc);

//通讯录查找数据
void SearchContact(const Con* pc);

//通讯录删除数据
void DelContact(Con* pc);

//通讯录遍历
void ShowContact(Con* pc);

//通讯录修改
void ModifyContact(Con* pc);

//通讯录排序
void SqrtContact(Con* pc);

//通讯录的销毁
void DestoryContact(Con* pc);

