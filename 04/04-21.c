#include <stdio.h>
void OUTPUT(void);

// 전역 변수 선언 : 프로그램 실행 시 데이터 영역에 할당
int	a;	// 0으로 자동 초기화

int main(void)
{
	// 초기화 된 전역 변수의 출력
	printf("a : %d \n", a);		// 0

	OUTPUT();

	// 증가 된 전역 변수의 출력
	printf("a : %d \n", a);		// 1

	return 0;
}

void OUTPUT(void)
{
	// 초기화 된 전역 변수의 출력
	printf("a : %d \n", a);		// 0
	
	// 전역 변수의 후위 증가
	a++;
}
