#include <stdio.h>
#define MAX_SIZE 1024
char	*my_strcpy(char *, const char *);
int main(void)
{
	char	str1[MAX_SIZE] = "Hi~ Clickseo";
	char	str2[MAX_SIZE];

	my_strcpy(str2, str1);

	printf("str1 : %s \n", str1);
	printf("str2 : %s \n", str2);

	return 0;
}

char	*my_strcpy(char *pStr2, const char *pStr1)
{
	int	i;

	// 원본 문자열 str1을 대상 문자열 str2에 복사
	for(i=0; pStr1[i] != '\0'; i++)
		pStr2[i] = pStr1[i];

	// 문자열의 맨 마지막에 널 문자 추가
	pStr2[i] = '\0';

	return pStr2;
}
