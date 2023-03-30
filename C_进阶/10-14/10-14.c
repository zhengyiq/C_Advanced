#define _CRT_SECURE_NO_WARNINGS 1


//my_atoi(NULL)//�쳣
//my_atoi("")//�쳣
//my_atoi("    +123")//����
//my_atoi("-123")//����
//my_atoi("123abc")//�쳣
//my_atoi("1111111111111111111111111")//�쳣
//my_atoi("-1111111111111111111111111")//�쳣

#include <limits.h>
#include <ctype.h>

enum Status
{
	VALID,
	INVALID
};

enum Status status = INVALID;

int my_atoi(const char* str)
{
	if (str == NULL)
	{
		return 0;
	}
	if (*str == '\0')
	{
		return 0;
	}
	//�հ��ַ�
	while (isspace(*str))
	{
		str++;
	}
	int flag = 1;//����Ӧ�øĳ�1�������0�Ļ��������磺12345����ת����0�ˡ�
	if (*str == '+')
	{
		flag = 1;
		str++;
	}
	else if (*str == '-')
	{
		flag = -1;
		str++;
	}
	//���������ַ�
	//-123
	long long ret = 0;
	while (isdigit(*str))
	{
		ret = ret * 10 + flag*(*str - '0');
		if (ret<INT_MIN || ret > INT_MAX)
		{
			return 0;
		}
		str++;
	}
	if (*str == '\0')
	{
		status = VALID;
		return (int)ret;
	}
	else
	{
		return (int)ret;
	}
}

int main()
{
	int ret = my_atoi("    -12322222222222222222222222222222222");
	if (status == VALID)
		printf("�Ϸ���ת����%d\n", ret);//-123
	else
		printf("�Ƿ�������ת��:%d\n", ret);

	return 0;
}