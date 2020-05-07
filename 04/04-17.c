#include <stdio.h>
int	DIV(int, int, int *);
int main(void)
{
	int	a = 10, b = 3;
	int	quot, rem;

	// 몫과 나머지를 구하기 위한 함수 호출
	quot = DIV(a, b, &rem);

	printf("몫 : %d, 나머지 : %d \n", quot, rem);	// 3, 1

	return 0;
}

// 몫과 나머지를 동시에 구하는 함수
int	DIV(int a, int b, int *pRem)
{
	int	quot;

	quot = a / b;
	// 계산된 나머지를 호출 함수(main)의 일반 변수 rem에 직접 저장
	*pRem = a % b;	// rem = a % b;

	// 계산된 몫을 호출 함수에 반환
	return quot;
}
