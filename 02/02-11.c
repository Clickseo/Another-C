#include <stdio.h>
int main(void)
{
	int	a = 10;
	int	b = -128;

	// 2의 보수 연산
	a = ~a + 1;
	b = ~b + 1;

	printf("a : %d \n", a);		// -10
	printf("b : %d \n", b);		// 128

	return 0;
}
