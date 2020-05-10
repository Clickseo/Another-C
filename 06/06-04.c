#include <stdio.h>
int main(void)
{
	char	str[1024];

	printf("문자열 입력 : ");
	fgets(str, sizeof(str), stdin);

	fputs("문자열 출력 : ", stdout);
	fputs(str, stdout);

	return 0;
}
