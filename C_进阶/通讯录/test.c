#define _CRT_SECURE_NO_WARNINGS 1

#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void menu()
{
	printf("1.add\n");
	printf("2.del\n");
	printf("3.search\n");
	printf("4.modefy\n");
	printf("5.show\n");
	printf("6.sort\n");
	printf("0.exit\n");
	printf("\n");

}

int main()
{
	int input = 0;
	char name[MAX_NAME];
	//����ͨѶ¼
	struct Contact con;
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			DelContact(&con);
			break;
		case 3:
			SearchContact(&con);
			break;
		case 4:
			break;
		case 5:
			ShowContact(&con);
			break;
		case 6:
			break;
		case 0:
			printf("�˳�ͨѶ¼\n");
			exit(-1);
			break;
		default:
			break;
		}
	} while (input);
}