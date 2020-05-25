/*
	재귀 함수(Recursive Function)
		- 자기 자신의 함수를 호출함으로써, 반복적인 처리를 하는 함수
		- 주의 : 반드시 탈출(종료) 조건 명시 -- Stack Overflow 오류 발생 주의
*/

#include <stdio.h>

// 함수 원형 선언 : Factorial 함수
int  Factorial(int  num);

int main(void)
{
	int	num;

	printf("임의의 정수 입력 : ");
	scanf_s("%d", &num);		// scanf("%d", &num);

	// Factorial 함수 호출
	printf("Factorial %d : %d \n", num, Factorial(num) );

	return 0;
}

// 함수 정의 : Factorial 함수 -- 재귀적 용법
int  Factorial(int  num) {	
	if(num <= 1)		// 재귀 함수의 탈출 조건
		return 1;

	// 재귀 호출 : Factorial 함수 내부에서 Factorial 함수 호출
	return  num * Factorial(num - 1);
}
