#include <stdio.h>
#define MAX_SIZE 1024
int main(void)
{
	char	str[MAX_SIZE] = "Hello World!!!!";

	int	count = 0;
	char	*p;

	// 포인터형 변수 p에 배열의 가장 첫 번째 원소의 시작 주소를 저장
	p = str;			// p = &str[0];

	// 문자열의 맨 끝을 의미하는 널 문자가 아니면...
	// 문자 개수를 하나씩 증가 시킨다.
	while(*p != '\0')		// while(*p)
	{
		count++;
		p++;
	}

	printf("문자열의 길이 : %d \n", count);	// 15

	return 0;
}
