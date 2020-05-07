#include <stdio.h>
int main(void)
{
	char	a = 'A';
	int	i = 10;
	float	f = 10.5;
	double	d = 100.5;

	void	*p;

	p = &a;
	printf("a : %c \n", *(char *)p );

	p = &i;
	printf("a : %d \n", *(int *)p );

	p = &f;
	printf("a : %f \n", *(float *)p );

	p = &d;
	printf("a : %f \n", *(double *)p );

	return 0;
}
