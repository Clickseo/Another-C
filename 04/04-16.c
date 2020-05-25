#include <stdio.h>

// 함수 원형 선언 : DIV 함수 -- 몫과 나머지를 구하는 함수
int	DIV(int, int);

int main(void)
{
	// main 함수 내부의 지역 변수 a와 b 그리고 quot, rem
	int	a = 10, b = 3;
	int	quot, rem;

	quot = DIV(a, b);

	printf("몫 : %d, 나머지 : %d \n", quot, rem);	// 1, ???

	return 0;
}

int	DIV(int a, int b) {
	int	quot, rem;	// DIV 함수 내부의 지역 변수 quot와 rem

	quot = a / b;		// 몫 계산
	rem = a % b;		// 나머지 게산

	printf("몫 : %d, 나머지 : %d \n", quot, rem);	// 3, 1

	// 함수는 최대 하나의 값만을 반환할 수 있다.
	return quot, rem;
}
