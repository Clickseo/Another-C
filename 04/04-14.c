// 값에 의한 전달 -- pass by Value
#include <stdio.h>

// 함수 원형 선언: SWAP 함수
void  SWAP(int,  int);

int main(void)
{
	// main 함수 내부의 지역 변수 a와 b
	int	a = 10, b = 20;

	printf("호출 전: a = %d, b = %d \n", a, b);	// 10 20
	SWAP(a,  b);
	printf("호출 후: a = %d, b = %d \n", a, b);	// 10 20

	return 0;
}

// SWAP 함수: 2개의 정수 값을 교환한다.
void  SWAP(int  a,  int  b) {
	int	temp;

	temp = a;
	a = b;
	b = temp;
}
