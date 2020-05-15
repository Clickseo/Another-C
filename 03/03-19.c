#include <stdio.h>
int main(void)
{
	char	a = 'A';
	int	i = 10;
	float	f = 10.5;
	double	d = 100.5;

	void	*p;

	p = &a;
	printf("a : %c \n", *(char *)p );	// a

	p = &i;
	printf("a : %d \n", *(int *)p );	// b

	p = &f;
	printf("a : %f \n", *(float *)p );	// c

	p = &d;
	printf("a : %f \n", *(double *)p );	// d

	return 0;
}
