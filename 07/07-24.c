#include <stdio.h>
#include <stdlib.h>
int	my_atoi(const char *);
int main(void)
{
	int	res;
	char	str[12];

	printf("문자열 입력 : ");
	gets(str);

	res = my_atoi(str);

	printf("%s의 변환된 결과 : %d \n", str, res);

	return 0;
}

int	my_atoi(const char *pStr)
{
	int	res = 0;

	while(*pStr != '\0')
		res = (res * 10) + (*pStr++ - 48);

	return res;
}
