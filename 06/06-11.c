
#include <stdio.h>
#define MAX_SIZE 1024

void	OUTPUT_rev(char*);

int main(void)
{
	char	str[MAX_SIZE];

	printf("문자열 입력: ");	gets_s(str, sizeof(str));
	printf("역순 출력: ");	OUTPUT_rev(str);

	return 0;
}

void	OUTPUT_rev(char* pStr)
{
	char* p = pStr;

	// 널 문자의 위치(주소) 탐색
	while (*p != '\0')		// while(*p)
		p++;

	// 널 문자를 제외한 마지막 문자부터 역순 출력
	for (p--; p >= pStr; p--)
		putchar(*p);
	putchar('\n');

	return;
}
