#include <stdio.h>
int	DIV(int, int);
int main(void)
{
	int	a = 10, b = 3;
	int	quot, rem;

	quot = DIV(a, b);

	printf("¸ò : %d, ³ª¸ÓÁö : %d \n", quot, rem);	// 1, ???

	return 0;
}

int	DIV(int a, int b)
{
	int	quot, rem;

	quot = a / b;
	rem = a % b;

	printf("¸ò : %d, ³ª¸ÓÁö : %d \n", quot, rem);	// 3, 1

	return quot, rem;
}
