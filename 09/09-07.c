#include <stdio.h>

// 함수 원형: 일반 함수
int	DIV(int, int);

int main(void)
{
	double		res;

	// 데이터 손실 발생
	res = DIV(10.0, 3.0);

	printf("res = %.1f \n", res);	// res = 3.0

	return 0;
}

int	DIV(int a, int b) { return a / b; }
