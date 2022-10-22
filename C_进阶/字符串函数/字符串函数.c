#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>
int main()
{
	char buffer1[] = "DWgaOtP12df0";
	char buffer2[] = "DWGAOTP12DF0";
	int n;
	n = memcmp(buffer1, buffer2, sizeof(buffer1));
	if (n > 0) 
		printf("'%s' is greater than '%s'.\n", buffer1, buffer2);
	else if 
		(n < 0) printf("'%s' is less than '%s'.\n", buffer1, buffer2);
	else 
		printf("'%s' is the same as '%s'.\n", buffer1, buffer2);
	return 0;
}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "almost every programmer should know memset!";
//	memset(str, '-', 6);
//	puts(str);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <assert.h>

//void* my_memmove(void* dest, const void* sou, size_t num)
//{
//	assert(dest && sou);
//	void* fir = dest;
//	if (dest<sou)
//	{
//		while (num-- != 0)
//		{
//			*((char*)dest)++ = *((char*)sou)++;
//		}
//		return fir;
//	}
//	else
//	{
//		while (num-- != 0)
//		{
//			*((char*)dest + num-1) = *((char*)sou + num-1);
//		}
//		return fir;
//	}
//}

//int main(void)
//{
//	int arr1[9] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	memmove(arr1 + 2, arr1, 20);
//	//my_memmove(arr1 + 2, arr1, 20);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	//1 2 1 2 3 4 5 8 9
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//void* my_memcpy(void* dest, const void* sou, size_t num)
//{
//	assert(dest && sou);
//	void* fir = dest;
//	while (num-- != 0)
//	{
//		*((char*)dest)++ = *((char*)sou)++;
//	}
//	return fir;
//}
//
//int main(void)
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[10] = { 0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	//my_memcpy(arr2, arr1, 36);
//	memcpy(arr2, arr1, 36);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ",arr2[i]);
//	}
//	//1 2 3 4 5 6 7 8 9
//	return 0;
//}

//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//	int i = 0;
//	char str[] = "Test String.\n";
//	char c;
//	while (str[i])
//	{
//		c = str[i];
//		if (isupper(c))
//			c = tolower(c);
//		putchar(c);
//		i++;
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>//必须包含的头文件
//int main()
//{
//	FILE * pFile;
//	pFile = fopen("unexist.ent", "r");
//	if (pFile == NULL)
//		printf("Error opening file unexist.ent: %s\n", strerror(errno));
//	//errno: Last error number
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char *p = "abcdefgasd@163.com";
//	const char* sep = ".@";
//	char arr[30];
//	char *str = NULL;
//	strcpy(arr, p);//将数据拷贝一份，处理arr数组的内容
//	for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep))
//	{
//		printf("%s\n", str);
//	}
//}

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>

//char* my_strstr(const char *dest, const char * sou)
//{
//	assert(dest && sou);
//	const char* det = dest;
//	const char* so = sou;
//	const char*p = dest;
//	while (*p)
//	{
//		while ((*det == *so)&&(*det != 0)&&(*so != 0))
//		{
//			det++;
//			so++;
//		}
//		if (*so == 0)
//		{
//			return p;
//		}
//		so = sou;
//		p++;
//		det = p;
//	}
//}

//
//int main()
//{
//	char str[] = "This is a simple string";
//	char * pch;
//	//pch = strstr(str, "simple");
//	pch = my_strstr(str, "simple");
//	puts(pch);//simple string
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[20] = "To be ";
//	char arr2[20] = "or not to be";
//	int ret = strncmp(arr1, arr2, 13);
//	if (ret < 0)
//	{
//		printf("<\n");
//	}
//	else if (ret == 0)
//	{
//		printf("==\n");
//	}
//	else
//	{
//		printf(">\n");
//	}
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	char arr1[] = "aaaaaaaaaa";
//	char arr2[] = "zhe";
//	strncpy(arr1, arr2, 4);
//	printf("%s",arr1);//zhe
//	printf("\n");
//	printf("%d\n", arr1[3]);//0
//	printf("%s\n", &arr1[4]);//aaaaaa
//	return 0;
//}




//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//int my_strcmp(const char* arr1, const char* arr2)
//{
//	assert(arr1 && arr2);
//	while (*arr1 == *arr2)
//	{
//		if (*arr1 == '\0')
//		{
//			return 0;
//		}
//		arr1++;
//		arr2++;
//	};
//	//if (*arr1 > *arr2)
//	//{
//	//	return 1;
//	//}
//	//else
//	//{
//	//	return -1;
//	//}
//	return (*arr1 - *arr2);
//}
//
//int main(void)
//{
//	char arr1[] = "zhengyi";
//	char arr2[] = "zheng";
//	int ret = strcmp(arr1, arr2);
//	//int ret = my_strcmp(arr1, arr2);
//	if (ret < 0)
//	{
//		printf("<\n");
//	}
//	else if (ret == 0)
//	{
//		printf("==\n");
//	}
//	else
//	{
//		printf(">\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//char* my_strcat(char* dest, const char* sou)
//{
//	assert(dest && sou);
//	char* fir = dest;
//	while (*dest != 0)
//	{
//		dest++;
//	}
//	while (*dest++ = *sou++)
//	{
//		;
//	}
//	*dest = *sou;
//	return fir;
//}
//
//int main(void)
//{
//	char arr2[] = "world";
//	char arr1[20] = "hello ";
//	strcat(arr1, arr2);
//	//my_strcat(arr1, arr2);
//	printf("%s",arr1);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//char* my_strcpy(char* dest, const char* sou)
//{
//	char* fir = dest;
//	assert(dest && sou);
//	while (*dest++ = *sou++)
//		;
//	*dest = *sou;
//	return fir;
//}
//
//int main(void)
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 }; 
//	strcpy(arr2, arr1);
//	//my_strcpy(arr2,arr1);
//	printf("%s", my_strcpy(arr2, arr1));
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//size_t my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while (*str++ != 0)
//	{
//		count++;
//	}
//	return count;
//}	
//
//int main(void)
//{
//	int ret = 0;
//	char arr[] = "ab cd fe";
//	//ret = strlen(arr);
//	ret = my_strlen(arr);
//	printf("%d ", ret);
//	return 0;
//}