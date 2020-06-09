// 함수 포인터
#include <stdio.h>

int ADD(int, int);
int SUB(int, int);
int MUL(int, int);
int DIV(int, int);

void OUTPUT(int (*)(int, int));

int main(void)
{
	int	num;

	printf("### 사칙연산 ### \n\n");
	printf("1) 덧  셈 연산 \n");
	printf("2) 뺄  셈 연산 \n");
	printf("3) 곱  셈 연산 \n");
	printf("4) 나눗셈 연산 \n\n");

	printf("연산의 종류 선택 : ");
	scanf_s("%d", &num);

	switch(num) {
		case 1: OUTPUT(ADD);	break;
		case 2: OUTPUT(SUB);	break;
		case 3: OUTPUT(MUL);	break;
		case 4: OUTPUT(DIV);	break;
		default: printf("잘못된 선택!!! \n");
			  return 0;
	}

	return 0;
}

void OUTPUT(int (*p)(int, int)) {
	int		a = 10, b = 20;
	printf("연산 결과 : %d \n", p(a, b));
}

int ADD(int a, int b)	{	return a + b;	}
int SUB(int a, int b)	{	return a - b;	}
int MUL(int a, int b)	{	return a * b;	}
int DIV(int a, int b)	{	return a / b;	}
