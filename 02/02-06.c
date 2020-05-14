#include <stdio.h>
int main(void)
{
	char	ch = 'A';
	
	if('A' <= ch && ch <= 'Z')				// 영문 대문자인 경우 --> 소문자로 변경
		printf("영문 소문자 : %c \n", ch + 32);
	else if('a' <= ch && ch <= 'z')				// 영문 소문자인 경우 --> 대문자로 변경
		printf("영문 대문자 : %c \n", ch - 32);
	else
		printf("그 외 문 자 : %c \n", ch);

	return 0;
}
