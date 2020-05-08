#include <stdio.h>
int main(void)
{
	char	*p = "Hello World!!!";

	// 문자열의 끝을 의미하는 널 문자가 아닐 동안...
	while(*p != '\0')
		printf("%c", *p++);
	printf("\n");

	return 0;
}
