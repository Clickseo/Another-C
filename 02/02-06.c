#include <stdio.h>
int main(void)
{
	char	ch = 'A';

	// 변수 ch가 영문 대문자인 경우 소문자로 변경하여 출력
	if('A' <= ch && ch <= 'Z')
		printf("영문 소문자 : %c \n", ch + 32);

	// 변수 ch가 영문 소문자인 경우 대문자로 변경하여 출력
	else if('a' <= ch && ch <= 'z')
		printf("영문 대문자 : %c \n", ch - 32);
	else
		printf("그 외 문 자 : %c \n", ch);

	return 0;
}
