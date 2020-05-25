#include <stdio.h>

void	OUTPUT(void);

int main(void)
{
	// 첫 번째 블록 : 지역 변수 선언 및 초기화
	int	a = 10;

	printf("a : %d \n", a);		// 10
	{
		// 두 번째 블록 : 지역 변수 선언 및 초기화
		int	a = 20;
		printf("a : %d \n", a);	// 20
	}
	printf("a : %d \n", a);		// 10

	// 함수 호출 : OUTPUT 함수
	OUTPUT();

	return 0;
}

void	OUTPUT(void) {	
	int	a;			// OUTPUT 함수 내부의 지역 변수
	
	printf("a : %d \n", a);		// error C4700: 초기화되지 않은 'a' 지역 변수를 사용했습니다.
}
