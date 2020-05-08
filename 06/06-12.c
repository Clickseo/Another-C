#include <stdio.h>
#define MAX_SIZE 1024

// 영문 대소문자 변경 함수 원형
void  String_Change(char *to_string, const char *from_string);

int main(void)
{
	char	str[MAX_SIZE], res[MAX_SIZE];

	printf("문자열 입력 : ");
	gets(str);

	String_Change(res,  str);

	printf("변환된 문자열 : %s \n", res);

	return 0;
}

// 소문자를 대문자로, 대문자를 소문자로 변경하는 함수
void  String_Change(char  *to_str,  const  char  *from_str)
{
	// 문자열의 끝이 아닌 널 문자가 아닐 동안...
	while(*from_str)
	{
		// 영문 소문자인 경우 : 대문자로 변경
		if (('a' <= *from_str) && (*from_str <= 'z'))
			*to_str = *from_str - 32;
		// 영문 대문자인 경우 : 소문자로 변경
		else if (('A' <= *from_str) && (*from_str <= 'Z'))
			*to_str = *from_str + 32;
		// 나머지 문자는 그대로 출력
		else
			*to_str = *from_str;

		from_str++;
		to_str++;
	}

	// 문자열의 끝을 의미하는 널 문자 추가
	*to_str = '\0';

	return;
}
