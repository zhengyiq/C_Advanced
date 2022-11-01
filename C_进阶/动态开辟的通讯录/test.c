#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void menu()
{
	printf("1.add\n");
	printf("2.del\n");
	printf("3.search\n");
	printf("4.modify\n");
	printf("5.show\n");
	printf("6.sort\n");
	printf("0.EXIT\n");


}

enum menu
{
	add = 1,
	del,
	search,
	modify,
	show,
	sort,
	EXIT = 0
};
int main()
{
	int input = 0;
	char name[MAX_NAME];
	//创建通讯录
	struct Contact con;
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			AddContact(&con);
			break;
		case del:
			DelContact(&con);
			break;
		case search:
			SearchContact(&con);
			break;
		case modify:
			ModifyContact(&con);
			break;
		case show:
			ShowContact(&con);
			break;
		case sort:
			SqrtContact(&con);
			break;
		case EXIT:
			DestoryContact(&con);
			printf("退出通讯录\n");
			exit(-1);
			break;
		default:
			break;
		}
	} while (input);
}