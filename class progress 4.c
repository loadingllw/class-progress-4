#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//int my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//			str++;
//			count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	char arr1[] = "#############";
//	char arr2[] = "hello world";
//	//strcpy(arr1,arr2);   //目标空间必须足够大
//	int ret=my_strlen(arr2);
//	printf("%d\n", ret);
//	return 0;
//}

//void my_strcpy(char* arr1, char*arr2)
//{
//	assert(arr1&&arr2);
//	while (*arr2!='\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = *arr2;
//}
//int main()
//{
//	char arr1[30] = "###############";
//	char arr2[] = "hello world";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//}

//strcat —— 字符串的追加    

//char* my_strcat(char*dest, const char*str)
//{
//	assert(dest && str);
//	//1.找到目标空间的'\0'
//	char*ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	//2.追加
//	while (*dest++ = *str++)
//	{
//		;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	char arr1[30] = "hello";//arr1空间必须足够大，要可修改
//	char arr2[] = " world";
//	//strcat(arr1, arr2);
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



//int  my_strcmp(const char* s1,const char*s2)
//{
//	assert(*s1&&*s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//
//
//int main()
//{
//	//int ret=strcmp("abq", "abcdef");
//	int ret =my_strcmp("abq", "abcdef");
//	//字符串的比较不是比较长度
//	//字符串的比较是比较对应字符的ascii码值
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	int ret=strncmp("abc","abcdef",3);
//	printf("%d\n", ret);
//	return 0;
//}



//char* my_strstr(const char*s1,const char*s2)
//{
//
//}
//
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "def";
//	char*ret=strstr(arr1, arr2);//在arr1中查找arr2第一次出现的位置
//	char*ret = my_strstr(arr1, arr2);
//	if (ret != NULL)
//		printf("%s\n", ret);
//	else
//		printf("找不到子字符串\n");
//	return 0;
//}



//int my_strcmp(const char*arr1, const char*arr2)
//{
//	while (*arr1==*arr2)
//	{
//		if (*arr1 == *arr2)
//			return 0;
//		arr1++;
//		arr2++;
//	}
//}
//
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "world";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}

