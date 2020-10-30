#include <stdio.h>

// 매크로 함수
#define	DIV(a, b)	(a / b)

int main(void)
{
	int	res;

	res = DIV(10, 3);

	printf("res = %d \n", res);		// res = 3

	return 0;
}
