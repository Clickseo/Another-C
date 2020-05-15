#include <stdio.h>

// 함수 원형 선언 : DIV 함수 -- 몫과 나머지 계산
void	DIV(int, int, int *, int *);
int main(void)
{
	int	a = 10, b = 3;
	int	quot, rem;

	// 함수 호출 : DIV 함수 -- 몫과 나머지 계산
	DIV(a, b, &quot, &rem);

	printf("몫 : %d, 나머지 : %d \n", quot, rem);	// 3, 1

	return 0;
}

// 함수 정의 : DIV 함수 -- 몫과 나머지 계산
void	DIV(int a, int b, int *pQuot, int *pRem)	// rQuot = &quot, pRem = &rem
{
	*pQuot = a / b;		// quot = a / b;
	*pRem = a % b;		// rem = a % b;

	return;
}
