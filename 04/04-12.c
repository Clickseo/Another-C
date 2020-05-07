#include <stdio.h>

// 함수 원형 선언 : Factorial 함수
int  Factorial(int  n);

int main(void)
{
	int	num;

	printf("임의의 정수 입력 : ");
	scanf_s("%d", &num);		// scanf("%d", &num);

	// Factorial( ) 함수 호출
	printf("Factorial %d : %d \n", num, Factorial(num) );

	return 0;
}

// 함수 정의 : Factorial 함수
int  Factorial(int  n)
{
	// 재귀 함수의 탈출 조건
	if(n <= 1)
		return 1;

	// 재귀 함수 호출 : Factorial 함수 내부에서 Factorial 함수 호출
	return  n * Factorial(n - 1);
}
