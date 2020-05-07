#include <stdio.h>
int main(void)
{
	int	a = 10;
	void	*p;

	p = &a;

	printf("a : %d \n", *p );		// error

	return 0;
}
