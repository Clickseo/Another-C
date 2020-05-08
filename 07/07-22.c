#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1024
int main(void)
{
	int	num;
	char	str[MAX_SIZE];

	printf("임의의 정수 입력: ");
	scanf("%d", &num);

	itoa(num, str, 2);

	printf(" 2진수 변환 문자열: %s \n", str);

	return 0;
}
