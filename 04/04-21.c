#include <stdio.h>

void OUTPUT(void);

// 전역변수 선언 : 프로그램 실행 시 데이터 영역에 할당
int	a;	// 0으로 자동 초기화

int main(void)
{
	// 초기화 된 전역변수 출력
	printf("a : %d \n", a);		// 0

	// 함수 호출 : OUTPUT 함수 -- 전역변수 a의 출력 및 후위증가
	OUTPUT();

	// OUTPUT 함수 내부에서 증가 된 전역변수 출력
	printf("a : %d \n", a);		// 1

	return 0;
}

void OUTPUT(void) {
	// 초기화 된 전역변수 출력
	printf("a : %d \n", a);		// 0	
	a++;				// 전역변수의 후위 증가
}
