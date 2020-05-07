#include <stdio.h>
void	OUTPUT(void);

// 전역 변수 선언
int	a;

int main(void)
{
	// 지역 변수 선언 및 초기화
	int	a = 10;
	printf("a : %d \n", a);		// a : 10

	OUTPUT();

	return 0;
}

void	OUTPUT(void)
{
	// 전역 변수의 접근 및 출력
	printf("a : %d \n", a);		// a : 0
}
