#include <stdio.h>
#define	ADD(a, b)	((a) + (b))
int main(void)
{
	int	res;

	res = ADD(10, 20);

	printf("res = %d \n", res);		// res = 30

	return 0;
}
