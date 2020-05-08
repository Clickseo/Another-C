#include <stdio.h>

#define  ADD(a, b)	((a)  +  (b))
#define  SUB(a, b)	((a)  -  (b))
#define  MUL(a, b)	((a)  *  (b))
#define  DIV(a, b)	((a)  /  (b))

#define  MAX(a, b)	 (((a) > (b))  ?  (a)  :  (b))
#define  MIN(a, b)	(((a) < (b))  ?  (a)  :  (b))

#define  ABS(a)		(((a) > 0)  ?  (a)  :  -(a))

int main(void)
{
	int		a, b;

	printf("두 정수 입력: ");
	scanf("%d %d", &a, &b);

	// 매크로 함수를 이용한 사칙연산
	printf("덧  셈 연산: %d \n", ADD(a, b) );
	printf("나눗셈 연산: %d \n", SUB(a, b) );
	printf("곱  셈 연산: %d \n", MUL(a, b) );
	printf("나눗셈 연산: %d \n\n", DIV(a, b) );

	// 매크로 함수를 이용한 최대값과 최소값
	printf("최댓값: %d \n", MAX(a, b) );
	printf("최솟값: %d \n\n", MIN(a, b) );

	// 매크로 함수를 이용한 절대값
	printf("변수 a의 절댓값: %d \n", ABS(a) );
	printf("변수 b의 절댓값: %d \n\n", ABS(b) );

	return 0;
}
