#include <stdio.h>
void	OUTPUT(void);

// 전역변수 선언: 자동 초기화 -- 0
int	a;

int main(void)
{
	// 지역변수 선언 및 초기화
	int	a = 10;
	printf("a : %d \n", a);		// a : 10

	// 함수 호출: OUTPUT 함수 -- 전역변수 값의 출력
	OUTPUT();

	return 0;
}

void	OUTPUT(void) {	// 전역변수 값의 출력	
	printf("a: %d \n", a);		// a : 0
}
