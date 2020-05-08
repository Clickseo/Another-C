#include <stdio.h>
#define MAX_SIZE 1024
size_t	 my_strlen(const char *);
int main(void)
{
	int	count;
	char	str[MAX_SIZE] = "Hello World!!!!";

	count = my_strlen(str);

	printf("문자열의 길이 : %d \n", count);	// 15

	return 0;
}

size_t	my_strlen(const char *pStr)
{
	const char *p = pStr;

	// 에러 처리 : 널 포인터 값을 입력 받은 경우...
	if(pStr == NULL)
		return 0;

	while(*p != '\0')		// while(*p)
		p++;

	return p - pStr;
}
