#include <stdio.h>
void	DIV(int, int, int *, int *);
int main(void)
{
	int	a = 10, b = 3;
	int	quot, rem;

	DIV(a, b, &quot, &rem);

	printf("몫 : %d, 나머지 : %d \n", quot, rem);	// 3, 1

	return 0;
}

void	DIV(int a, int b, int *pQuot, int *pRem)
{
	*pQuot = a / b;		// quot = a / b;
	*pRem = a % b;		// rem = a % b;

	return;
}
