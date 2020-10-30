#include <stdio.h>

// 함수 원형: 일반 함수
int	ADD(int, int);

int main(void)
{
	int	res;

	res = ADD(10, 20);

	printf("res = %d \n", res);		// res = 30

	return 0;
}

int	ADD(int a, int b) { return a + b; }
