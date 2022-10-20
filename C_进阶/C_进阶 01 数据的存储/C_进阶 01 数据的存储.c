//#define _crt_secure_no_warnings 1

//#include <stdio.h>
//#include <windows.h>
//unsigned char i = 0;
//int main(void)
//{
//	for (i = 255; i <= 255; i++)
//	{
//		printf("hehe\n");
//		Sleep(1000);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//		printf("%d\n", a[i]);
//		Sleep(100);
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//#include <stdio.h>
//#include <windows.h>
//int main(void)
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//
//	return 0;
//}



//#include <stdio.h>
//
//int main(void)
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}


//#include <stdio.h>
//
//int main(void)
//{
//	char a = -128 - 1;
//	printf("%u\n", a);
//	printf("%d\n", a);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}


//#include <stdio.h>
//
//int main(void)
//{
//	int a = 1;
//	char* p = &a;
//	printf("%p\n", p);
//	printf("%p\n", p + 1);
//	printf("%d\n", *p);
//	printf("%d\n", *(p + 1));
//	return 0;
//}

//#include <stdio.h>
//int check_sys()
//{
//	int i = 1;
//	return (*(char *)&i);
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int a = -1;
//	printf("%u\n", a);
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int a = 20;
//	//00000000 00000000 00000000 00010100
//	//00000000 00000000 00000000 00010100
//	//00000000 00000000 00000000 00010100
//	//0x 00 00 00 14
//
//	int b = -10;
//	//10000000 00000000 00000000 00001010 - 原码
//	//11111111 11111111 11111111 11110101 - 反码
//	//11111111 11111111 11111111 11110110 - 补码
//	//0x ff ff ff f5
//
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
////第一个void 表示函数不会返回值
////第二个void 表示函数不需要传入任何参数
//void test(void)
//{
//	printf("hhh");
//}
//int main(void)
//{
//	test();
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>

//int main(void)
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	printf("%p\n", &i);     //0056F730
//	printf("%p\n", &arr[0]);//0056F734
//	//for ( i = 0; i <= 12; i++)
//	//{
//	//	arr[i] = 0;
//	//	printf("hehe\n");
//	//}
//	return 0;
//}