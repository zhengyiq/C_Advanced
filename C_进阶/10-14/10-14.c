#define _CRT_SECURE_NO_WARNINGS 1


//my_atoi(NULL)//异常
//my_atoi("")//异常
//my_atoi("    +123")//正常
//my_atoi("-123")//正常
//my_atoi("123abc")//异常
//my_atoi("1111111111111111111111111")//异常
//my_atoi("-1111111111111111111111111")//异常

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
	//空白字符
	while (isspace(*str))
	{
		str++;
	}
	int flag = 1;//这里应该改成1，如果是0的话，正数如：12345，就转换成0了。
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
	//处理数字字符
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
		printf("合法的转换：%d\n", ret);//-123
	else
		printf("非法的数据转换:%d\n", ret);

	return 0;
}