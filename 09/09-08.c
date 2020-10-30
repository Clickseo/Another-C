#include <stdio.h>

// 함수 원형: 일반 함수
int		DIV_int(int, int);		// 정수형 처리를 위한 나눗셈 함수
double	DIV_double(double, double);		// 실수형 처리를 위한 나눗셈 함수

int main(void)
{
	int	res1;
	double	res2;

	res1 = DIV_int(10, 3);
	res2 = DIV_double(10.0, 3.0);

	printf("res1 = %d \n", res1);		// res1 = 3
	printf("res2 = %.1f \n", res2);		// res2 = 3.3

	return 0;
}

int	DIV_int(int a, int b)		{ return a / b; }
double	DIV_double(double a, double b)	{ return a / b; }
