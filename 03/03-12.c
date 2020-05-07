#include <stdio.h>
int main(void)
{
	int	a = 10;
	
	char	*pc = &a;
	int	*pi = &a;
	float	*pf = &a;
	double	*pd = &a;

	printf("pc : %p, pc + 1 : %p \n", pc, pc + 1 );
	printf("pi : %p, pi + 1  : %p \n", pi, pi + 1 );
	printf("pf : %p, pf + 1  : %p \n", pf, pf + 1 );
	printf("pd : %p, pd + 1 : %p \n", pd, pd + 1 );

	return 0;
}
