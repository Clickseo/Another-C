#include <stdio.h>

// 함수 원형 선언 : OUTPUT 함수
void OUTPUT(int num);		// void OUTPUT(int);

int main(void)
{
	// 함수 호출 : OUTPUT 함수
	OUTPUT(5);

	return 0;
}

// 함수 정의 : OUTPUT 함수
void OUTPUT(int  num)
{
	int	i;

	for(i=1; i<=num; i++)
		printf("Hello World!!! \n");

	return;
}
