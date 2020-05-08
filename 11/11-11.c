#include <stdio.h>

int ADD(int, int);
int SUB(int, int);
int MUL(int, int);
int DIV(int, int);

int main(void)
{
	int	a = 10, b = 20, num;
	int	(*arr[4])(int, int) = {ADD, SUB, MUL, DIV};

	printf("### 사칙 연산 ### \n\n");
	printf("1) 덧  셈 연산 \n");
	printf("2) 뺄  셈 연산 \n");
	printf("3) 곱  셈 연산 \n");
	printf("4) 나눗셈 연산 \n\n");
	printf("연산의 종류 선택 : ");
	scanf("%d", &num);

	// 1 ~ 4 이외의 메뉴 선택 시 에러 처리
	if(num < 1 || num > 4)
	{
		printf("잘못된 메뉴 선택!!! \n");
		return 0;
	}
	// 메뉴 선택에 따른 함수 호출
	printf("연산 결과 : %d \n", arr[num-1](10, 20));

	return 0;
}

int ADD(int a, int b)	{	return a + b;	}
int SUB(int a, int b)	{	return a - b;	}
int MUL(int a, int b)	{	return a * b;	}
int DIV(int a, int b)	{	return a / b;	}
