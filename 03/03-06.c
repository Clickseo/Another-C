#include <stdio.h>
int main(void)
{
	int	a = 256;
	
	char	*pc = &a;
	int	*pi = &a;
	float	*pf = &a;
	double	*pd = &a;

	printf("a        : %d \n", a);		// 256
	printf("a (*pc) : %d \n", *pc);		// 0
	printf("a (*pi) : %d \n", *pi);		// 256
	printf("a (*pf) : %f \n", *pf);		// 0.000000
	printf("a (*pd) : %f \n", *pd);		// 0.000000

	return 0;
}
