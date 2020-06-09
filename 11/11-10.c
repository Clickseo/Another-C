// 함수 포인터
#include <stdio.h>

int ADD(int, int);
int SUB(int, int);
int MUL(int, int);
int DIV(int, int);

int main(void)
{
	int	a = 10, b = 20;
	int	(*p)(int, int);		// 함수 포인터

	p = ADD;
	printf("%d + %d = %d \n", a, b, p(10, 20));  	// ADD(10, 20)

	p = SUB;
	printf("%d + %d = %d \n", a, b, p(10, 20));  	// SUB(10, 20)

	p = MUL;
	printf("%d + %d = %d \n", a, b, p(10, 20));  	// MUL(10, 20)

	p = DIV;
	printf("%d / %d = %d \n", a, b, p(10, 20));  	// DIV(10, 20)

	return 0;
}

int ADD(int a, int b)	{	return a + b;	}
int SUB(int a, int b)	{	return a - b;	}
int MUL(int a, int b)	{	return a * b;	}
int DIV(int a, int b)	{	return a / b;	}
