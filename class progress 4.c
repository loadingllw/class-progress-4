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
//	//strcpy(arr1,arr2);   //Ŀ��ռ�����㹻��
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

//strcat ���� �ַ�����׷��    

//char* my_strcat(char*dest, const char*str)
//{
//	assert(dest && str);
//	//1.�ҵ�Ŀ��ռ��'\0'
//	char*ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	//2.׷��
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
//	char arr1[30] = "hello";//arr1�ռ�����㹻��Ҫ���޸�
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
//	//�ַ����ıȽϲ��ǱȽϳ���
//	//�ַ����ıȽ��ǱȽ϶�Ӧ�ַ���ascii��ֵ
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
//	char*ret=strstr(arr1, arr2);//��arr1�в���arr2��һ�γ��ֵ�λ��
//	char*ret = my_strstr(arr1, arr2);
//	if (ret != NULL)
//		printf("%s\n", ret);
//	else
//		printf("�Ҳ������ַ���\n");
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

