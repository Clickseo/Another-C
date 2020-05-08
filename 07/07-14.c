#include <stdio.h>
#define MAX_SIZE 1024
int	my_strcmp(const char *, const char *);
int main(void)
{
	int		res;
	char	str1[MAX_SIZE];
	char	str2[MAX_SIZE];

	printf("문자열 str1 : ");	gets(str1);
	printf("문자열 str2 : ");	gets(str2);

	res = my_strcmp(str1, str2);

	printf("res : %d \n", res);

	return 0;
}

int	my_strcmp(const char *pStr1, const char *pStr2)
{
	// 주어진 두 문자열이 똑같은 동안 비교한다.
	for(; *pStr1 == *pStr2; pStr1++, pStr2++)
	{
		// 주어진 두 문자열이 널 문자까지 정확히 일치하는 경우
		if(*pStr1 == '\0')		// if(*pStr1)
			return 0;
	}

	// 처음으로 다른 문자를 만나면 비교를 통하여 반환값 결정
	if(*pStr1 > *pStr2)
		return 1;

	return -1;
}
