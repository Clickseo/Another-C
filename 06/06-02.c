#include <stdio.h>
int main(void)
{
	char	str[1024];

	printf("문자열 입력 : ");
	gets_s(str, sizeof(str));	// gets(str);

	puts("문자열 출력 : ");
	puts(str);

	return 0;
}
