#include <stdio.h>
#define	DIV(a, b)	(a / b)
int main(void)
{
	int	res;

	res = DIV(10, 3);

	printf("res = %d \n", res);		// res = 3

	return 0;
}
